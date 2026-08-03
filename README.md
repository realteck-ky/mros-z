# mros-z

`mros-z` (formally "mROS Z") is a lightweight runtime environment designed specifically for [Zephyr RTOS](https://www.zephyrproject.org/) and [Zenoh](https://zenoh.io/).
We aim to enable ROS 2 node implementations to operate (even partially) on embedded microcontrollers while maintaining a certain level of compatibility with the ROS 2 API (rclcpp/rclc).
We employ [zehon-pico](https://github.com/eclipse-zenoh/zenoh-pico) as the communication middleware to enable interoperability with native ROS 2 systems running on [rmw_zenoh](https://github.com/ros2/rmw_zenoh).

We have been developing [mros2 (mROS 2)](https://github.com/mROS-base/mros2), but we are now seeking to establish a new style for the embedded technology within the ROS 2 ecosystem by leveraging the insights (and bitter experiences) we have gained so far.
