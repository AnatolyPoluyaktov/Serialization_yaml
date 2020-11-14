# Serialization_yaml
installing and making yaml-cpp:

0. dir \< path to source directory \>
0. git clone git@github.com:jbeder/yaml-cpp.git 
0. cd yaml-cpp
0. mkdir build
0. cmake -G Ninja -DCMAKE_CXX_COMPILER=clang++ -DCMAKE_BUILD_TYPE=Release -DBUILD_SHARED_LIBS=ON ..
0. ninja -v
0. open CMakeCache.txt and edit in it:CMAKE_INSTALL_PREFIX:PATH: \<absolute path to yaml-cpp \>/prefix (optional)
0. ninja -v install
