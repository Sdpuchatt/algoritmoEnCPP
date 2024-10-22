g++ -std=c++17 -Wall -I./include -c ./src/article.cpp
g++ -std=c++17 -Wall -I./include -c ./src/client.cpp
g++ -std=c++17 -Wall -I./include -c ./src/order.cpp
g++ -std=c++17 -Wall -I./include -c main.cpp

g++ -std=c++17 -Wall -Wextra -Wpedantic -Werror -I./include article.o client.o order.o main.o -o app.exe

app.exe

del *.o
