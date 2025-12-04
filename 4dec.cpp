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

#include <iostream>
using namespace std;
class student 
{
    public : 
        int rollno=1; // rollno  , name  ===>  class member  ==> public 
        string name="saumya"; 
    
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
    s1.display();
    return 0; 
}