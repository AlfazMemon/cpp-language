#include<iostream>
using namespace std;

class Employee{

    string name;
    int salary;
    string designation;

    public :

    void setName(string n){
        name =n;

    }
    void setsalary(int s){
        salary = s;
    }
    void setdesignation(string d){
        designation = d;
    }

    string getName(){
        return name;

    } 

    int getsalary(){
        return salary;
    }

    string getdesignation(){
        return designation;
    }


    void getData(){
        string n,d;
        int s;

        cout<<"Enter Employee Name :";
        getline(cin,n);

        cout<<"Enter Designation :";
        getline(cin,d);

        cout<<"Enter Salary :";
        cin>>s;

        setName(n);
        setdesignation(d);
        setsalary(s);

    }

    void DisplayData(){
        cout<<"\n||==-Employee Details-==||\n"<<endl;
        cout<<"Employee Name :"<<getName()<<endl;
        cout<<"Designation :"<<getdesignation()<<endl;
        cout<<"Salary :"<<getsalary()<<endl;
    }

};
int main (){

    Employee emp;
    

    emp.getData();
    emp.DisplayData();
    
    return 0;
}