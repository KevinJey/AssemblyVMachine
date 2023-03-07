# AssemblyVMachine

This project is a virtual machine developed based on C++ to simulate the LC-3 machine, which has a relatively simple instruction set and can be used to write moderately complex assembler programs. Able to successfully run an assembler ending in.obj, such as 2048.

You can use this VM to run any .obj files.
These project has been given two examples for testing. 


## Usage

```bash
make # build this project
cd obj
assvm [image-file1] ...
# For example
assvm 2048.obj
assvm rogue.obj
```


## Example
```bash
cd test/
./2048
nixistar@ubuntu:~/AssemblyVMachine/test$ ./2048 
Control the game using WASD keys.
Are you on an ANSI terminal (y/n)? n
+-----------------------------+
|                                               |
|   2                                          |
|                                                |
|                     2                        |
|                                               |
|                                               |
|                                               |
|                                               |
|                                               |
+------------------------------+
```
### ScreenShot

[2048](PNG/screenshot_2048.png)

[Rouge](PNG/rogue.png)

## Reference

Original Project Website:
[Write your Own Virtual Machine](https://www.jmeiners.com/lc3-vm/#s0:12)
