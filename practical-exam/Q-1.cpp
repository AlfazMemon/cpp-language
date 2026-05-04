#include<iostream>
using namespace std;

class Rectangle{

    private :
    float length;
    float width;
    

    public:

    void getData(){
        cout<<"Enter Length :";
        cin>>length;

        cout<<"Enter Width :";
        cin>>width;


    }

    
    void printData(){
        cout<<"\nLength :"<<length<<endl;
        cout<<"Width :"<<width<<endl;
    }
    float area(){
        return length * width ;
    }

};
int main(){

    Rectangle r;

    r.getData();
    r.printData();
    
    cout<<"Area of Rectangle is :"<<r.area()<<endl;
}