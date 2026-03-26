#include<iostream>
using namespace std;

class course{

   string courseName;
   int duration;
   int fees;
   string field;
   int courseId;

   public :

   void coursedetails(){

    cout<<"Enter course Name :";
    cin>>courseName;

   cout<<"Enter course Duration in month";
   cin>>duration;

   cout<<"Enter course Fees :";
   cin>>fees;

   cout<<"Enter course field :";
   cin>>field;

   cout<<"Enter course Id :";
   cin>>courseId;
   }

   void printcoursedetails(){

    cout<<"Course Name :"<<courseName<<endl;
    cout<<"course Duration :"<<duration<<"month"<<endl;
    cout<<"Course fees :"<<fees<<endl;
    cout<<"Course Field :"<<field<<endl;
    cout<<"Course Id :"<<courseId<<endl;



   }




};

int main (){

  course c[5];

  for(int i=0;i<5;i++){

     cout<<"\n\nEnter course "<<i+1<<" details"<<endl;   
    c[i].coursedetails();
  }
  for(int i=0;i<5;i++){

    cout<<"\n\n course "<<i+1<<"details"<<endl;
    c[i].printcoursedetails();
  }






    return 0;
}