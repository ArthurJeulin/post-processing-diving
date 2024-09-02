#! /bin/bash
# **********************************************************
#      2024 : Arthur JEULIN
#      Copyright (c) Arthur JEULIN 
#      Created by Arthur JEULIN on 07/02/2024.
# **********************************************************
#
# Module : Install VCPKG Folder for Linux User
#



git clone https://github.com/microsoft/vcpkg.git
cd vcpkg
./bootstrap-vcpkg.sh