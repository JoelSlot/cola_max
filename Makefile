all: colamax

colamax: src/main.cpp src/colamax.cpp
	g++ src/main.cpp src/colamax.cpp -o bin/colamax

exe: 
	chmod 777 bin/colamax
	bin/./colamax

clean:
	rm -r bin/*