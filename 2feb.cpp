/*
abstraction  : its  showing only  essential  detalis and hinding internal implementation detalis . 

1. abstract  base class 
2. interfaces (pure virtual functions)

*/
// ex :1 
/*
#include <iostream>
using  namespace std; 
class bank 
{
    protected :
        double balance;
    public : 
        bank(double  bal)
        {
            balance=bal;
        }
    virtual void deposit(int amt) =0;   // @ abstractmethod   void deposit(int  amt) :pass
    virtual void withdraw(int amt) =0;

    void show_balance()
    {
        cout<<"balance : "<<balance<<endl;
    }
};

class savingaccount : public bank
{
    public :
        savingaccount(double bal) : bank(bal)  // base class constructor called 
        {
        }
    void deposit(int amt) override
    {
        balance +=amt; 
        cout<<"deposited amt : "<<amt<<endl;   
    }
    void withdraw(int amt) override
    {
        if(balance -amt >=10000)
        {
            balance -=amt; 
            cout<<"withdrawed : "<<amt<<endl;
        }
        else 
        {
            cout<<"min balance  is  required 10000 rs."<<endl;
        }
    }
};

int main()
{
    bank *b =new savingaccount(50000);
    
    b->deposit(10000); 
    b->withdraw(30000); 
    b->show_balance();
    return 0; 

}
*/
/*
int a=10; 
int *p ; 
p= &a; 

*/

// ex :2 

#include <iostream>
using namespace std;
class vehicle 
{   
    public : 
        virtual void start() =0; 
        virtual void stop() =0;

}; 

class car : public vehicle
{
    void start() override 
    {
        cout<<"car started"<<endl;
    }
    void  stop() override
    {
        cout<<"car stopped"<<endl;
    }
};

class bike : public vehicle 
{
    void start() override 
    {
        cout<<"bike started"<<endl;
    }
    void  stop() override
    {
        cout<<"bike stopped"<<endl;
    }
};

int main()
{
    vehicle *v; 

    v=new car(); 
    v->start(); 
    v->stop();

    v=new bike(); 
    v->start();
    v->stop();
    return 0; 
}