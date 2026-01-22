
// public  , private  , protected : 
/*
#include <iostream>
using namespace std;
class student 
{
    public : 
        int rollno; 
        string  name;
    void  input()
    {
        cout<<"enter rollno : ";
        cin>>rollno;
        cout<<"enter name : ";
        cin>>name; 
    } 
    void  show()
    {
        cout<<"rollno : "<<rollno<<endl;
        cout<<"name : "<<name<<endl;
    }
    
};
int main()
{
    student s1; 
    // cout<<"rollno : "<<s1.rollno<<endl;
    // cout<<"name : "<<s1.name<<endl;

    // s1.rollno =20 ;
    // s1.name ="chahat";

    // cout<<"rollno : "<<s1.rollno<<endl;
    // cout<<"name : "<<s1.name<<endl;

    s1.input(); 
    s1.show();
    return 0;
}
*/

// private  : 
/*
#include <iostream>
using namespace std;
class student 
{
    private : 
        int rollno=1; 
        string  name="honeeey "; 
    public : 
        void show()
        {
            cout<<"rollno : "<<rollno<<endl;
            cout<<"name : "<<name<<endl;
        }
};

int main()
{
    student s1; 
    // cout<<"rollno : "<<s1.rollno<<endl;   ==> error bcz of  private 
    s1.show(); 
    return 0; 

}
*/

// protected : 
#include <iostream>
using namespace std;
class student 
{
    protected :
        int  rollno =1 ; 
        string name ="chaahaaat"; 
        
};
class teacher : public student
{
    public : 
        void show()
        {
            cout<<"rollno : "<<rollno<<endl;
            cout<<"name : "<<name<<endl;
        }
};
int main()
{
    teacher t1; 
    t1.show();
    return 0;  
}