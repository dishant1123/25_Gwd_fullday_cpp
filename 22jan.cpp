/*
bank  : 
    1. pin generate 
    2. encapsulation  :
        balance ==> private  
    3. inheritance    ===> class saving , class current   
    4. using friend  function  ==> calculation  interest 
        menu  driven  : 
            1. enter the pin  for  generating account 
            2. current  ==> enter pin  ==> deposit  withdraw checkbalance    
            3. saving   ==> enter  pin ==> deposit  withdraw checkbalance
            4. exit 

*/

#include<iostream>
using  namespace std;

class bankaccount
{
    protected : 
        int  pin; 
    private  : 
        int  balance;   // encapsulation 

    public : 
        bankaccount()
        {
            pin =0; 
            balance =25000;
        }
    void  generationpin()
    {
        cout<<"enter 4 digit pin  : "; 
        cin>>pin; 
        cout<<"account created with balance 25000 rs "<<endl;
    }
    bool verifypin(int p)
    {
        return p==pin;
    }
    void  deposit(int amt)
    {
        balance +=amt;
        cout<<"deposited "<<amt<<" rs "<<endl;
        cout<<"suucessful deposited "<<endl;
    }
    void  withdraw(int amt)
    {
        if(balance -amt >=10000)
        {
            balance -=amt; 
            cout<<"withdrawed "<<amt<<" rs "<<endl;
            cout<<"suucessful withdrawed "<<endl;
        }
        else 
        {
            cout<<"you have require min 10000 rs balance."<<endl;
        }
    }
    void checkbalance()
    {
        cout<<"your balance is "<<balance<<" rs "<<endl;
    }
    friend void calculateinterest(bankaccount &acc);
    
};
void  calculateinterest(bankaccount &acc)
{
    int  interest =acc.balance  * 0.05;
    acc.balance +=interest;
    cout<<"interest is "<<interest<<" rs "<<endl;
}
class savingaccount : public bankaccount 
{
    public : 
        int  interestrate; 
        string accounttype;
    savingaccount()
    {
        interestrate =5;
        accounttype ="saving";
    }
    void showdetails()
    {
        cout<<"account type  : "<<accounttype<<endl;
        cout<<"interest rate  : "<<interestrate<<endl;
    }
};
class currentaccount : public bankaccount
{
    public : 
        double  overdraftlimit; 
        string accounttype;
    currentaccount()
    {
        overdraftlimit =10000; 
        accounttype ="current";
    }
    void  showdetails()
    {
        cout<<"account type  : "<<accounttype<<endl;
        cout<<"overdraft limit  : "<<overdraftlimit<<endl;
    }
};

int main()
{
    savingaccount sa; 
    currentaccount ca;

    int  mainchoice ,subchoice, pininput; 
    double  amt; 

    while(1)
    {
        cout<<"===========MAIN MENU==========="<<endl;
        cout<<"1. generate pin "<<endl;
        cout<<"2. saving account "<<endl;
        cout<<"3. current account "<<endl;
        cout<<"4. exit "<<endl;
        cout<<"enter your mainchoice : ";
        cin>>mainchoice;

        switch (mainchoice)
        {
        case 1:
            sa.generationpin();
            ca.generationpin();
            break;
        //  saving  :
        case 2:
            cout<<"enter the  pin :";
            cin>>pininput; 
            if(sa.verifypin(pininput))
            {
                sa.showdetails(); 
                do{
                    cout<<"\n saving account menu"<<endl;
                    cout<<"1. deposit "<<endl;
                    cout<<"2. withdraw "<<endl;
                    cout<<"3. check balance "<<endl;
                    cout<<"4. calculate interest (add) "<<endl;
                    cout<<"5.back"<<endl; 
                    cin>>subchoice;
                    
                    if(subchoice==1)
                    {
                        cin>>amt; 
                        sa.deposit(amt);

                    }
                    else if(subchoice==2)
                    {
                        cin>>amt;
                        sa.withdraw(amt);
                    }
                    else if (subchoice==3)
                    {
                        sa.checkbalance();
                    }
                    else if(subchoice==4)
                    {
                        calculateinterest(sa);
                    }
                    
                }while(subchoice!=5);
            }
            else
            {
                cout<<"invalid pin"<<endl;
            }
            break;
        case 3 :
            cout<<"enter the  pin :";
            cin>>pininput;
            if(ca.verifypin(pininput))
            {
                ca.showdetails();
                do{
                    cout<<"\n current account menu"<<endl;
                    cout<<"1. deposit "<<endl;
                    cout<<"2. withdraw "<<endl;
                    cout<<"3. check balance "<<endl;
                    cout<<"4. calculate interest (add) "<<endl;
                    cout<<"5.back"<<endl;
                    cin>>subchoice;
                    if(subchoice==1)
                    {
                        cin>>amt;
                        ca.deposit(amt);
                    }
                    else if(subchoice==2)
                    {
                        cin>>amt;
                        ca.withdraw(amt);
                    }
                    else if (subchoice==3)
                    {
                        ca.checkbalance();
                    }
                    else if(subchoice==4)
                    {
                        calculateinterest(ca);
                    }
                }while(subchoice!=5);
            }
            else 
            {
                cout<<"invalid pin"<<endl;
            }
            break;
        case 4 :
            cout<<"exiting"<<endl;
            return 0;
        }
    }

}