
cmake_minimum_required(VERSION 3.28)

project(
    KernelSim
    VERSION 0.0
    LANGUAGES C
)

include_directories(
    "utils"
    "error"
    "input"
    "testing"
)

add_library(Utils "utils/utils.h" "utils/utils.c")
add_library(
    DataStructures 
    "data_structures/linked_list.h"
    "data_structures/linked_list.c"
)
add_library(
    Testing
    "testing/testing.h"
    "testing/testing.c"
)
add_executable(
    UtilsTest
    "utils/utils.h"
    "utils/utils.c"
    "testing/testing.h"
    "testing/testing.c"
    "testing/utils_testing.c"
)


