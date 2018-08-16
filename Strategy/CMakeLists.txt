cmake_minimum_required(VERSION 3.0.0)

project(Strategy)

set(CMAKE_CXX_STANDARD 17)

include_directories(inc 
                    src)

add_executable(Strategy main.cpp 
                        inc/Duck.hpp
                        inc/FlyNoWay.hpp
                        inc/FlyWithWings.hpp
                        inc/IFlyBehavior.hpp
                        inc/IQuackBehavior.hpp
                        inc/MallardDuck.hpp
                        inc/MuteQuack.hpp
                        inc/Quack.hpp
                        inc/Squeak.hpp
                        src/Duck.cpp
                        src/FlyNoWay.cpp
                        src/FlyWithWings.cpp
                        src/MallardDuck.cpp
                        src/MuteQuack.cpp
                        src/Quack.cpp
                        src/Squeak.cpp)