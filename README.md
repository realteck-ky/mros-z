# mros-z

`mros-z` (formally "mROS Z") is a lightweight runtime environment designed specifically for [Zephyr RTOS](https://www.zephyrproject.org/) and [Zenoh](https://zenoh.io/).
We aim to enable ROS 2 node implementations to operate (even partially) on embedded microcontrollers while maintaining a certain level of compatibility with the ROS 2 API (rclcpp/rclc).
We employ [zenoh-pico](https://github.com/eclipse-zenoh/zenoh-pico) as the communication middleware to enable interoperability with native ROS 2 systems running on [rmw_zenoh](https://github.com/ros2/rmw_zenoh).

We have been developing [mros2 (mROS 2)](https://github.com/mROS-base/mros2), but we are now seeking to establish a new style for the embedded technology within the ROS 2 ecosystem by leveraging the insights (and bitter experiences) we have gained so far.

## Getting Started & Installation

`mros-z` supports three distinct user workflows depending on your environment and development goals. Choose the section that fits your use case:

### 1. For All-in-One Workspace Builders (New Users)

If you want to set up a brand-new Zephyr workspace from scratch that includes Zephyr RTOS, `zenoh-pico`, and `mros-z` all at once:

```bash
# Initialize a new workspace using mros-z's west.yml
west init -m https://github.com/mROS-base/mros-z --mr main ~/mrosz-workspace
west update
```

### 2. For Existing Zephyr Users

If you already have your own Zephyr workspace and want to add `mros-z` and its dependencies (`zenoh-pico`) via West local manifests:

1. Copy or symlink [mros-z-depends.yml](zephyr/submanifests/mrosz-submanifests.yml) into your workspace's local manifests directory:

    ```bash
    mkdir -p /path/to/zephyrproject/.west/local-manifests
    ln -sfn /path/to/mros-z/zephyr/submanifests/mrosz-submanifests.yml /path/to/zephyrproject/.west/local-manifests/
    ```

2. Update your workspace to fetch the modules:

    ```bash
    west update
    ```

### 3. For mros-z Module Developers using Dev Container

If you are developing `mros-z` itself, the recommended way is to use the built-in Dev Container:

1. Open the `mros-z` repository root in VS Code.
2. Reopen the project inside the Dev Container (**Reopen in Container**).
3. Build the sample application directly from the workspace:

```bash
west build -b <your_board> samples/app/basic
```
