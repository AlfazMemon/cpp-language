#include <iostream>
using namespace std;

class Vehicle
{

    int VehicleID;
    string manufacturer;
    string model;
    int year;

    protected:
     static int TotalVehicles;

public:
    Vehicle()
    {

        cout << "Enter Vehicle ID :";
        cin >> VehicleID;

        cin.ignore();
        cout << "Enter Vehicle Manufecturer :";
        getline(cin, manufacturer);

        cout << "Enter Vehicle Model :";
        getline(cin, model);

        cout << "Enter Vehicle Year :";
        cin >> year;
    }

    void printVehicle(){

        cout<<"Vehicle Id :"<<VehicleID<<endl;
        cout<<"Vehicle Manufecturer :"<<manufacturer<<endl;
        cout<<"Vehicle Model :"<<model<<endl;
        cout<<"Vehicle Year :"<<year<<endl;


    }
};

class Car:public Vehicle{


    string fueltype;

    public :

    void getCar(){
        Vehicle();
        cout<<"Enter Vehicle fuel type";
        cin>>fueltype;
        TotalVehicles++;
    }

    void printCar(){
        printVehicle();
        cout<<"Vehicle fuel type :"<<fueltype<<endl;
    }
};
class ElectricCar:public Car{
     int BatteryCapacity;

     public:

     void getElectric(){

        getCar();
        cout<<"Enter Car Battery Capacity :";
        cin>>BatteryCapacity;

     }

     void printElectric(){
        cout<<"\n||==-ElectricCar Details-==||"<<endl;
        printCar();
        cout<<"Car Battery Capacity :"<<BatteryCapacity<<"km"<<endl;
     }

};

class Aircraft{

    int flightRange;

    public :

    void getair(){
        cout<<"Enter flightRange :";
        cin>>flightRange;
    }

    void printAir(){
        cout<<"Flight Range :"<<flightRange<<"KM"<<endl;
    }
};

class FlyingCar:public Car,public Aircraft{


    public :

    void getFlyingCar(){
        getCar();
        getair();
        
    }

    void printFlyingCar(){
        printCar();
        printAir();
        
    }

};

class SportsCar:public ElectricCar{
    int topSpeed;

    public:
    void getSportsCar(){
        getCar();
        getElectric();
        cout<<"Enter Car Top Speed :";
        cin>>topSpeed;
    }

    void printSportsCar(){
        printCar();
        printElectric();
        cout<<"Car top Speed :"<<topSpeed<<"km/hour"<<endl;

    }

};
int Vehicle ::TotalVehicles = 0;
int main()
{

    int choice = 0;

    do
    {

        cout << "\n||==-Welcome to Vehicle Registry System-==||\n"<< endl;
        cout << "Press 1 for Electric Car" << endl;
        cout << "Press 2 for Flying Car." << endl;
        cout << "Press 3 for Sports Car." << endl;
        cout << "Press 4 for Sedan Car." << endl;
        cout << "Press 5 for SUV Car." << endl;
        cout << "Press 6 for Exit." << endl;
        cout << "\nEnter Your choice :";
        cin >> choice;

        switch(choice){
            case 1:


            break;
        }



        

    } while (choice != 4);

    return 0;
}