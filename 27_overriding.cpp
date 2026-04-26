#include<iostream>
using namespace std;

class Admin{

       string companyName;
    long int totalRevenue;

    protected:
        long int managerSalary;
        int totalStaff;
    
    public:
        long int employeeSalary;

     Admin(){
            companyName = "A&M private limited";
            totalRevenue = 8700000;
            managerSalary = 65000;
            totalStaff = 34;
            employeeSalary = 26000;
        }

    void showPrivateData(){
            cout<<"Company Name:"<<companyName<<endl;
            cout<<"Total Revenue:"<<totalRevenue<<endl;
        }

        virtual void myAccess(){
            cout<<"\nAdmin Details"<<endl;
            showPrivateData();
            cout<<"Manager Salary"<<managerSalary<<endl;
            cout<<"Total Staff"<<totalStaff<<endl;
            cout<<"Employee Salary:"<<employeeSalary<<endl;
        }
};

class Manager:public Admin{

    public :

     void myAccess() override{
            showPrivateData();
            cout<<"Manager Salary"<<managerSalary<<endl;
            cout<<"Total Staff"<<totalStaff<<endl;
            cout<<"Employee Salary:"<<employeeSalary<<endl;
        }
};

class Employee:public Manager{


    public:

    void myAccess() override{
            showPrivateData();
            cout<<"Manager Salary"<<managerSalary<<endl;
            cout<<"Total Staff"<<totalStaff<<endl;
            cout<<"Employee Salary:"<<employeeSalary<<endl;
        }


};

int main(){

    Admin a;
    Manager m;
    Employee e;

    a.myAccess();
    m.myAccess();
    e.myAccess();
    


    return 0;
}