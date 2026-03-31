#include <iostream>
using namespace std;

class Timeconverter
{
private:
    int Total_sec;

public:
    void getData()
    {

        cout << "Enter Seconds :";
        cin >> Total_sec;
    }
    void printTime()
    {

        int hour = Total_sec / 3600;
        int min = (Total_sec % 3600) / 60;
        int sec = Total_sec % 60;

        cout<<"\nHH:MM:SS => ";
        if (hour < 10)
        {
            cout << "0";
        }
        cout << hour << ":";

        if (min < 10)
        {
            cout << "0";
        }
        cout << min << ":";

        if (sec < 10)
        {
            cout << "0";
        }
        cout << sec << endl;
    }
};
int main()
{

    Timeconverter t;

    t.getData();
    t.printTime();

    return 0;
}