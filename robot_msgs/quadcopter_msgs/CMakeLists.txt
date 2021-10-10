

add_library(quadcopter_msgs_lib INTERFACE)

target_sources(quadcopter_msgs_lib INTERFACE
msgs/AttitudeCommand.h
)


target_link_libraries(quadcopter_msgs_lib INTERFACE
basic_msgs_lib
)
