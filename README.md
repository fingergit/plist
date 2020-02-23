# plist
plist for mingw. Extract from [AirplayServer](https://github.com/KqSMea8/AirplayServer).

## Prepair

- Install [msys2](http://repo.msys2.org/distrib/x86_64/msys2-x86_64-20190524.exe)
- Run msys2_shell.cmd in msys2 folder. (Default in C:\msys64)
- Install next tools:

  ```shell
  pacman -S cmake
  pacman -S mingw-w64-i686-gcc
  pacman -S mingw-64-x86_64-gcc
  pacman -S make
  ```

## Build

- For x86，run mingw32.exe:

  - In C:\msys64\mingw32\bin, copy i686-w64-mingw32-gcc-ranlib.exe and name it to x86_64-w64-mingw32-ranlib.exe

  ```shell
  cmake -G"Unix Makefiles" .
  make
  ```

- For x64, run mingw64.exe:

  - In C:\msys64\mingw64\bin, copy x86_64-w64-mingw32-gcc-ranlib.exe and name it to x86_64-w64-mingw32-ranlib.exe

  ```shell
  cmake -G"Unix Makefiles" .
  make
  ```

## Use plist

plist/plist.h and libplist.a.
