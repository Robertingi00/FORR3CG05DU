//
// Created by rober on 2/12/2019.
//

#include <iostream>
#include <sstream>
using namespace std;

class FlightBooking {
public:
    FlightBooking(int, int);
    FlightBooking();
    void printStatus();
    int reserveSeats(int);
    int cancelReservations(int);
    
    int getId() { return id;};
    int reset(){
        this->id = -1;
        this->capacity = 0;
        this->reserved = 0;
    };
private:
    int id;
    int capacity;
    int reserved;
};

int FlightBooking::cancelReservations(int number_ob_seats) {
    this->reserved -= number_ob_seats;
    if (this->reserved < 0){
        this->reserved = 0;
        cout << "Þú canselaðir af mikið af sætum reserve verðus sett í núll" << endl;
    }
}

int FlightBooking::reserveSeats(int number_ob_seats) {
    if(100*(this->reserved + number_ob_seats)/this->capacity <= 105) {
        this->reserved += number_ob_seats;
    }else{
        cout <<  "Það er of margir í vélinni" << endl;
        return 7;
    }
}



void FlightBooking::printStatus() {
    if(this->reserved != 0 and this->capacity != 0){
        cout << "Flight : "<<this->id << " : "<< this->reserved << "/"<< this->capacity <<" (" << 100*this->reserved/this->capacity << "%) seats reserved"<< endl;
        return;
    }
    cout << "Flight : "<<this->id << " : "<< this->reserved << "/"<< this->capacity <<" (0%) seats reserved"<< endl;

}

FlightBooking::FlightBooking()
{
    id = -1, capacity = 0, reserved = 0;
}

FlightBooking::FlightBooking(int id, int capacity)
{
    this->id = id;
    this->capacity = capacity;
    this->reserved= 0;
}

int createBooking(FlightBooking *flight, int id, int capacity, int fjoldi = 10){

    for(int i = 0; i < fjoldi; i++){
        if(flight[i].getId() == -1){
            flight[i] = FlightBooking(id, capacity);
            return 0;
        }

    }
    cout << "Það eru ekki laus pláss í gagnagrunninum" << endl;
    return 8;

}

int deleteBooking(FlightBooking *flight, int id, int fjoldi = 10){

    for(int i = 0; i < fjoldi; i++){
        if(flight[i].getId() == id){
            flight[i].reset();
        }else{
            cout << "Það er eingin flugvél með þetta id" << endl;
            return 10;
        }
    }
}

int getIndex(FlightBooking *flight, int id, int fjoldi = 10){

    for(int i = 0; i < fjoldi; i++){
        if(flight[i].getId() == id)
            return i;
    }
    cout << "Þetta id er ekki þekkt" << endl;
    return 9;
}



int main()
{
    /*
    int reserved = 0, capacity = 0;
    std::cout << "Provide flight capacity: ";
    std::cin >> capacity;

    std::cout << "Provide number of reserved seats: ";
    std::cin >> reserved;
    FlightBooking booking(1, capacity, reserved);
    booking.printStatus();

    */
    FlightBooking booking[10];
    string execute;
    int id,n;

    string command = "";
    while (command != "quit"){
        cout << ">";
        getline(cin, command);

        stringstream ss;
        ss << command;

        ss >> execute >> id >> n;

        if(execute == "create"){
            createBooking(booking,id,n );

        }else if(execute == "print"){
            for(int i = 0; i < 10; i++) {
               if(booking[i].getId() != -1)
                    booking[i].printStatus();
            }
        }else if(execute == "delete"){
            deleteBooking(booking, id);

        }else if(execute == "add"){
            booking[getIndex(booking, id)].reserveSeats(n);

        }else if(execute == "cancel"){
            booking[getIndex(booking, id)].cancelReservations(n);
        }else{
            cout << "ERROR!!. Þessi beiðni er ekki til " << execute << endl;
        }
    }

    return 0;
}
