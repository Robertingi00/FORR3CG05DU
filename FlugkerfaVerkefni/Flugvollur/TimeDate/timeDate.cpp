//
// Created by rober on 3/17/2019.
//

#include "timeDate.h"

using namespace std;
TimeDate::TimeDate(string time, int day, int month, int year) {
    this->time = time;
    this->day = day;
    this->month= month;
    this->year = year;
}

string TimeDate::getTime(){return time;};
int TimeDate::getDay(){return day;};
int TimeDate::getMonth(){return month;};
int TimeDate::getYear(){return year;};