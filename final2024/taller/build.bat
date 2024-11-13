@echo off
g++ -c src/Coche.cpp -o src/Coche.o
g++ -c src/Moto.cpp -o src/Moto.o
g++ -c src/Taller.cpp -o src/Taller.o
g++ -c src/Vehiculo.cpp -o src/Vehiculo.o
g++ -c main.cpp -o main.o
g++ src/Coche.o src/Moto.o src/Taller.o src/Vehiculo.o main.o -o app.exe
echo Compilacion completa.
rem Ejecutar el programa
app.exe

rem Eliminar archivos .o generados
DEL src\*.o main.o
