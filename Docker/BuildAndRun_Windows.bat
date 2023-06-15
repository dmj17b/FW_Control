
docker build -t airplanecontrol .

docker run --rm --net host -it --mount type=bind,source=".",target=/FW_Control -it airplanecontrol
