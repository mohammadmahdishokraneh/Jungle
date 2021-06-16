cmake_minimum_required(VERSION 3.15)
project(jungle)

set(CMAKE_CXX_STANDARD 14)

add_executable(jungle main.cpp Animal.cpp Animal.h WildAnimal.cpp WildAnimal.h DomesticAnimal.cpp DomesticAnimal.h Jungle.cpp Jungle.h Pet.h Pet.cpp)