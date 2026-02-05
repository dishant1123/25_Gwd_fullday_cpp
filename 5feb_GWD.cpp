/*
encapsulation  + inheritance   ==> menu driven  

==>1. public  2. protected  3. private
==> constructor  

*/
#include <iostream>
using namespace std; 
class person 
{
    private  :
        string name; // private  ==> encapsulation   ==> get  ==> print set ==> new  value  
        int age; 
    protected : 
        string  type; // protected 
    
    public :
        person(string n="unknown",int  a=0)
        {
            name =n; 
            age =a;
            type = "person"; 

        }
    void set_name(string n)
    {
        name =n; 
    }
    string get_name()
    {
        return name; 
    }
    void set_age(int a)
    {
        age =a; 
    }
    int  get_age()
    {
        return age; 
    }
    void  showperson()
    {
        cout<<"name :"<<name<<endl; 
        cout<<"age :"<<age<<endl;
        cout<<"type :"<<type<<endl;
    }
};
class student : public person   // single inheritance 
{
    private : 
        int  rollno; 
    public : 
        student(string n ,int a, int r):person(n,a) // base class constructor called
        {
            rollno =r;
            type = "student";
        }
    void showstudent()
    {
        person::showperson(); 
        cout<<"rollno :"<<rollno<<endl;
    }
};
class clg_student : public student // multi level 
{
    private :
        string college;
    public :
        clg_student(string n, int a, int r, string c):student(n,a,r)
        {
            college =c; 
            type = "clg_student";
        }
    void showclg()
    {
        showstudent(); 
        cout<<"college :"<<college<<endl;
    }
};

class employee : public person 
{
    private :
        int  salary; 
    public : 
        employee(string n, int  a , int s) : person(n,a)
        {
            salary =s;
            type = "employee";
        }
        void  showemp()
        {
            showperson(); 
            cout<<"salary :"<<salary<<endl;
        }
};

class skill 
{
    protected : 
        string skill_name; 
    public : 
        skill(string sk ="unknown")
        {
            skill_name =sk;
        }
};

class trainer : public employee , public skill 
{
    public : 
        trainer(string n , int  a, int s,string sk) :employee(n,a,s),skill(sk)
        {
        }
    void showtrainer()
    {
            
    }
};
/*
    person :
    student : person 
    clg_student : student 
    emp : person 
*/