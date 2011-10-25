Teensy 2.0 Makefile Example
===========================

I've bundled up the examples given on pjrc.com and created
a sample project for building and programming the Teensy 2.0 development board.

Step-1: Install Dependencies for Compiling
------------------------------------------

To compile C and C++ programs, you will need a collection of programs including 
avr-gcc, the avr-libc C library and avr-binutils. Installing all the required
pieces separately can be difficult. Fortunately, there are complete, easy to 
install packages for all major platforms.

**Macintosh OS X**
http://www.obdev.at/products/avrmacpack/download.html

**Linux, Ubuntu**
sudo apt-get install gcc-avr binutils-avr avr-libc

**Windows**
http://winavr.sourceforge.net/download.html

Step-2: Compiling and Programming
---------------------------------

Modify the Makefile and enter the name of the target you want to compile
then run the following commands

`make`
`make program`
