//
// Created by rober on 3/14/2019.
//


#include <string>


#ifndef FLUGVOLLUR_AIRPLANE_H
#define FLUGVOLLUR_AIRPLANE_H

using namespace std;

class Airplane{
private:
    int id;
    string model;
    string name;
    int capacity;
    // bæta við airline

public:
    Airplane(int, string, string, int);
    void print();
    string getName();
    int getId();

};

#endif //FLUGVOLLUR_AIRPLANE_H
