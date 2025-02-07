# FOR RUNNIGN THE PROGRAM

download sfml for ur os from [sfml](https://www.sfml-dev.org/download/sfml/3.0.0/#windows)

add to path if necessary

from msys (so on windows) compile using:

```bash
  ricci@Acer-Ricky UCRT64 /n/Info-projects/cpp/Alquappy
  $ g++ Alquappy.cpp -o sfml-app -I"C:/Users/ricci/Downloads/SFML/SFML-3.0.0/include" -L"C:/Users/ricci/Downloads/SFML/SFML-3.0.0/lib" -lsfml-graphics -lsfml-window -lsfml-system
```

### For setting Env variables on windows

if the path is "C:\Users\ricci\Downloads\SFML\SFML-3.0.0" like for me:

```bash
export CPLUS_INCLUDE_PATH=$CPLUS_INCLUDE_PATH:/c/Users/ricci/Downloads/SFML/SFML-3.0.0/include
export LIBRARY_PATH=$LIBRARY_PATH:/c/Users/ricci/Downloads/SFML/SFML-3.0.0/lib
export PATH=$PATH:/c/Users/ricci/Downloads/SFML/SFML-3.0.0/bin
```
then u make effective the changes:

```bash
echo 'export CPLUS_INCLUDE_PATH=$CPLUS_INCLUDE_PATH:/c/Users/ricci/Downloads/SFML/SFML-3.0.0/include' >> ~/.bashrc
echo 'export LIBRARY_PATH=$LIBRARY_PATH:/c/Users/ricci/Downloads/SFML/SFML-3.0.0/lib' >> ~/.bashrc
echo 'export PATH=$PATH:/c/Users/ricci/Downloads/SFML/SFML-3.0.0/bin' >> ~/.bashrc
```

finally u update the bash:

```bash
source ~/.bashrc
```

## Tutorial
[tutorial](https://www.sfml-dev.org/tutorials/3.0/window/window/#on-windows-a-window-which-is-bigger-than-the-desktop-will-not-behave-correctly)
