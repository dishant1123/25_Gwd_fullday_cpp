/*
abstraction  : means  showing  only essential features and  hiding  implementation details.

1. abstract class
2. interface (pure virtual function)
*/

// ex :1 
/*
#include <iostream>
using namespace std; 

class bank    // abstract class 
{
    protected : 
        int balance;

    public : 
        bank(double b)
        {
            balance = b;
        }
    virtual void deposit(int amt) =0;  // pure virtual function
    virtual void  withdraw(int amt) =0;  // deposit withdraw ==>pure virtual function

    void show_balance()
    {
        cout<<"balance is  : "<<balance<<endl;
    }
};

class savings : public bank
{
    public : 
        savings(double b) : bank(b)
        {
        }
    void deposit(int amt) override
    {
        balance +amt; 
        cout<<"depositing  amount  : "<<amt<<endl;
    }
    void withdraw(int amt) override
    {
        if(balance -amt >=10000)
        {
            balance -=amt;
            cout<<"withdrawing  amount  : "<<amt<<endl;
        }
        else 
        {
            cout<<"min balance is required 10000."<<endl;
        }
    }
};
int main()
{
    bank *b =new savings(20000); 

    
    // bank *b 
    // savings  s(20000)
    // b =&s; 
    
   b->deposit(2000); 
   b->withdraw(10000);
   b->show_balance();
   return 0; 
}
*/ 

// ex :2 abtraction using interface : 
/*
#include <iostream>
using namespace std;
class vehicle 
{
    public : 
        virtual void start() =0; 
        virtual void stop()=0;
};

class car : public vehicle
{
    public : 
        void start() override
        {
            cout<<"car  is  starting ...."<<endl;
        }
        void stop() override
        {
            cout<<"car  is  stopping ...."<<endl;
        }
};

class bike : public vehicle
{
    public :
        void start() override
        {
            cout<<"bike  is  starting ...."<<endl;
        }
    void stop() override
    {
        cout<<"bike  is  stopping ...."<<endl;
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
*/

/*
1. Create an abstract class Shape with a pure virtual function area(). Derive classes Circle andRectangle and calculate their areas
*/

#include <iostream>
using namespace std;
class shape 
{
    public : 
        virtual void area()=0; 
};

class circle : public shape
{
    private : 
        int  radius; 
    public :
        circle(int r) 
        {
            radius =r;
        }
        void  area() override
        {
            float result =3.14*radius*radius;
            cout<<"area  of  circle  is  : "<<result<<endl;
        }

};

class rectangle : public shape
{
    private :
        float length, breadth;
    public :
        rectangle(float l, float b)
        {
            length =l;
            breadth =b;
        }
    void area() override
    {
        float result =length*breadth;
        cout<<"area  of  rectangle  is  : "<<result<<endl;
    }
}; 

int main()
{
    shape *s; 

    shape *c= new circle(5);
    c->area();

    shape *r= new rectangle(5,10);
    r->area();

    return 0; 
}