if($ENV{C_VERSION})
    message(STATUS "Building the C Version")
    idf_component_register(SRCS "main.c")
endif()

if($ENV{CPP_VERSION})
    message(STATUS "Building the C++ Version")
    idf_component_register(SRCS "main.cpp")
endif()
