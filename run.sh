#!/bin/bash

working_path=$PWD
rm -rf build
echo "try build ${working_path}"
echo "************************************************"
echo "start generate cake eclipse project..." 

if [ ! -d "build" ]; then 
    mkdir -p build
fi

cd build
cmake -DCMAKE_BUILD_TYPE=Debug ..

# execute make when you using colorge
# CC="colorgcc /usr/bin/gcc"  CXX="colorgcc  /usr/bin/g++" cmake -DCMAKE_BUILD_TYPE=Debug ..

# execute cmake when you using distcc
# export DISTCC_HOSTS="localhost 10.93.114.73"
# CC-"distcc /usr/bin/gcc CXX="distcc /usr/bin/g++" cmake -DCMAKE_BUILD_TYPE=Debug ..

echo "************************************************"
echo "start build make project..."
make -j4

if [ $? -ne 0 ]; then
    echo "build ${working_path} fail" 
    exit 1
fi

echo "build ${working_path} succ"
echo "************************************************"
echo "start run tests..."
echo "************************************************"

./tl_vi
