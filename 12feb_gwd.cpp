/*
polimorphsim  :  means one  names many forms 

1. complie time  polymorphism  ==>function  overloading  
2. rin time  polymorphism  ==>function  overriding

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