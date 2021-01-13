cmake_minimum_required(VERSION 3.17)
project(c C)

set(CMAKE_C_STANDARD 99)

# chapter1 examples
add_executable(1.1_hello_world chapter1/examples/1.1_hello_world.c)
add_executable(1.2_temperature chapter1/examples/1.2_temperature.c)

# chapter1 exercises
add_executable(1-01 chapter1/exercises/1-01.c)
add_executable(1-02 chapter1/exercises/1-02.c)
add_executable(1-03 chapter1/exercises/1-03.c)
add_executable(1-04 chapter1/exercises/1-04.c)

add_executable(temperature chapter1/temperature.c)
add_executable(copy chapter1/copy.c)
add_executable(count chapter1/count.c)
add_executable(lines chapter1/lines.c)
add_executable(char_exercise chapter1/char_exercise.c)
