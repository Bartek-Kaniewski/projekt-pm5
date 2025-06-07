main.exe: main.o pole.o pierwiastki.o tablica.o sortowanie.o
	g++ main.o pole.o pierwiastki.o tablica.o sortowanie.o -o main.exe

main.o: main.cpp
	g++ -c main.cpp -o main.o

pole.o: pole.cpp
	g++ -c pole.cpp -o pole.o

pierwiastki.o: pierwiastki.cpp
	g++ -c pierwiastki.cpp -o pierwiastki.o

tablica.o: tablica.cpp
	g++ -c tablica.cpp -o tablica.o

sortowanie.o: sortowanie.cpp
	g++ -c sortowanie.cpp -o sortowanie.o

clean:
	rm -f *.o main.exe

run: main.exe
	./main.exe