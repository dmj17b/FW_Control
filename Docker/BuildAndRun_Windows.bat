
docker build -t airplanecontrol .

docker run --rm --net host -it --mount type=bind,source="C:\Users\david\OneDrive - Florida State University\TestROS\FW_Control",target=/FW_Control/src -it airplanecontrol
