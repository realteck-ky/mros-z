zephyr_library()
zephyr_include_directories(../include)
zephyr_library_sources(
    ../src/mros-z.cpp
    ../src/node.cpp
    ../src/publisher.cpp
    ../src/subscription.cpp
)


