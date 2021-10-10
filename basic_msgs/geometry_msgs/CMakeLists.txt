

add_library(geometry_msgs_lib INTERFACE)

target_sources(geometry_msgs_lib INTERFACE
msgs/EulerAngleZYX.idl
msgs/Pose.idl
msgs/Position.idl
msgs/Quaternion.idl
)


target_link_libraries(geometry_msgs_lib INTERFACE
std_msgs_lib
)
