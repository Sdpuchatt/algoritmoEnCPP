@echo off
rem Compilación de cada archivo .cpp a .o
g++ -std=c++17 -Wall -I./include -c ./src/Articulo.cpp
g++ -std=c++17 -Wall -I./include -c ./src/Orden.cpp
g++ -std=c++17 -Wall -I./include -c ./src/Cliente.cpp
g++ -std=c++17 -Wall -I./include -c ./src/Empleado.cpp
g++ -std=c++17 -Wall -I./include -c main.cpp

rem Enlace de los archivos .o en el ejecutable app.exe
g++ -std=c++17 -Wall -Wextra -Wpedantic -Werror -I./include Articulo.o Orden.o Cliente.o Empleado.o main.o -o app.exe

rem Ejecutar el programa
app.exe

rem Eliminar archivos .o generados
del *.o
