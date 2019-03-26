//
// Created by rober on 3/15/2019.
//
#include <string>
#ifndef FORR3CG05DU_AFANGI_H
#define FORR3CG05DU_AFANGI_H

using namespace std;
class Course{
private:
    int id;
    string name;
    float grade;
public:
    Course(int, string, float);

    void print();
    int addCourse(int, string, float);
    float getGrade();
};

#endif //FORR3CG05DU_AFANGI_H
