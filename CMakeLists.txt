cmake_minimum_required(VERSION 3.27)
project(awesome)

set(CMAKE_CXX_STANDARD 11)

add_executable(awesome main.cpp
        tree/BinaryTree.cpp
        tree/BinaryTree.h)
add_executable(Hello Hello.cpp)
add_executable(BinaryTree tree/BinaryTree.cpp)