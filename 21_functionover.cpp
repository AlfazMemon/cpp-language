#include<iostream>
using namespace std;

class calc{

    public :
    int add(int a,int b){
        cout<<"Addition :"<<a+b<<endl;

    }

    double add(double a,double b,double c){
        cout<<"Addition :"<<a+b+c<<endl;
    }

    string add(string fname,string lname){
        cout<<"Fullname :"<<fname+lname<<endl;

    }

    int add(int x,int y,int z){
        cout<<"Addition :"<<x+y+z<<endl;
    }
};
int main (){

    calc c;
    c.add(10,5);
    c.add(4.2,4.8,8.1);
    c.add("Alfaz ","Memon");
    c.add(5,2,7);

    return 0;
}