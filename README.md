# KEYBOARD MAPPER UTILITY FOR ICS-OS
This utility maps each keystroke, or a combination of keystrokes,
captured by getch() to their integer values. Students or developers
on the ICS-OS may find this utility nifty if they're working with
applications that uses getch() or requires intermediate-advanced
keyboard/keypress handling.

### How to run and install
On Terminal, navigate to the ```contrib``` directory and invoke the following commands:
```sh
$ git clone https://github.com/adtcruz/kbmapper-ics-os.git
```
Of course, you can also download the entire repository as a zip file.

After cloning or unpacking the zip file to the ```contrib``` directory, switch to the ```kbmapper-ics-os``` directory and invoke the following commands:

```
$ sudo make clean
$ sudo make
$ sudo make install
```

That's it, you're done! All you have to do is to recompile ICS-OS so you can run the programme on ICS-OS by invoking kbmapper.exe
