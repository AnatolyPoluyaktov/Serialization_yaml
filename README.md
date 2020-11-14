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
0. add in CMAKE_PREFIX_PATH: \<path to prefix>\
0. add in your CMakeLists.txt:
\
find_package(yaml-cpp) \
target_link_libraries(${PROJECT_NAME} PRIVATE  yaml-cpp)

installing and making libfyaml:

0. dir \< path to source directory \>
0. git clone git@github.com:pantoniou/libfyaml.git
0. cd libfyaml.
0. install Prerequisites: \ 
sudo apt-get install gcc autoconf automake libtool git make libltdl-dev pkg-config \
sudo apt-get install libyaml-dev \ 
sudo apt-get install check \
sudo apt-get install python3 python3-pip python3-setuptools \
pip3 install wheel sphinx git+http://github.com/return42/linuxdoc.git sphinx\_rtd\_theme sphinx-markdown-builder 

