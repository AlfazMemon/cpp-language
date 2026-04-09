#include<iostream>
using namespace std;

class user{

    string username;
    string password;
  
    protected:
    string role;

    public:

    void getData(){

        cout<<"Enter username :";
        getline(cin,username);

        cout<<"Enter password :";
        getline(cin,password);

        cout<<"Enter role :";
        getline(cin,role);

    }

    void printData(){
        cout<<"\n\n||-==User INfo==-||\n\n";
        cout<<"Username :"<<username<<endl;
        cout<<"Password :"<<password<<endl;
        cout<<"Role :"<<role<<endl;
    }
};

class productManagment:public user{

    int productId;
    string productName;
    string category;
    int price;

    public :

    void getProductInfo(){

        if ( role == "admin"){

            cout<<"\nEnter product Id :";
            cin>>productId;

            cin.ignore();
            cout<<"Product Name :";
            getline(cin,productName);


            cout<<"Enter category :";
            getline(cin,category);

            cout<<"Enter Price :";
            cin>>price;

        }

        else{
            cout<<"You are not a admin.!!";
        }
    }

    void prductInfo(){

        if( role == "admin"){

            cout<<"\n\n||-== Product Info ==-||\n";
            cout<<"Product Id :"<<productId<<endl;
            cout<<"Product Name :"<<productName<<endl;
            cout<<"Product Category :"<<category<<endl;
            cout<<"Product Price :"<<price<<endl;
        }
    }
};
int main (){


    productManagment p;

    p.getData();
    p.getProductInfo();
    p.printData();
    p.prductInfo();


}