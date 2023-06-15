#!/bin/bash
script_dir="/home/orl1/Documents/AirplaneControl"

docker build -t myros -f "${script_dir}/Dockerfile" "${script_dir}"

docker run --rm --net host --env="DISPLAY" --volume="/tmp/.X11-unix:/tmp/.X11-unix" \
--mount type=bind,source="${script_dir}/../",target=/AirplaneControl/src -it myros 
