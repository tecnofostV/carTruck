CXX = g++
CXXFLAGS = -Wall -std=c++17

SRC = main.cpp Car.cpp Truck.cpp
OBJ = main.o Car.o Truck.o

app: $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o app

main.o: main.cpp Car.hpp Truck.hpp
	$(CXX) $(CXXFLAGS) -c main.cpp

Car.o: Car.cpp Car.hpp
	$(CXX) $(CXXFLAGS) -c Car.cpp

Truck.o: Truck.cpp Truck.hpp
	$(CXX) $(CXXFLAGS) -c Truck.cpp

clean:
	rm -f *.o app