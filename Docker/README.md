# Fixedwing Aircraft Control System
The goal of this project is to create the hardware infrastructure needed to control any sort of remote aircraft using ROS to support different localization systems and control schemes.

# Docker Containers
Follow whatever online instructions to install docker on your computer.

## Linux:
Once you have the Dockerfile, type the following command:
```
./BuildAndRun.sh
```
This should build the docker image and run an instance of the container. At this point your terminal should now show you inside the docker container. From here you can enter any normal linux terminal commands.


## Windows:
Once you have the Dockerfile, type the following command into powershell:
```
.\BuildAndRun_Windows.bat
```
This should build the docker image and run an instance of the container. At this point your terminal should now show you inside the docker container. From here you can enter any normal linux terminal commands.

# Setting up the container
The next step is to set up the container. There were a few things that I couldn't manage to get working in the Dockerfile (Vicon setup, python libraries, etc.) So you will need to cd into the "Docker" folder and run "ContainerInit.sh"

```
cd /FW_Control/src/Docker
./ContainerInit.sh
```

# Packages