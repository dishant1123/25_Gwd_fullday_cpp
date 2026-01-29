// inheritance  + encapsulation  + polymorphism : 
/*
1. method overriding  ,  loading 
2. get set : 
3. constructor  

bank : 
saving ac (bank) 
pre saving (saving ac)
*/

#include <iostream>
using namespace std;
class bank 
{
    private : 
        int  accountno; 
        int balance; 
    protected :
        string name; 
    public : 
        bank(int acc , int bal , string n)
        {
            accountno = acc;
            balance = bal;
            name = n;
        }
    void set_balance(double bal)
    {
        balance =bal; 
    }
    double  get_balance()
    {
        return balance; 
    }
    int  get_accno()
    {
        return accountno;
    }
    void  deposit(double amt,string mode)
    {
        balance +=amt; 
        cout<<"deposited amt :"<<amt<<"via"<<mode<<endl;
    }
    virtual void  withdraw(double amt)
    {
        if(balance - amt >=10000)
        {
            balance -=amt; 
        }
        else 
        {
            cout<<"min balance  is  required 10000 rs."<<endl;
        }
    }
    virtual void display()
    {
        cout<<"acc no : "<<accountno<<endl;
        cout<<"name : "<<name<<endl;
        cout<<"balance : "<<balance<<endl;
    }
};

class savingaccount : public bank 
{
    private : 
        double int_rate; 
    public : 
        savingaccount(int acc , int bal, string n , double rate) : bank(acc,bal,n) // base class constructor called
        {
            int_rate =rate; 
        }
    void  withdraw(double amt) override
    {
        if(get_balance() -amt >=15000)
        {
            set_balance(get_balance() -amt);
            cout<<"saving account withdrawed : "<<amt<<endl;
        }
        else 
        {
            cout<<"min balance  is  required 15000 rs."<<endl;
        }
    }
    void  addinterest()
    {
        double  interest = get_balance() * int_rate / 100; 
        set_balance(get_balance() +interest);
        cout<<"interest added : "<<interest<<endl;
    }
    void  display() override
    {
        cout<<"saving account details :"<<endl;
        bank::display(); 
        cout<<"interest : "<<int_rate<<"%"<<endl;
    }

};
class premiumsavingsaccount : public savingaccount 
{
    private : 
        int reward_points; 
    public : 
        premiumsavingsaccount(int acc, int bal , string n ,double rate) :savingaccount(acc,bal,n,rate)
        {
            reward_points =0; 
        }
    void withdraw(double amt) override
    {
        savingaccount::withdraw(amt);
        reward_points +=10; 

    }
    void show_reward_points()
    {
        cout<<"reward points : "<<reward_points<<endl;
    }
    void display() override
    {
        savingaccount::display();
        cout<<"reward points : "<<reward_points<<endl;
    }
};
int main() 
{
    bank *acc; 
    premiumsavingsaccount ps(102,30000,"chahat",10); 
    acc= &ps; 

    acc->deposit(20000,"cash"); 
    acc->display();

    acc->deposit(1000,"UPI"); 
    acc->withdraw(20000);

    acc->display();

    return 0; 
    

}