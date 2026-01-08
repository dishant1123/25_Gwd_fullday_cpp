/*
hybrid inheritance  : 

usually (combination  multiple and  multi level) 

class a 
class b : public a 
class c : public a 
class d : public b,public c 

==> in cpp hybrid inheritance  is possible  only when you use virtual function. 

without using virtual function  : 

1. ==> 2 base class constructor. 
2. ambiguous  : 

class a   // base class 
    void  show() 

class b : public a    // derived class
    void show() 

*/
// without  using  virtual function  : 
/*
#include<iostream>
using  namespace  std; 
class a 
{
    public : 
        int x; 
};
class b : public a 
{
};
class c : public a 
{
};
class d : public b, public c 
{
};

int main()
{
    d d1; 
    d1.x=10;  // ambiguous error  : / diamond prlm 
    return 0;     
}
*/
/*
d gets two copies of a 
one via b 
one via c 
complier doesn't know which one to use 

*/

// using  virtual function  : 
/*
#include<iostream>
using  namespace  std;
class a 
{
    public : 
        int x ;
};
class b : virtual public a 
{};
class c : virtual public a
{}; 
class d: public b,public c
{};

int main()
{
    d d1; 
    d1.x=10;
    cout<<d1.x<<endl;
    return 0;
}
*/
/*
purpose  : 1. one  constructor  call . 
           2. single shared base class . 
*/


// using  constructor in virtual  function   :

#include<iostream>
using namespace std; 
class person
{
    protected : 
        string name; 
    public : 
        person(string name )
        {
            this->name =name; 
            cout<<"constructor of student is called"<<endl;
        }
};
class employees : virtual public person
{
    public : 
        int salary; 
    public : 
        employees(string name , int salary) :person(name) 
        {
            this->salary=salary;
            cout<<"constructor of employees is called"<<endl;
        }
 };
 class student : virtual public person
 {
    public : 
        int  rollno; 
        student(string name, int rollno) : person(name)
        {
            this->rollno=rollno;
        }
 };

class intern : public employees,public student
{
    public : 
        intern(string name ,int salary, int rollno) :employees(name,salary),student(name,rollno),person(name)
        {
            cout<<"constructor of intern is called"<<endl;

        }
        void display()
        {
            cout<<"name is : "<<name<<endl;
            cout<<"salary is : "<<salary<<endl;
            cout<<"rollno is : "<<rollno<<endl;
        }
};
int main()
{
    intern i1("purva",90000,12); 
    i1.display();
    return 0; 
}

/*
Implement the following class hierarchy in C++:

Create a base class named Staff having the following data members:
    name (string)
    salary (float or int)

Create a derived class named Teaching that inherits from Staff and has:
    subject (string) as its data member

Create another derived class named NonTeaching that inherits from Staff and has:
    department (string) as its data member

The base class Staff should have member functions to:
    Accept staff details
    Display staff details

The derived classes Teaching and NonTeaching should override (extend) the display method of the base class to include their respective data members.

Write a main() function to:
Create objects of Teaching and NonTeaching
Demonstrate inheritance and method overriding
*/