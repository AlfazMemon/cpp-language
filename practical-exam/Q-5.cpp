#include<iostream>
using namespace std;

class Animal{

    public :

    virtual void Sound() = 0;
    virtual void move() = 0;


};

class Dog:public Animal{

    public:

    void Sound(){
        cout<<"Dog Barks"<<endl;
    }

    void move(){
        cout<<"Dog Runs"<<endl;
    }
};

class Bird:public Animal{

    public:

    void Sound(){
        cout<<"\nBird chirps"<<endl;
    }

    void move(){
        cout<<"Bird Flies"<<endl;
    }
};
int main(){

    Animal *a[2];
    Dog d;
    Bird b;

    a[0] = &d;
    a[1] = &b;

    cout<<"||==-Animal Action==-||"<<endl;
    for(int i=0;i<2;i++){
        a[i] -> Sound();
        a[i] -> move();
    }


    return 0;
}
