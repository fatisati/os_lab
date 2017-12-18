all: zahra
zahra: main.o odd.o even.o
	gcc -o zahra main.o even.o odd.o

main.o: main.c function.h
	gcc -c main.c

even.o: even.c function.h
	gcc -c even.c

odd.o: odd.c function.h
	gcc -c odd.c

fatemeh:
	mv zahra new

clean:
	rm main.o main.exe
	rm even.o even.exe
	rm odd.o odd.exe


