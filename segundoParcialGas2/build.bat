@echo off
g++ -c src/Articulo.cpp -o Articulo.o
g++ -c src/Cliente.cpp -o Cliente.o
g++ -c src/Empleado.cpp -o Empleado.o
g++ -c src/Orden.cpp -o Orden.o
g++ -c main.cpp -o main.o
g++ Articulo.o Cliente.o Empleado.o Orden.o main.o -o app.exe
echo Compilacion completa.
rem Ejecutar el programa
app.exe

rem Eliminar archivos .o generados
del *.o
