#!/bin/bash
script_dir=$(pwd)

# docker build -t airplanecontrol .
docker build --network=host -t airplanecontrol .


docker run --rm --net host --device=/dev/ttyACM0 --env="DISPLAY" --volume="/tmp/.X11-unix:/tmp/.X11-unix" --mount type=bind,source="${script_dir}/../",target="/FW_Control/src" -it airplanecontrol
