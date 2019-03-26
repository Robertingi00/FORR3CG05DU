//
// Created by rober on 3/17/2019.
//

#include <string>

#ifndef FLUGVOLLUR_TIMEDATE_H
#define FLUGVOLLUR_TIMEDATE_H

using namespace std;

class TimeDate{
private:
    string time;
    int day;
    int month;
    int year;
public:
    TimeDate(string, int, int, int);


    string getTime();
    int getDay();
    int getMonth();
    int getYear();

};

#endif //FLUGVOLLUR_TIMEDATE_H
