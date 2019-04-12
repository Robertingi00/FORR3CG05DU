//
// Created by rober on 3/9/2019.
//

#include <iostream>
#include <math.h>

#include "Airport/AirportDLL/airportDLL.h"
#include "Airport/airport.h"
#include "Factory/FactoryDLL/factoryDLL.h"
#include "Factory/Airplane/AirplaneDLL/airplaneDLL.h"
#include "Factory/Airplane/airplane.h"
#include "Airline/Flight/FlightDLL/flightDLL.h"
#include "Airline/AirlineDLL/airlineDLL.h"

using namespace std;


int main(){

    /*
    //Factory test.
    FactoryDLL* dll = new FactoryDLL();
    dll->push("Icland", "asddssa");
    dll->push("Danmörk", "asddssa");
    dll->push("Usa", "asddssa");
    dll->push("EUsa", "asddssa");

    dll->getHead()->makePlane("TTPf", "dfsfds", 2000);
    dll->getHead()->makePlane("TTPf", "Fmos", 2000);
    dll->getHead()->getData()->getFLeet()->printAll();
    dll->getHead()->getData()->getFLeet()->dele(0);
    dll->getHead()->getData()->getFLeet()->printAll();


    AirportDLL* airport = new AirportDLL();
    airport->push("SAds", "JFK","iceland");
    airport->push("XXX", "KEF", "Danmark");
    airport->push("BBB", "BB","Indland");
    airport->dele(1);
    airport->printAll();



    Airplane* airplane = new Airplane(3, "boying", "Gvendur", 200);

    //int id, string name, string code, string country
    Airport* airport1 = new Airport(2, "Boying", "EE-45", "Iceland");
    Airport* airport2 = new Airport(3, "AirBus", "EE-25", "Noregur");




    FlightDLL* flightdll = new FlightDLL();

    // string airCode, Airport* airportTo, Airport* airportFrom, Airplane* airplane, string depTime, int depDay, int depMonth, int depYear, string arrTime, int arrDay, int arrMonth, int arrYear)
    flightdll->createFlight("FF-345", airport1, airport2, airplane, "10:30", 05, 04, 2019, "11:30", 05,05, 2019);
    flightdll->createFlight("FF-345", airport1, airport2, airplane, "10:30", 05, 04, 2019, "11:30", 05,05, 2019);
    flightdll->createFlight("FF-345", airport1, airport2, airplane, "10:30", 05, 04, 2019, "11:30", 05,05, 2019);
    flightdll->print();
    */

    AirlineDLL* airlines = new AirlineDLL();


    airlines->push("Reykavikur","Icland");
    cout << "awd" << endl;
    airlines->push("Moskva","Russa");
    airlines->push("Selfoss","Iceland");
    airlines->push("Akranes","Iceland");


    airlines->print();
};
