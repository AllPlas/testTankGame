cmake_minimum_required(VERSION 3.22)
project(sfmlTanks)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

find_package(SFML COMPONENTS graphics REQUIRED)
set(THREADS_PREFER_PTHREAD_FLAG ON)
find_package(Threads REQUIRED)

add_executable(sfmlTanks src/main.cpp src/Tank.cpp src/Tank.h src/Map.cpp src/Map.h src/View.cpp src/View.h src/Bullet.cpp src/Bullet.h src/config.h)
target_link_libraries(sfmlTanks PRIVATE Threads::Threads sfml-graphics sfml-window)