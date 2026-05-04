#include<iostream>
using namespace std;

class shape{

    string color;
    float area;

    public :
    
    void setcolor(string c){
        
        color = c;
    }

    string getcolor(){
        return color;
    }

    void setArea(float a){
        area = a;
    }

    float getArea(){
        return area;
    }

    virtual void calculatearea(){

        cout<<"Area not found.!!"<<endl;
    }   

};

class circle:public shape{


    float r;
    string c;

    public:

    void getCircle(){
    
        cout<<"Enter circle Color :";
        cin>>c;

        setcolor(c);

        cout<<"Enter Radius :";
        cin>>r;
    }

    void calculatearea(){
        float a = 3.14 * r * r;
        setArea(a);
    }

    void Display(){
        cout<<"\n||==-Circle-==||"<<endl;

        cout<<"color :"<<getcolor()<<endl;
        cout<<"Area :"<<getArea()<<endl;

    }
};


class Rectangle:public shape{


    
    string c;
    float length,widht;

    public:

    void getRectangle(){
    
        cout<<"\nEnter rectangle Color :";
        cin>>c;

        setcolor(c);

        cout<<"Enter Lenght :";
        cin>>length;

        cout<<"Enter Widht :";
        cin>>widht;
    }

    void calculatearea(){
        float a = length * widht;
        setArea(a);
    }

    void Display(){
        cout<<"\n||==-Rectangle-==||"<<endl;

        cout<<"color :"<<getcolor()<<endl;
        cout<<"Area :"<<getArea()<<endl;

    }
};
int main(){

    circle c;
    Rectangle r;

    c.getCircle();
    c.calculatearea();
    c.Display();


    r.getRectangle();
    r.calculatearea();
    r.Display();



    return 0;
}