
Compile MicroPython for Seeed XIAO nRF52840
=======================

## Getting the Repositories

Download [GNU Arm Toolchain](https://developer.arm.com/downloads/-/gnu-rm)

```shell
tar -jxvf gcc-arm-none-eabi-xxx-x86_64-linux.tar.bz2

mv gcc-arm-none-eabi-xxx/ gcc-arm-none-eabi/

git clone --recurse-submodules https://github.com/IcingTomato/micropython_xiao_nrf52840.git
```

## Building the Firmware

```shell
cd micropython/

make -C mpy-cross/

cd ports/nrf/

export PATH=$PATH:/$PATH_TO/gcc-arm-none-eabi/bin

export PATH=$PATH:/$PATH_TO/gcc-arm-none-eabi/arm-none-eabi/bin

arm-none-eabi-gcc --version && arm-none-eabi-g++ --version

make BOARD=xiao_ble clean

make BOARD=xiao_ble
```
