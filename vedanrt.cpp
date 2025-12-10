/*
c ==> procedure  oriented programming
c++ ==> object oriented programming

oop : 

1.inheritance
2.polymorphism
3.encapsulation
4.abstraction

#include<iostream>
cout<<  ==> left shift 
cin>>  ==> right shift 

#include<iostream>
using namespace std;
int main()
{
    cout<<"hello world";
    return 0;
}

// without using  namespace std;

#include<iostream>
int main()
{
    std::cout<<"hello world";
    std::cout<<"hello vedant";
    return 0;
}


*/
/*
#include<iostream>
int main()
{
    std::cout<<"hello world\n";
    std::cout<<"hello vedant";   
    std::cout<<"hello harshika";

    return 0;
}
*/ 

/*
opp : 

class : blueprint of object. 
object :instance of  class

type  : 

1.public : data members accessible  any where 
2.private : data members accessible only in class
3.protected : data members accessible only in class and derived classes(inherit)
*/

#include<iostream>
using namespace std;
class student // student ==>class name 
{
    public: 
        int rollno=1;      // ==> rollno , name  , city 
        string name="saumya";
        string city="delhi";
    // void input()
    // {
    //     cout<<"enter the  rollno : "; 
    //     cin>>rollno; 
    //     cout<<"enter the  name : "; 
    //     cin>>name; 
    //     cout<<"enter the  city : "; 
    //     cin>>city;
    // } 
    void show()
    {
        cout<<"rollno is "<<rollno<<endl;
        cout<<"name is "<<name<<endl;
        cout<<"city is "<<city<<endl;
    }
};
int main()
{
    student s1;  // student class name  ==> s1 ==> object  
    //cout<<"rollno is  :"<<s1.rollno<<endl;
    //cout<<"name is  :"<<s1.name<<endl;
    //cout<<"city is  :"<<s1.city<<endl;
    // cout<<"enter the  rollno : "; 
    // cin>>s1.rollno; 
    // cout<<"enter the  name : "; 
    // cin>>s1.name; 
    // cout<<"enter the  city : "; 
    // cin>>s1.city; 
    //s1.input();
    s1.show();
    
    s1.rollno=2; 
    s1.name="chahat";
    s1.city="ahm";

    s1.show();
    return 0;
}