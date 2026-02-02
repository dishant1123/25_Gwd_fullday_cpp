/*
inheritance : to inherit properties / method  from a base class. 
*/
// ex : 1 single level inheritance : 

#include <iostream>
using namespace std;
class student  // base  class 
{
    public :
        string name; 
        int  rollno ; 
    student(string  n , int  r )
    {
        name =n; 
        rollno =r; 
    }
    // void show()
    // {
    //     cout<<"name : "<<name<<endl;
    //     cout<<"roll no : "<<rollno<<endl;
    // }
        
};
class teacher : public student   // derived class
{
    public : 
        string subject; 

    teacher(string n ,int  r,  string s) : student(n,r) // base class constructor called
    {
        subject =s;
    }
    void  display()
    {
        // student :: show();  
        cout<<"name : "<<name<<endl;
        cout<<"roll no : "<<rollno<<endl;
        cout<<"subject : "<<subject<<endl;
    }
};
int main()
{
    teacher t("shahil",1,"cpp");
    t.display(); 
    return 0;  
}