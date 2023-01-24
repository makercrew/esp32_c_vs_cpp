# The following lines of boilerplate have to be in your project's
# CMakeLists in this exact order for cmake to work correctly
cmake_minimum_required(VERSION 3.5)

set(CMAKE_CXX_STANDARD 14)
set(EXTRA_COMPONENT_DIRS ./components)

set(SDKCONFIG "${CMAKE_BINARY_DIR}/sdkconfig")
set(SDKCONFIG_DEFAULTS "sdkconfig.defaults")

# if($ENV{PROFILING})
#     set(SDKCONFIG_DEFAULTS "sdkconfig.defaults;sdkconfig.profiling")
#     add_compile_definitions(PROFILING=1)
# endif()

include($ENV{IDF_PATH}/tools/cmake/project.cmake)

# if($ENV{PRODUCTION})
#     message(STATUS "Building Production")
#     add_compile_definitions(PRODUCTION=1)
# endif()

project(c_versus_cpp)

idf_build_set_property(COMPILE_OPTIONS "-Wall" APPEND)
idf_build_set_property(COMPILE_OPTIONS "-Wextra" APPEND)
idf_build_set_property(COMPILE_OPTIONS "-Werror" APPEND)
idf_build_set_property(COMPILE_OPTIONS "-Wno-unused" APPEND)
idf_build_set_property(COMPILE_OPTIONS "-Wdisabled-optimization" APPEND)
idf_build_set_property(COMPILE_OPTIONS "-Winit-self" APPEND)
idf_build_set_property(COMPILE_OPTIONS "-Wmissing-include-dirs" APPEND)
idf_build_set_property(CXX_COMPILE_OPTIONS "-Wnoexcept" APPEND)
idf_build_set_property(CXX_COMPILE_OPTIONS "-Woverloaded-virtual" APPEND)
idf_build_set_property(CXX_COMPILE_OPTIONS "-Wstrict-null-sentinel" APPEND)


# if($ENV{PRODUCTION})
#     # Override menuconfig setting to ensure proper production optimization
#     idf_build_set_property(COMPILE_OPTIONS "-O2" APPEND)
# endif()