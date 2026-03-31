#include <iostream>
using namespace std;

class Timeconverter
{

private:
    int hour,min,sec;
    
    int hour_sec, min_sec,Total_sec;

public:
    void getTime()
    {

        cout << "Enter Hours :";
        cin >> hour;

        cout<<"Enter Minutes :";
        cin>>min;

        cout<<"Enter Sec :";
        cin>>sec;

    }

    void printData(){

        hour_sec = hour * 3600;
        min_sec = min * 60; 

        Total_sec = hour_sec + min_sec + sec;

        cout<<"\nTotal seconds :"<<Total_sec<<endl;

    }
};
int main()
{

    Timeconverter t;

    t.getTime();
    t.printData();
    return 0;
}