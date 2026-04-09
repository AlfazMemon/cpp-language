#include<iostream>
using namespace std;
class User{

    string Username;
    long int number;
    string Location;

    public :

    void getUserData(){

        
        cout<<"Enter User Name :";
        getline(cin,Username);

        cout<<"Enter Phone Number :";
        cin>>number;

        cin.ignore();
        cout<<"Enter Your Location :";
        getline(cin,Location);
    }

    void printUserData(){

        cout<<"\n\n||==- User Info -==||"<<endl;

        cout<<"UserName :"<<Username<<endl;
        cout<<"Phone Number :"<<number<<endl;
        cout<<"Location :"<<Location<<endl;
    }

};

class Food{

    string FoodName;
    int foodQuntity;
    int price;
    int totalprice;

    public :

    void Pizza(){
        price = 300;

        FoodName = "Pizza";
        cout<<"Food Name : Pizza";
        cout<<"Enter Quntity :";
        cin>>foodQuntity;

        totalprice = price * foodQuntity;

        cout<<"Total Bill :"<<totalprice<<endl;
    }
    
};


int main (){


    User u;
    Food f;
    int choice;

    u.getUserData();

    do{
        cout<<"\n\n||----FOOD MENU----||"<<endl;
        cout<<"Press 1 for Pizza \nPress 2 for Burger \nPress 3 for Pasta \nPress 4 for Dosa\nPress 5 for Exit"<<endl;

        switch (choice)
        {
        case  1:
             f.Pizza();
            break;
        
        default:
            break;
        }
    }
    while(choice !=5 );


}