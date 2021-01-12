cmake_minimum_required(VERSION 3.17)
project(c C)

set(CMAKE_C_STANDARD 99)

# chapter1 examples
add_executable(1.1_hello_world chapter1/examples/1.1_hello_world.c)

add_executable(main chapter1/main.c)
add_executable(temperature chapter1/temperature.c)
add_executable(copy chapter1/copy.c)
add_executable(count chapter1/count.c)
add_executable(lines chapter1/lines.c)
add_executable(char_exercise chapter1/char_exercise.c)
