#include <iostream>
using namespace std;

class authuser
{
    string username;
public:
    void loginuser(string name)
    {
        username = name;
        cout << username << " Login Succesfully." << endl;
    }
};

class payment
{
    int amount;
 public :
    void pay(int amt)
    {
        amount = amt;
    }
};

class onlinepayment : public authuser, public payment
{
public:
    void PaymentMSg(int amt, string name)
    {
        loginuser(name);
        pay(amt);
        cout<<amt<<" Payment Succesfully"<<endl;
    }
};
int main()
{
    onlinepayment o;
    o.PaymentMSg(4000,"alfaz");
}