#include <iostream>
#include <vector>
#include<string>
using namespace std;


class Vehicle{
    protected:
    int id;
    int maxSpeed;

    public:

    Vehicle(){
        id=0;
        maxSpeed=0;
    }

    Vehicle(int idP, int maxSpeedP){
        id=idP;
        maxSpeed=maxSpeedP;
    }

     void displayInfo(){
        cout<<"Vehicle ID: "<<id;
        cout<<", Max Speed: "<<maxSpeed<<" km/h"<<endl;
    }
};

class Car: public Vehicle{
    private:
    int numDoors;

    void calculateFuelEfficiency(){
        cout << "Calculating fuel efficiency for car....." << endl;
    }

    public:
    Car(){
        numDoors=0;
    }

    Car(int idP, int maxSpeedP, int numDoorsP ):Vehicle(idP,maxSpeedP){
        numDoors=numDoorsP;
    }

    void displayCar(){
        Vehicle::displayInfo();
        
    }
};

class Bus: public Vehicle{
    private:
    int maxPassengers;
    
    void announceNextStop(){
       cout<<"Next station Narimanov "<<endl;
    }

    public:

    Bus(){
         maxPassengers=0;
    }

    Bus(int idP, int maxSpeedP,int maxPassengersP):Vehicle(idP,maxSpeedP){
        maxPassengers=maxPassengersP;
    }

    void displayBus(){
        Vehicle::displayInfo();
    }
};

class Manager{
    private:
    vector<Vehicle*>fleets;

    public:

    void addVehicle(Vehicle*fleet ){
        fleets.push_back(fleet);
    }

    void displayFleet(){
        for (Vehicle* fleet:fleets)
        {
            fleet->displayInfo();
        }
        
    }
   
};






int main() {
    system("cls");

    Car car1(1, 150, 4);
    Bus bus1(2, 80, 40);

    Manager manager;

    manager.addVehicle(&car1);
    manager.addVehicle(&bus1);

    manager.displayFleet();

    return 0;
}
