# Building

```
git submodule update --init --recursive
mkdir build
cd build
cmake -DUSE_JUICE=1 -DUSE_GNUTLS=1 ..
make
```
