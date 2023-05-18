# This fork
This branch will be for linux and it will use cmake instead of premake.
It should compile in windows ig .. It's tested on linux only tho.

- It uses my fork of imgui instead of the cherno's.
- It uses imgui's default font not Roboto(the one the cherno is useing)

# Walnut

Walnut is a simple application framework built with Dear ImGui and designed to be used with Vulkan - basically this means you can seemlessly blend real-time Vulkan rendering with a great UI library to build desktop applications. The plan is to expand Walnut to include common utilities to make immediate-mode desktop apps and simple Vulkan applications.

![WalnutExample](https://hazelengine.com/images/ForestLauncherScreenshot.jpg)
_<center>Forest Launcher - an application made with Walnut</center>_

## Requirements
- CMake >= 3.16

## Getting Started
```bash
mkdir build && cd build
cmake ..
cmake --build . -jN # replace N with amount of cores u want to build with
```

### 3rd party libaries
- [Dear ImGui](https://github.com/ocornut/imgui)
- [GLFW](https://github.com/glfw/glfw)
- [stb_image](https://github.com/nothings/stb)
- [GLM](https://github.com/g-truc/glm) (included for convenience)