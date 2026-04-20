#include<iostream>
using namespace std;
class function{

    public :
    int division(int a,int b){

        cout<<"Division :"<<a/b<<endl;
    }
    int subtraction(int a,int b,int c){

        cout<<"Subtraction :"<<a-b-c<<endl;
    }

    int multiplication(int a,int b,int c,int d){

        cout<<"Multiplication :"<<a*b*c*d<<endl;
    }

    int addition(int a,int b,int c,int d,int e){

        cout<<"Addition :"<<a+b+c+d+e<<endl;
    }
};

class calc :public function{

    public :

    int calculate(int a,int b){
        division(a,b);
    }

    int calculate(int a,int b,int c){
        subtraction(a,b,c);
    }

    int calculate(int a,int b,int c,int d){
        multiplication(a,b,c,d);
    }

    int calculate(int a,int b,int c,int d,int e){
        addition(a,b,c,d,e);
    }

    
};
int main (){


    calc c;

    c.calculate(55,11);
    c.calculate(100,30,1);
    c.calculate(6,2,9,7);
    c.calculate(55,75,89,69,12);

    


    return 0;
}