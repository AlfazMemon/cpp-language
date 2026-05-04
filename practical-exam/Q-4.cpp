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

    virtual void Display(){
        cout<<"Display shapes"<<endl;
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

    shape *s[2];
    circle c;
    Rectangle r;

    c.getCircle();
    c.calculatearea();
    


    r.getRectangle();
    r.calculatearea();
    

    s[0] = &c;
    s[1] = &r;

    for(int i=0;i<2;i++){

        cout<<"\n||==-Shapes-==||"<<endl;
        s[i]->Display();
    }


    return 0;
}