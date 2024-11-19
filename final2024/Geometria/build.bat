@echo off
g++ -c src/Figura.cpp -o src/Figura.o
g++ -c src/Circulo.cpp -o src/Circulo.o
g++ -c src/Cuadrado.cpp -o src/Cuadrado.o
g++ -c main.cpp -o main.o
g++ src/Figura.o src/Circulo.o src/Cuadrado.o main.o -o app.exe
echo Compilacion completa.
rem Ejecutar el programa
app.exe

rem Eliminar archivos .o generados
DEL src\*.o main.o
