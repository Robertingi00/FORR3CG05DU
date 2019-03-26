//
// Created by rober on 3/15/2019.
//

#include <string>


using namespace std;

#ifndef FLUGVOLLUR_AIRPORT_H
#define FLUGVOLLUR_AIRPORT_H

class Airport{
private:
    int id;
    string name;
    string code;
    string country;
public:
    Airport(int, string, string, string);

    string getName();
    string getCode();
    int getId();


    void print();
};

#endif //FLUGVOLLUR_AIRPORT_H
