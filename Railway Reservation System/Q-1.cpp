#include<iostream>
using namespace std;
class Train{

    private :
    int TrainNumber;
    string TrainName;
    string Source;
    string Destination;
    string TrainTime;


    public :
    static int TrainCount;

    //Default constructor 
    Train(){

        TrainNumber = 0;
        TrainName = "";
        Source = "";
        Destination = "";
        TrainTime = "";
        
        TrainCount++;

    }

    //pera constructor 

    Train (int num,string name,string sour,string Dest,string time){

        TrainNumber = num ;
        TrainName = name;
        Source = sour ;
        Destination = Dest ;
        TrainTime = time ;
        TrainCount++;

    }

    //Distructor

    ~Train(){
        TrainCount--;
    }


    void inputTrainDetails(){

        cout<<"\n\nEnter Train Number :";
        cin>>TrainNumber;

        cin.ignore();
        cout<<"Enter Train Name :";
        getline(cin,TrainName);

        
        cout<<"Enter Source :";
        getline(cin,Source);

        cout<<"Enter Destination :";
        getline(cin,Destination);

        cout<<"Enter TrainTime :";
        getline(cin,TrainTime);

        
        
    }

    void displayTrainDetails(){
        cout<<"\n\nTrain Number :"<<TrainNumber<<endl;
        cout<<"Train Name :"<<TrainName<<endl;
        cout<<"Source :"<<Source<<endl;
        cout<<"Destination :"<<Destination<<endl;
        cout<<"Train Time :"<<TrainTime<<endl;
    }

     int TrainNo(){
        return TrainNumber;
    }

    static int getTrainCount(){
        return TrainCount;
    }

    
    
};
int Train::TrainCount = 0;
class Railway{

    Train Trains[100];
    int totaltrain = 0;

    public:
    void addTrain(){
        if(totaltrain < 100){
                Trains[totaltrain].inputTrainDetails();
                totaltrain++;
            }
            else{
                cout<<"Record system is full.!"<<endl;
            }
            
    }
    void DisplayallTrains(){

         if(totaltrain == 0){

                cout<<"No Train Record Found.!!"<<endl;
            }
            else{
                for(int i=0;i<totaltrain;i++){
                    cout<<"\n\nTrain "<<i+1<<" Details"<<endl;
                    Trains[i].displayTrainDetails();
                }
            }
    }
    void SearchTrainByNumber(int number){

        if(totaltrain == 0){

                cout<<"No Train Record Found.!!"<<endl;
            }

            else{
                
                for(int i=0;i<totaltrain;i++){
                    if(Trains[i].TrainNo() == number){
                        Trains[i].displayTrainDetails();
                    }
              
                    else{
                    cout<<"No Train Record Found.!!"<<endl;
                    }
                }
            }        
    }

};
int main (){

    Railway system;

    int choice,i,SearchNo;

    do{

        cout<<"\n\n--- Railway Reservation System Menu ---\n\n";
        cout<<"1. Add New Train Record"<<endl;
        cout<<"2. Display All Train Records"<<endl;
        cout<<"3. Search Train by Number"<<endl;
        cout<<"4. Exit"<<endl;

        cout<<"\n\nEnter Your Choice :";
        cin>>choice;

        switch (choice)

        
        {
        case 1:
            system.addTrain();
            break;

        case 2:
           system.DisplayallTrains();
            break;
        
        case 3:
        
         cout<<"Enter Train Number to Search :";
                cin>>SearchNo;
            system.SearchTrainByNumber(SearchNo);
                break;
            
        
        case 4:
           cout<<"Exiting the system. Goodbye!"<<endl;
           break;    

        
        default:
           cout<<"Invalid choice.!!";
            break;
        }
    }
    while(choice != 4);

    return 0;
}