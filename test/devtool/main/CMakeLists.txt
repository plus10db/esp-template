idf_component_register(
    SRCS
        "console.cpp"
        "devtool.cpp"
    INCLUDE_DIRS "."
    REQUIRES
        console
        lt-now
    )
