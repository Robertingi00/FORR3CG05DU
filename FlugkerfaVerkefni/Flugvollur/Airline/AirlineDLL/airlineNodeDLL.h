//
// Created by rober on 3/28/2019.
//
#include <string>

#include "../airline.h"

#ifndef FLUGVOLLUR_AIRLINENODEDLL_H
#define FLUGVOLLUR_AIRLINENODEDLL_H

class AirlineNodeDLL{
private:
    Airline* data;
    AirlineNodeDLL* next;
    AirlineNodeDLL* prev;
public:
    AirlineNodeDLL(int, string, string);
    AirlineNodeDLL(int, string, string, AirlineNodeDLL*);
    AirlineNodeDLL(int, string, string, AirlineNodeDLL*, AirlineNodeDLL*);

    int push(int, string, string);
    int dele(int);

    Airline* getData();

    void print();

    AirlineNodeDLL* getNext();
    AirlineNodeDLL* getPrev();
    int setNext(AirlineNodeDLL*);
    int setPrev(AirlineNodeDLL*);

};

#endif //FLUGVOLLUR_AIRLINENODEDLL_H
