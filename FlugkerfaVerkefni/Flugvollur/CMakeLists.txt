cmake_minimum_required(VERSION 3.13)
project(Flugvollur)

set(CMAKE_CXX_STANDARD 17)

add_executable(FORR3CG05DU main.cpp Factory/FactoryDLL/factoryDLL.cpp Factory/FactoryDLL/factoryNode.cpp Factory/factory.cpp Factory/Airplane/AirplaneDLL/airplaneDLL.cpp Factory/Airplane/AirplaneDLL/airplaneNode.cpp Factory/Airplane/airplane.cpp Airport/AirportDLL/airportDLL.cpp Airport/AirportDLL/airportNode.cpp Airport/airport.cpp Airline/Flight/FlightDLL/flightDLL.cpp Airline/Flight/FlightDLL/flightNode.cpp Airline/Flight/flight.cpp TimeDate/timeDate.cpp Airline/AirlineDLL/airlineDLL.cpp Airline/AirlineDLL/airlineNodeDLL.cpp Airline/airline.cpp testMenu.cpp)