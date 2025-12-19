/*
single  level  inheritance  using  constructor  : 
*/
/*
#include<iostream>
using namespace std; 
class student 
{
    public :        
        int rollno;
        string name; 
        int age; 
    student()
    {
        rollno =1; 
        name = "honey";
        age =19; 
    } 
};
class teacher : public student 
{
    public :
        string subject;
        string t_name;
        teacher() :student() // base  class constructor
        {
            subject = "maths"; 
            t_name = "dr.purvi";
        }
        void  display()
        {   
            cout<<"student information"<<endl; 
            cout<<"rollno : "<<rollno<<endl; 
            cout<<"name : "<<name<<endl; 
            cout<<"age : "<<age<<endl; 
            cout<<"subject : "<<subject<<endl;
            cout<<"t_name : "<<t_name<<endl;

        }
};
int main()
{
    teacher t1; 
    t1.display(); 
    return 0; 
}
*/

// parameterized constructor

#include<iostream>
using namespace std;
class student 
{
    public : 
        string name; 
        int age; 
    student(string n, int a)
    {
        name =n; // honey
        age =a;  // 19 
    }
};
class teacher : public student 
{
    public :
        string subject;
        string t_name;
    teacher(string n, int a , string  s , string t) :student(n,a)
    {
        subject =s;
        t_name =t; 
    }
    void  display()
    {
            cout<<"student information"<<endl; 
            cout<<"name : "<<name<<endl; 
            cout<<"age : "<<age<<endl; 
            cout<<"subject : "<<subject<<endl;
            cout<<"t_name : "<<t_name<<endl;
    }
};
int main()
{
    teacher t1("honey",19,"maths","dr.purvi");
    t1.display();
    return 0; 
}