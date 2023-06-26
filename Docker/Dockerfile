FROM ros:foxy

#Set display ip address to host ip. Make sure to add :0.0 after ip.
ENV DISPLAY=172.18.240.1:0.0
ENV DEBIAN_FRONTEND=noninteractive

WORKDIR /FW_Control


# Installing basic requirements
RUN apt update -y
RUN apt upgrade -y 
RUN apt install net-tools -y
RUN apt install x11-apps -y

RUN apt install ros-foxy-desktop -y

RUN apt install python3.8-venv -y
RUN apt install python3-pip -y


#Add terminal sourcing to .bashrc file
RUN echo "source /opt/ros/foxy/setup.bash" >> ~/.bashrc
RUN echo "source /FW_Control/install/setup.bash" >> ~/.bashrc
RUN echo "export ROS_DOMAIN_ID=0" >> ~/.bashrc
RUN echo "export ROS_LOCALHOST_ONLY=1" >> ~/.bashrc

# RUN source $PWD/env/bin/activate