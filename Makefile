all: colamax

colamax: main.cpp colamax.cpp
	g++ main.cpp colamax.cpp -o colamax

exe: 
	chmod 777 colamax
	./colamax
