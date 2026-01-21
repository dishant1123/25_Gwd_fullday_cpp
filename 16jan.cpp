/*
encapsulation  : 
it is  process to wrapping data members  and member functions into single unit and restrict direct access to them

==> it use  to  protect data from unauthotized access 
==> improve maintainability
==> allow to controlled modification of data members

2 method  : 
1. get method  : private member print 
2. set  method : private member modify  
*/

#include<iostream>
using  namespace std; 
class bank 
{
    private  : 
        int balance; 
    public : 
        bank()
        {
            balance =25000; 
        }
    int get_balance()
    {
            return balance;  // get method   ==> private member print
    }
    void deposit(int amt)
    {
        balance+=amt;
        cout<<"deposited amount is  : "<<amt<<endl;
    }
    void  withdraw(int amt)
    {
        if(balance - amt >=10000)  // balance =35000  35000 -29000 >=10000 
        {
            balance-=amt;
            cout<<"withdrawed amount is  : "<<amt<<endl;
        }
        else 
        {
            cout<<"min 10000 balance is  require. ";
        }
    }
    void set_balance(int amt)
    {
        balance =amt;  // set method  ==> private member modify
    }
};
int main()
{
    bank b; 
    cout<<"initial balance is  : "<<b.get_balance()<<endl; 
    b.deposit(10000);  // bal =35 
    b.withdraw(18000); // bal =17 

    cout<<"final balance is  : "<<b.get_balance()<<endl; 

    b.set_balance(40000);
    cout<<"after using set method  balance is  : "<<b.get_balance()<<endl; 
    
    b.deposit(10000);  // bal = 50 
    b.withdraw(18000); // bal =32 

    cout<<"final balance is  : "<<b.get_balance()<<endl; 


    return 0; 
}

