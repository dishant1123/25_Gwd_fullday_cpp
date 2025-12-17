/*
class : blue  print  of object  
object : instance of class 

class type  : 

1. public :  class  can be accessed from outside the class. 
2. private  :  class  can be accessed from inside the class.
3. protected :  class  can be accessed from inside the class and from outside the class.
*/
/*
#include <iostream>
using namespace std;
class person 
{
    public : 
        int rollno=1; 
        string name="nitya"; 
    void  show()
    {
        cout<<"rollno is  : "<<rollno<<endl;
        cout<<"name is  : "<<name<<endl;
    }
};
int main()
{
    person p1; 
    p1.show();  // function  
    // cout<<"rollno is  : "<<p1.rollno<<"\n";  // obj call 
    // cout<<"name is  : "<<p1.name<<endl;

    p1.rollno =2 ; 
    p1.name="dhruv";

    p1.show(); 
    return 0; 
}
*/ 

// private  : 

#include <iostream>
using namespace std;
class student 
{
    private : 
        int  rollno =1; 
        string name ="nitya";
    public :
        void show()
        {
            cout<<"rollno is  : "<<rollno<<endl;
            cout<<"name is  : "<<name<<endl;
        
        }
};
int main()
{
    student s1; 
    // cout<<"rollno is  : "<<s1.rollno<<endl;
    // cout<<"name is  : "<<s1.name<<endl; // bcz of  private  you can't access outside the class . 
    s1.show(); 
    return 0; 
}