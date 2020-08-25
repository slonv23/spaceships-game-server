#!/bin/bash

DIR="$( cd "$( dirname "${BASH_SOURCE[0]}" )" >/dev/null 2>&1 && pwd )"
PROTO_DIR=$(readlink -f "$DIR/../../common/proto")
PROTO_OUTPUT_DIR=$(readlink -f "$DIR/../src/proto")

echo "Converting files from $PROTO_DIR to $PROTO_OUTPUT_DIR"

FILES=$(find $PROTO_DIR -type f -name "*.proto")

for proto in $FILES; do
    echo "Compiling $proto"

    filename="$(basename -- $proto)"
    relativePath=${proto#"$PROTO_DIR/"}
    relativePath=${relativePath%"$filename"}
    if [ ! -z "$relativePath" ]
    then
        filepath="${relativePath}$filename"
    else
        filepath=$filename
    fi

    protoc -I="${PROTO_DIR}" --cpp_out="${PROTO_OUTPUT_DIR}" "$filepath";

    # fix includes
    tmp="${relativePath//"/"}"
    count=$((${#relativePath} - ${#tmp}))
    includePrefix=""
    for ((i = 1; i <= count; i++)); do
        includePrefix="\.\.\/$includePrefix"
    done

    if [ ! -z "$includePrefix" ]
    then
        filepathWithoutExt=${filepath%".proto"}  
        sed -i "s/^\#include\s\"\(.*\)\"/#include \"$includePrefix\1\"/g" "${PROTO_OUTPUT_DIR}/${filepathWithoutExt}.pb.h"
        sed -i "s/^\#include\s\"${relativePath//\//\\/}\(.*\)\"/#include \"\1\"/g" "${PROTO_OUTPUT_DIR}/${filepathWithoutExt}.pb.cc"
    fi
done
