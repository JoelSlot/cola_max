all: pilamax

pilamax: src/main.cpp src/pilamax.cpp
	g++ src/main.cpp src/pilamax.cpp -o bin/pilamax

exe: 
	chmod 777 bin/pilamax
	bin/./pilamax

clean:
	rm -r bin/*
