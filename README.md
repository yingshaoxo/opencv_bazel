# A playground(template) for using C/C++ with OpenCV and Bazel.

### Bazel Installation
https://docs.bazel.build/versions/master/install-ubuntu.html#ubuntu

### Opencv Compile
```bash
git clone https://github.com/Itseez/opencv.git

cd opencv/

mkdir build install

cd build

apt install libgtk2.0-dev pkg-config

cmake -D CMAKE_BUILD_TYPE=Release -D CMAKE_INSTALL_PREFIX=/usr/local ..

make install
```

### Build
```
bazel build main:hello-world
```

### Run
```
./bazel-bin/main/hello-world yingshaoxo.jpg
```

### Test
```
bazel test test:hello-test
```
