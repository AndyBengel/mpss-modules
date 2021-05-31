Intel MPSS Kernel Modules
===============================

This repository contains patched Intel MPSS modules 3.6.8 to work
with more recent Linux Kernels. Currently it is only tested on:

* Ubuntu 18.04 with Linux 4.15.0 and gcc 7.5.0


Requirements
------------

Before building the kernel modules, make sure you have all tools necessary to
build the Linux Kernel (e.g., GCC, Make, etc.) and the kernel source or
headers. On Ubuntu 18.04, should be enough to have the following packages
installed:

* build-essential
* linux-headers-generic

Building and Installing
-----------------------

To build, simply run:

`$ make MIC_CARD_ARCH=k1om`

To install, you must be logged in as root or use sudo:

`# make install` 

`$ sudo make install`

You may need to run depmod before loading the module:

```
$ sudo depmod
$ sudo modprobe mic
```

