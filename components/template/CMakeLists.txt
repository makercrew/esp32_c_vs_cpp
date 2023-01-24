if($ENV{C_VERSION})
    idf_component_register(SRCS "c_src.c"
                           INCLUDE_DIRS ".")
endif()

if($ENV{CPP_VERSION})
    idf_component_register(SRCS "cpp_src.cpp"
                           INCLUDE_DIRS ".")
endif()
