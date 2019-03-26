//
// Created by rober on 3/15/2019.
//
#include <iostream>
#include <string>

#include "StudentDL/studentDL.h"

using namespace std;


int main(){

    string globalVal[3] = {"Búa til nýjan nemanda","Velja nemanda", "Hætta"};
    string studentVal[3] = {"Bæta áfanga", "Prenta út áfanga", "Hætta"};

    StudentDL* students = new StudentDL();

    while(true){
        for(int i = 0; i < 3; i++){
            cout << i+1 << ". " << globalVal[i] << endl;
        }

        int val;
        cout << "Hvað viltu gera? ";
        cin >> val;
        cout << "" << endl;


        switch (val) {
            case 1: {
                string name;
                cout << "Nafn hjá nýjum nemanda: ";
                cin >> name;
                students->push(name);
                break;
            }
            case 2: {
                int id, val2;
                students->printMenu();
                cout << "Hvaða nemanda viltu velja: ";
                cin >> id;
                cout << "" << endl;
                Student *currentStudent = students->getCurrentStudent(id);
                while (val2 != 3) {
                    cout << "Nemandi: " << currentStudent->getName() << endl;
                    for (int i = 0; i < 3; i++) {
                        cout << i + 1 << ". " << studentVal[i] << endl;
                    }
                    cin >> val2;
                    cout << "" << endl;
                    switch (val2) {
                        case 1: {
                            string name;
                            float grade;
                            cout << "Nafn áfanga : ";
                            cin >> name;
                            cout << "Einkun í áfnaga: ";
                            cin >> grade;
                            currentStudent->addCourse(name, grade);
                            break;
                        }
                        case 2: {
                            currentStudent->print();
                            break;
                        }
                        case 3: {
                            val2 = 3;
                            break;
                        }
                    }
                    cout << "" << endl;
                }
                delete currentStudent;
            }
            cout << "" << endl;
        }
    }
}