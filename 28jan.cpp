/*
polimorpshim  :  one name many forms 
1. method  overloading : complie time poli   
2. method  overriding  :  run time  poli

*/

// function  overloading  : 
/*
same function name  
different number  of  parameters/ arguments 
decided at complie time 
*/
/*
#include <iostream>
using namespace std;
class calculator 
{
    private : 
        int a,b;
    public : 
        calculator()
        {
            a=0; 
            b=0;
            cout<<"default constructor called"<<endl;
        }
        calculator(int  x, int y)
        {
            a=x; 
            b=y;
            cout<<"parameterized constructor called"<<endl;
        }
        int  add(int  x, int y)
        {
            return x+y;
        }
        int  add(int  x ,int y , int z)
        {
            return x+y+z;
        }
};

int main()
{
    calculator c1;
    calculator c2(10,20); 
    cout<<"add 2 number  : "<<c1.add(5,6)<<endl;
    cout<<"add 3 number  : "<<c2.add(5,6,7)<<endl;
    return 0; 

}
*/
// hw : complie vs  run  time  difference  

// method overriding : 

/*
class a  :
    def show() 
class b(a) : 
    def show() 
class c(a) : 
    def show()   ==>  C =c   ==> c.show() ==> a.show()
*/

#include <iostream> 
using namespace std;
class animal 
{
    protected : 
        string name; 
    public : 
        animal(string n )
        {
            name=n;
        }
    virtual void  show()
    {
        cout<<"animal can sound"<<endl;
    }
};
class dog : public animal 
{
    private : 
        int age; 
    public : 
        dog(string n, int  a) : animal(n)  // base class constructor call 
        {
            age =a; 
        }
    void show()
    {
        cout<<name<<" can bark"<<endl;
    }
};
int main()
{
    animal *a; 
    dog d1("kenzo",10);

    a=&d1;
    a->show(); 
    return 0;  

}