/*
polimorphsim  :  means one  names many forms 

1. complie time  polymorphism  ==>function  overloading  
2. run time  polymorphism  ==>function  overriding

*/

// ex :1  function  overloading :    
/*
1.same function name  
2.different  parameters
3.decided  at  compile time
4. no inheritance required 
*/
/*
#include <iostream>
using namespace std; 
class calculator 
{
    private  : 
        int  a,b; 
    public : 
        calculator()
        {
            a=0; 
            b=0;
            cout<<"default constructor"<<endl;
        }
        calculator(int  x , int y)
        {
            a=x;
            b=y;
            cout<<"constructor with parameters"<<endl;
        }
        int add(int x, int  y)
        {
            return x+y; 
        }
        int add(int  x, int y ,int z)
        {
            return x + y+z; 
        }
};
int main()
{
    calculator  c1;
    calculator  c2(10,20); 

    cout<<"add 2 number  is  : "<<c1.add(5,6)<<endl; 
    cout<<"add 3 number  is  : "<<c2.add(5,6,7)<<endl; 
    return 0; 

}
*/

// ex : 2 function  overriding  : 

/*
1. require inheritance 
2.same  function  and same  parameters
3. decided at run time . 
4. uses virtual function  
*/
/*
#include <iostream>
using namespace std;
class animal 
{
    protected : 
        string name; 
    public :
        animal(string  n)
        {
            name =n; 
        }
    virtual void sound()
    {
        cout<<"animal sound"<<endl;
    }
};
class dog : public animal 
{
    private : 
        int age; 
    public : 
        dog(string n, int a) :animal(n)
        {
            age =a;
        }
    void sound()
    {
        cout<<"dog sound : bark ....bhow bhow bhow ...."<<endl;
    }
};
class cat : public animal 
{
    private : 
        int  c_age; 
    public : 
        cat(string n, int a) : animal(n)
        {
            c_age =a; 
        }
    void sound()
    {
        cout<<"cat sound : meow ....meow meow meow ...."<<endl;
    }
};
int main()
{
    animal *a; 

    dog d("kenzo",10); 
    cat c("kitty",5); 
    a=&d;
    a->sound(); 

    a=&c;
    a->sound();
    return 0; 

}
*/
/*
class shape  :  area () ==> drawing  shape  

class circle : public shape   ==> area 3.14 *r*r 
class rectangle : public shape  ==> area = l*b 
class triangle : public shape  ==> area = 0.5*b*h
*/

// ex : 3  inheritance  + polimorphism   + encapsulation :

#include<iostream>
using namespace std;
class vehicle 
{
    private : 
        string brand; 
        int speed;
    public : 
        vehicle(string b, int s)
        {
            brand =b;
            speed =s;
        }
        // encapsulation
        string get_brand()
        {
            return brand;
        }
        int get_speed()
        {
            return speed;
        }
        void set_speed(int s)
        {
            if (s>0)
            {
                speed =s; 
            }
        }
        // run  time  polymorphism
        virtual void start()
        {
            cout<<"vehicle  is  starting ...."<<endl;
        }
        // complie  time  polymorphism
        void accelerate()
        {
            speed +=10; 
            cout<<"vehicle  is  accelerating  speed inc by 10...."<<endl;
        }
        void accelerate(int value)
        {
            speed +=value; 
        }
};

class car : public vehicle 
{
    private : 
        int  doors; 
    public : 
        car(string b, int  s, int d) : vehicle(b,s)// based  class  constructor
        {
            doors =d; 
        }
    void  start() override 
    {
        cout<<"car  is  starting ...."<<endl;
    }
    void showdetails()
    {
        cout<<"brand  is  : "<<get_brand()<<endl;
        cout<<"speed  is  : "<<get_speed()<<endl;
        cout<<"doors  is  : "<<doors<<endl;
    }
};

int main()
{
    vehicle *v; 
    car c ("honda",220,4);

    v=&c; 

    v->start(); 
    c.accelerate(); // 10 
    c.accelerate(20);   // 20  

    c.set_speed(120); 
    c.showdetails();

return 0;
}