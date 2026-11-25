all: temp_app.exe

temp_app.exe: main.o temp_api.o
	gcc -o temp_app.exe main.o temp_api.o

main.o: main.c temp_api.h
	gcc -c -std=c99 -Wall -Wextra -o main.o main.c

temp_api.o: temp_api.c temp_api.h
	gcc -c -std=c99 -Wall -Wextra -o temp_api.o temp_api.c

clean:
	del /Q *.o temp_app.exe
