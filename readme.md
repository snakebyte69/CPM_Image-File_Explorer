# CP/M Image File Explorer #
forked from:
https://github.com/ProgrammingHobby/CPM_Image-File_Explorer

Update by Snake
- GNUmakefile fixed to build on macOS
- ReadMe translated to English

![](CIFE_Linux.jpg)

CP/M Image File Explorer is designed to easily create and edit binary floppy and hard disk images.

The CP/M Image File Explorer is based on the source code of the CP/M tools by Michael Haardt in version 2.23.

http://www.moria.de/~michael/cpmtools

The CP/M Image File Explorer is developed in C/C++ with the wxWidgets GUI framework.

Eclipse CDT serves as the development environment.

# Compiling CIFE without a development environment #
CIFE can be compiled for the respective target system under Linux even without an installed development environment.

## Build for Linux ##
For this I created a GNUmakefile. The prerequisite is the Linux compiler GCC and the wxWidgets development packages.

Under Ubuntu, the prerequisites can be installed in the console with the following line:

sudo apt install build-essential libwxgtk3.0-gtk3-dev

Then download the sources for CIFE from Github and go to the root folder where the GNUmakefile is located.

A simple make in the console is enough to compile CIFE.

## Build for macOS #
% brew install wxwidgets
% make
