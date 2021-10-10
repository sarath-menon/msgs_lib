

add_library(quadcopter_msgs_lib INTERFACE)

target_sources(quadcopter_msgs_lib INTERFACE
msgs/PositionCommand.idl
msgs/AttitudeCommand.idl
msgs/AttitudeRateCommand.idl
msgs/MotorCommand.idl
msgs/Mocap.idl
)


target_link_libraries(quadcopter_msgs_lib INTERFACE
basic_msgs_lib
)
