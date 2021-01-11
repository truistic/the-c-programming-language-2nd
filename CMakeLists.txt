cmake_minimum_required(VERSION 3.17)
project(c C)

set(CMAKE_C_STANDARD 99)

add_executable(main chapter1/main.c)
add_executable(temperature chapter1/temperature.c)
add_executable(copy chapter1/copy.c)
add_executable(count chapter1/count.c)
add_executable(lines chapter1/lines.c)
add_executable(char_exercise chapter1/char_exercise.c)
