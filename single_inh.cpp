#include<iostream>
using namespace std;
class student{

    int studentId;
    string StudentName;
    string CourseName;

    public :

    void getstudentInfo(){

        cout<<"Enter Student Id :";
        cin>>studentId;

        cout<<"Enter student Name :";
        cin>>StudentName;

        cout<<"Enter course Name :";
        cin>>CourseName;


    }

    void printData(){

        cout<<"\n\n||-== Student Info ==-||\n\n";
        cout<<"Student Id :"<<studentId<<endl;
        cout<<"Student Name :"<<StudentName<<endl;
        cout<<"Course Name :"<<CourseName<<endl;

    }




};

class Faculty : public student{

    int FacultyId;
    string FacultyName;

    public :

    void getfaculty(){

        cout<<"\nEnter Faculty Id :";
        cin>>FacultyId;

        cout<<"Enter Faculty Name :";
        cin>>FacultyName;
    }

    void printfaculty(){
        cout<<"Faculty Id :"<<FacultyId<<endl;
        cout<<"Faculty Name :"<<FacultyName<<endl;
    }
};
int main (){

    Faculty f1;

    f1.getstudentInfo();
    f1.getfaculty();
    f1.printData();
    f1.printfaculty();




    return 0;
}