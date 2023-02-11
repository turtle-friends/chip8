# Chip8

## Description

 CHIP-8 is a programming language for 8-bit computers.
 It is an interpreted language that was intended for game development.

## Getting Started

### Dependencies

* SDL 
* GTest
* CMake

### Installing

* Create a virtual environment
```
python3 -m venv env
```
* Activate your virtual environment
```
 . env/bin/activate
```
* Install Conan
```
pip install conan
```
* Install binary
```
mkdir build
cd build
conan install -s build_type=Debug -s compiler.libcxx=libstdc++11 .. --build=missing
cmake ..
cmake --build . 
```

### Executing program

```
./bin/chip8
```

## Authors

Jasmine -
[jaburialeh](https://github.com/jaburialeh)

Junior -
[jrbetancourt98](https://github.com/jrbetancourt98)

Richard -
[turtleboy00](https://github.com/turtleboy00)

Willy - 
[Willygilly](https://github.com/Willygilly)



## License

This project is licensed under the Zlib License - see the LICENSE file for details