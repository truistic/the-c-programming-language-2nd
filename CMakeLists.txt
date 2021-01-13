cmake_minimum_required(VERSION 3.17)
project(c C)

set(CMAKE_C_STANDARD 99)

# chapter1 examples
add_executable(1.1_hello_world chapter1/examples/1.1_hello_world.c)
add_executable(1.2_temperature chapter1/examples/1.2_temperature.c)
add_executable(1.3_temperature_for chapter1/examples/1.3_temperature_for.c)
add_executable(1.4_temperature_define chapter1/examples/1.4_temperature_define.c)
add_executable(1.5.1_copy chapter1/examples/1.5.1_copy.c)
add_executable(1.5.2_count.c chapter1/examples/1.5.2_count.c)
add_executable(1.5.3_lines.c chapter1/examples/1.5.3_lines.c)

# chapter1 exercises
add_executable(1-01 chapter1/exercises/1-01.c)
add_executable(1-02 chapter1/exercises/1-02.c)
add_executable(1-03 chapter1/exercises/1-03.c)
add_executable(1-04 chapter1/exercises/1-04.c)
add_executable(1-05 chapter1/exercises/1-05.c)
add_executable(1-06 chapter1/exercises/1-06.c)
add_executable(1-07 chapter1/exercises/1-07.c)
add_executable(1-08 chapter1/exercises/1-08.c)
add_executable(1-09 chapter1/exercises/1-09.c)
add_executable(1-10 chapter1/exercises/1-10.c)
