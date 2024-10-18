g++ -std=c++17 -Wall -I./include -c ./src/Persona.cpp
g++ -std=c++17 -Wall -I./include -c main.cpp

g++ -std=c++17 -Wall -Wextra -Wpedantic -Werror -I./include Persona.o main.o -o app.exe

app.exe

del *.o
