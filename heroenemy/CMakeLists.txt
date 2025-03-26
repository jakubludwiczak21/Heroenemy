cmake_minimum_required(VERSION 3.24)
project(heroenemy)

set(CMAKE_CXX_STANDARD 17)

add_executable(heroenemy main.cpp Classes/Actor.cpp Classes/Actor.h Classes/Enemy.cpp Classes/Enemy.h Classes/Hero.cpp Classes/Hero.h Classes/Engine.cpp Classes/Engine.h Classes/Game.cpp Classes/Game.h Classes/Game_txt.cpp Classes/Game_txt.h)
set(CMAKE_EXE_LINKER_FLAGS "-static")