#include<iostream>
using namespace std;

class company{


    int comp_Id;
    string comp_name;
    int com_staff_quantity;
    long int comp_revenue;
    string comp_ceo;

    public :
    company(int id,string name,int quantity,long int revenue,string ceo){

        comp_Id = id;
        comp_name = name;
        com_staff_quantity = quantity;
        comp_revenue = revenue;
        comp_ceo = ceo;



    }
    void printData(){

        cout<<"\n\n||-==Company Details==-||\n\n";
        cout<<"Comp Id :"<<comp_Id<<endl;
        cout<<"Company name :"<<comp_name<<endl;
        cout<<"Company staff quantity :"<<com_staff_quantity<<endl;
        cout<<"Company revenue in 2025 :"<<comp_revenue<<"cr"<<endl;
        cout<<"Company Ceo :"<<comp_ceo<<endl;


    }




};

int main (){


    company c(101,"az_pvt",234,245,"alfaz_memon");
    c.printData();








    return 0;
}