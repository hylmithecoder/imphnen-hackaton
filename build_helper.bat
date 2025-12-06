@echo off
cd tools\helper_builder

if not exist build-helper (
    cmake -B build -S .
    cmake --build build
    copy build\HelperProjectBuild.exe .
)

HelperProjectBuild.exe
