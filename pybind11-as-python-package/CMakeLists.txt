cmake_minimum_required(VERSION 3.15)

project(my_cpp_module)

set(PYBIND11_FINDPYTHON ON)
find_package(pybind11 REQUIRED)

pybind11_add_module(my_cpp_module csrc/my_module.cpp)

install(TARGETS my_cpp_module DESTINATION my_package)
