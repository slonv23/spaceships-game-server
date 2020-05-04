#!/bin/bash

DIR="$( cd "$( dirname "${BASH_SOURCE[0]}" )" >/dev/null 2>&1 && pwd )"
PROTO_DIR=$(readlink -f "$DIR/../../../common/proto")
PROTO_OUTPUT_DIR=$(readlink -f "$DIR/../src/proto")

echo "Converting files from $PROTO_DIR to $PROTO_OUTPUT_DIR"

FILES=$(find $PROTO_DIR -type f -name "*.proto")

for proto in $FILES; do
    echo "Compiling $proto"
    protoc -I="$PROTO_DIR" --cpp_out="$PROTO_OUTPUT_DIR" "$proto";
done