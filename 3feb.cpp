/*
inheritance +encpsulation  + polimorphism + abstraction  :

1. friend  
2. pure  virtual  function ==>abstraction 
3. method  overriding  and  method loading ==>polymorphism
4. get and set metohd ==>encapsulation
*/

#include <iostream>
using  namespace std; 
class vehicle 
{
    protected : 
        int speed; 
    public : 
        void set_speed(int s)
        {
            speed =s; 
        }
        int  get_speed()
        {
            return speed;
        }
    virtual void  showdetalis() =0; 

    virtual void feultype()
    {
        cout<<"fuel type : not defined"<<endl;
    }
};

class car ; 
class bike; 

void insepctvehicle(car &c, bike &b);

class car : public vehicle
{
    private : 
        string brand; 
    public :
        void set_brand(string b)
        {
            brand =b; 
        }
    string get_brand()
    {
        return brand;
    }
    void showdetalis() override
    {
        cout<<"car brand :"<<brand<<endl;
        cout<<"car speed :"<<speed<<endl;
    }
    void  feultype() override
    {
        cout<<"fuel type  : petrol / diesel"<<endl;
    }
    void  calculatemileage(int  distance , int fuel)
    {
        cout<<"mileage: "<<distance/fuel<<"km/l"<<endl;
    }
    friend void insepctvehicle(car &c, bike &b);
};

class bike : public vehicle
{
    private : 
        string  model; 
    public :
        void set_model(string  m)
        {
            model =m;
        }
        string get_model()
        {
            return model;
        }
        void showdetalis() override
        {
            cout<<"bike model :"<<model<<endl;
            cout<<"bike speed :"<<speed<<endl;
        }
        void feultype() override
        {
                cout<<"fuel type : petrol"<<endl;
        }
        friend void insepctvehicle(car &c, bike &b);

};

void insepctvehicle(car &c, bike &b)
{
    cout<<"\n friend function called"<<endl;
    
    cout<<"car brand :(private)"<<c.brand<<endl;
    cout<<"car speed :(protected)"<<c.speed<<endl;

    cout<<"bike model :(private)"<<b.model<<endl;
    cout<<"bike speed :(protected)"<<b.speed<<endl;
}
int main() // menu driven 
{
    /*
    vehicle *v; 
    car c; 
    bike b; 

    int choice ; 
    do{
        cout<<"vehicle management system"<<endl;
        cout<<"1. create car"<<endl;
        cout<<"2. create bike"<<endl;
        cout<<"3. inspect vehicle (friend function)"<<endl;
        cout<<"4. exit"<<endl;
        cout<<"enter the choice: "; 
        cin>>choice;
        switch(choice)
        {
            case 1:
            {
            string brand; 
            int speed; 

            cout<<"enter car brand : ";
            cin>>brand;
            cout<<"enter car speed : ";
            cin>>speed;

            c.set_brand(brand);
            c.set_speed(speed);

            v=&c; 
            v->showdetalis(); 
            v->feultype(); 

            c.calculatemileage(500,25);
            c.calculatemileage(450.5,22.5); 
            break;
            }

            case 2 :
            {
            string model;
            int speed;

            cout<<"enter bike model : ";
            cin>>model;
            cout<<"enter bike speed : ";
            cin>>speed;

            b.set_model(model);
            b.set_speed(speed);

            v=&b; 
            v->showdetalis();
            v->feultype();
            break;
            }
            case 3: 
            {
                insepctvehicle(c,b); 
                break;
            }
            case 4 :
            {
                cout<<"exiting"<<endl;
                break;
            }
            default :
            {
                cout<<"invalid choice"<<endl;
                break;
            }
        }

    }while (choice !=4); 
    */

    vehicle *v[50] ;
    int  vcount =0 ;

    car c; 
    bike b; 

    int  choice ; 
    do{
        cout<<"vehicle management system"<<endl;
        cout<<"1. create car"<<endl;
        cout<<"2. create bike"<<endl;
        cout<<"3. inspect vehicle (friend function)"<<endl;
        cout<<"4. display vehicle"<<endl;
        cout<<"5. exit"<<endl;
        cout<<"enter the choice: ";
        cin>>choice; 
        switch(choice)
        {
            case 1: 
            {
                car* c=new car(); 
                string brand;
                int  speed;
                cout<<"enter car brand : ";
                cin>>brand;
                cout<<"enter car speed : ";
                cin>>speed;

                c->set_brand(brand);
                c->set_speed(speed);

                v[vcount++] =c; 
                break;
            }
            case 2: 
            {
                bike* b=new bike();
                string model;
                int  speed;
                cout<<"enter bike model : ";
                cin>>model;
                cout<<"enter bike speed : ";
                cin>>speed;

                b->set_model(model);
                b->set_speed(speed);

                v[vcount++] =b;
                break;
            }
            case 3: 
            {
                insepctvehicle(c,b); 
                break;
            }
            case 4: 
            {
                cout<<"all veihcle display"<<endl;
                for(int i =0; i<vcount; i++)
                {
                    v[i]->showdetalis(); 
                    v[i]->feultype();
                }
                break;
            }
            case 5:
            {
                cout<<"exiting"<<endl;
                break;
            }
            default :
            {
                cout<<"invalid choice"<<endl;
                break;
            }
            
        }
    }while(choice !=5);
    return 0;
}

/*
1. display  :  to  show  all  bike  and  car  detalis  which  user  added  in  the  system.
2. truck  :  to  add  truck  in  the  system.

*/