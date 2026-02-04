/*
encapsulation  : means wrapping data and functions together  in a single unit and restricting direct access to the data. 

2 method  : 

1. get method : data print 
2. set  method : new value  set .

use : 
1. private 

*/
// ex :1 

#include<iostream>
using namespace std;
class student 
{
    private :
        int rollno=1; 
        string name="chahat"; 
        int age=17; 
        
    public :
        void set_rollno(int r) 
        {
            rollno =r;
        }
        void set_age(int a)
        {
            if(a>0)
            {
                age =a; 
            }
            else 
            {
                cout<<"age must be positive"<<endl;
            }
        }
        void set_name(string n)
        {
            name =n; 
        }
        int get_rollno()
        {
            return rollno; 
        }
        string get_name()
        {
            return name; 
        }
        int get_age()
        {
            return age; 
        }

};

int main()
{
    student s; 
    // cout<<"enter rollno : "<<s.rollno <<endl;

    cout<<"information of student (before using set method)"<<endl;
    cout<<"rollno : "<<s.get_rollno()<<endl;
    cout<<"name : "<<s.get_name()<<endl;
    cout<<"age : "<<s.get_age()<<endl;

    cout<<"after  using set method"<<endl;
    s.set_rollno(10); 
    s.set_age(18);
    s.set_name("honey"); 
    
    cout<<"rollno : "<<s.get_rollno()<<endl;
    cout<<"name : "<<s.get_name()<<endl;
    cout<<"age : "<<s.get_age()<<endl;

    return 0; 
}