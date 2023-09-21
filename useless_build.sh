mkdir build;
g++ main.cpp -std=c++11 -lpthread /usr/lib/libgtest.a -o  ./build/main;
./build/main;
cd ..
