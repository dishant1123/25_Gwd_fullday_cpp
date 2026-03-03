/*
exceptional handling  : 

 ==> exceptional handling in cpp is mechnisam to handle runtime errors so that the program does not terminate unexpectedly.

 try ==>block where risky code is written 
 throw ==>used to throw an exception
 catch ==>handle the exception

syntax : 

try 
{
    // risky code  
    throw exception_name;
}
catch(type_variable)
{
    handling code
}

*/

// ex :1 

/*
#include <iostream>
using namespace std;
int main()
{
    int  a,b; 
    cout<<"enter the  two numbers : \n"; 
    cin>>a>>b;

    try 
    {
        if(b==0)
        {
            throw "division by zero is not allowed. ";
        }
        cout<<"the result is : "<<a/b<<endl;
    }
    catch(const char* s)
    {
        cout<<"exception caught :"<<s<<endl;
    }

    cout<<"program continues"<<endl;
    return 0; 
}
*/

// ex :2  multiple catch blocks 
/*
#include <iostream>
using namespace std;
int main()
{
    int choice; 
    cout<<"enter 1 or 2 : \n";
    cin>>choice;

    try 
    {
        if(choice==1)
        {
            throw 100 ; // throwing an integer exception
        }
        else if(choice==2)
        {
            throw 3.14 ; // throwing a float exception
        }
        else 
        {
            throw "invalid choice";
        }
    }
    catch(int x)
    {
        cout<<"exception caught : integer exception"<<endl;
    }
    catch(float x)
    {
        cout<<"exception caught : float exception"<<endl;
    }
    catch(const char* s)
    {
        cout<<"exception caught  string: "<<s<<endl;
    }
    return 0; 
}
    */
// task  :1 handle value  error . 


// class object  :  exceptional handling  

#include <iostream>
using namespace std;

class insufficient_funds  // custom exception class
{
    public : 
        void msg()
        {
            cout<<"error : insufficient funds"<<endl;
        }
};

class bank_account
{
    public : 
        int balance; 
    
    bank_account(int  b)
    {
        balance = b;
    }
    void withdraw(int amount)
    {
        if(amount >balance)
        {
            throw insufficient_funds(); 
        }
        else 
        {
            balance-=amount;
            cout<<"withdrawn : "<<amount<<endl;
            cout<<"remaining balance : "<<balance<<endl;
        }
    }
        
};

int main()
{
    bank_account acc(25000);

    try 
    {
        acc.withdraw(3000);
    }
    catch (insufficient_funds e)
    {
        e.msg();
    }
    return 0; 
}

/*
task  :2 
age >18 valid  for voting 
less than  18  invalid  for voting
*/