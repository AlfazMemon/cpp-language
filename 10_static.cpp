#include<iostream>
using namespace std;
class employee{

    int empId;
    string empName;
    int empSalary;

    static int TotalEmp;
    static int TotalSalary;

    public:
    void GetData(){

        cout<<"\n\n||==-Enter Employee Details-==||\n\n";
        cout<<"Enter Employee Id :";
        cin>>empId;

        cin.ignore();
        cout<<"Enter Employee Name :";
        getline(cin,empName);

        cout<<"Enter Employee Salary :";
        cin>>empSalary;

        TotalEmp++;
        TotalSalary = TotalSalary + empSalary;


    }

    void printData(){

        cout<<"\n\n||==-Employee Details-==||\n\n ";
        cout<<"Employee Id :"<<empId<<endl;
        cout<<"Employee Name :"<<empName<<endl;
        cout<<"Employee Salary :"<<empSalary<<endl;



    }

    static void Report(){

        cout<<"\n\n||==-Company Details-==||\n\n";
        cout<<"Total Employee :"<<TotalEmp<<endl;
        cout<<"Total Salary :"<<TotalSalary<<endl;
    }


};

int employee :: TotalEmp = 0;
int employee :: TotalSalary = 0;    

int main(){

    employee e1,e2;

    e1.GetData();
    e2.GetData();

    e1.printData();
    e2.printData();

    employee :: Report();




    return 0;
}