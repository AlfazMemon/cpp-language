#include<iostream>
using namespace std;
class number{

    int num;

    public :

    number(int n){
        num = n;
    }

    bool operator < (number obj){
        return this->num < obj.num;
    }

    void display(){
        cout<<num<<endl;
    }
};
int main(){


    number obj1(50),obj2(67);

    if (obj1 < obj2){

        cout<<"Maximum number is :";
        obj2.display();
    }
 
    else{
        cout<<"Maximum number is :";
        obj1.display();
    }

    return 0;
}