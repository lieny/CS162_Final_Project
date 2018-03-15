#Author: Ya Lien
#Description: makefile for the final project
#main: space.hpp space.cpp kitchen.hpp kitchen.cpp bedroom.hpp bedroom.cpp bathroom.hpp bathroom.cpp storage.hpp storage.cpp attic.hpp attic.cpp player.hpp player.cpp main.cpp
#	g++ -o main space.cpp kitchen.cpp bedroom.cpp bathroom.cpp storage.cpp attic.cpp player.cpp main.cpp

main: space.hpp space.cpp kitchen.hpp kitchen.cpp bedroom.hpp bedroom.cpp bathroom.hpp bathroom.cpp storage.hpp storage.cpp attic.hpp attic.cpp player.hpp player.cpp main.cpp
	g++ -o main space.cpp kitchen.cpp bedroom.cpp bathroom.cpp storage.cpp attic.cpp player.cpp main.cpp
clean:
	rm -f *.o main
