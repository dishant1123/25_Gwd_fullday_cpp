/*
oop : object oriented programming
class : blue print  of object. 
object : instance  of  class . 

type  : 

1. public : any access to class members 
2. private : within class only 
3. protected : inherit class only  

4 pillar : 

1. inheritance 
2. encapsulation
3. abstraction
4. polymorphism

syntax : 
#include <iostream>
using namespace std;

class  name 
{

};
*/

// public class member : 
#include <iostream>
using namespace std;
class student 
{
    public : 
        int rollno=1; // rollno  , name  ===>  class member  ==> public 
        string name="saumya"; 

    // void  input()
    // {
    //     cout<<"enter rollno :";
    //     cin>>rollno;
    //     cout<<"enter name :";
    //     cin>>name;
    // }
    
    void  display()
    {
        cout<<"rollno :"<<rollno<<"\n";
        cout<<"name :"<<name<<endl;
    }
};
int main()
{
    student s1;   // s1  object  ===> student  class 
    //cout<<"rollno :"<<s1.rollno<<"\n";
    //cout<<"name :"<<s1.name<<endl;
    // s1.input(); 

    // cout<<"enter the  rollno :"; 
    // cin>>s1.rollno; 
    // cout<<"enter the  name :"; 
    // cin>>s1.name; 
    
    s1.rollno=2; 
    s1.name ="chahat";
    cout<<"rollno :"<<s1.rollno<<"\n";
    cout<<"name :"<<s1.name<<endl;
    
    s1.display();
    return 0; 
}

/*
HW  : 
switch  : 
    1. addition  
    2. sub 
    3. div 
    4. mod 
    5. mul 
    6. rev 
*/