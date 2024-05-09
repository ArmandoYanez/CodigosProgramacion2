cmake_minimum_required(VERSION 3.26)
project(Herencia)

set(CMAKE_CXX_STANDARD 17)

add_executable(Herencia main.cpp
        Pirata.cpp
        Pirata.h
        Yonkou.cpp
        Yonkou.h
        ReyDeLosPiratas.cpp
        ReyDeLosPiratas.h
        Persona.cpp
        Persona.h
        Haki.cpp
        Haki.h
        Fruta.h
        Fruta.cpp
        Protagonista.h
        Protagonista.cpp
)
