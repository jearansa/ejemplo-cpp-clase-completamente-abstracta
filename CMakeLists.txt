cmake_minimum_required(VERSION 3.10)

project(Ejemplo_Cpp_Clase_Completamente_Abstracta)

set(CMAKE_CXX_STANDARD 23)

include_directories(.)

add_executable(Ejemplo_C__Clase_Completamente_Abstracta
        Compara.h
        IntegerCompara.cpp
        IntegerCompara.h
        Principal.cpp
        StringCompara.cpp
        StringCompara.h
        ToString.h)
