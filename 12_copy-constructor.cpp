#include<iostream>
using namespace std;

class student{

    int StudentId;
    string studentName;
    double percentage;

    public :
    student(int id,string name,double per){

        StudentId = id;
        studentName = name;
        percentage = per;
    }

    student(class student &s){
        StudentId =s.StudentId + 1;
        studentName = s.studentName + " Memon";
        percentage = s.percentage + 5.2;
    }

    void printData(){

        cout<<"\nStudent Id :"<<StudentId<<endl;
        cout<<"Student Name :"<<studentName<<endl;
        cout<<"Percentage :"<<percentage<<endl;
    }

};
int main (){

    student s1(111,"Alfaz",82.43);

    student s2 = s1;

    s1.printData();
    s2.printData();




    return 0;
}