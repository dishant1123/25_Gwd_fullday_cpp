// using private  : 
/*
#include <iostream>
using namespace std;
class student 
{
    private :
        int rollno;
        string name; 
        int age;
    public :
        student()
        {
            rollno =0; 
            name="";
            age =0; 
        }
    void input()
    {
        cout<<"enter the rollno : "<<endl;
        cin>>rollno; 
        cout<<"enter the name : "<<endl;
        cin>>name; 
        cout<<"enter the age : "<<endl;
        cin>>age; 
    }
    void display()
    {
        cout<<"rollno   : "<<rollno<<endl;
        cout<<"name     : "<<name<<endl;
        cout<<"age      : "<<age<<endl;
    }

};
int main()
{
    student s[2]; 
    cout<<"enter the  student information"<<endl;
    for(int i=0; i<2; i++)
    {
        s[i].input();
    }
    cout<<"students  information display"<<endl;
    for(int i=0; i<2; i++)
    {
        s[i].display();
    }
    return 0; 
}
*/
// copy constructor : 
/*
#include <iostream>
using namespace std;
class student
{

    private :
        int rollno;
        string name;
        int age;
    public :
        student(int r, string n, int  a)
        {
            rollno=r;
            name=n;
            age=a;
        }
        student(student &s)
        {
            rollno =s.rollno; 
            name =s.name; 
            age =s.age;
        }
        void show()
        {
            cout<<"rollno :"<<rollno<<endl;
            cout<<"name :"<<name<<endl;
            cout<<"age :"<<age<<endl;
        }
};
int main()
{
    student s1(1,"dhyan",20);  // original object 

    student s2=s1; //  copy constructor  
    cout<<"original object"<<endl;
    s1.show(); // original  object  method call 
    
    cout<<"copy object"<<endl;
    s2.show(); // copy object method call
    return 0; 
}
*/

//constructor  overloading  : 

#include <iostream>
using namespace std;
class student 
{
    private :
        int rollno;
        string name;
        int age;
    public :
        student()
        {
            rollno =0;
            name="NA";
            age =0;
        }
        student(int r, string n)
        {
            rollno =r; 
            name =n ;
            age=20; 
        }
        student(int r, string n, int a)
        {
            rollno =r;
            name =n;
            age =a;
        }

        void display()
        {
            cout<<"rollno :"<<rollno<<endl;
            cout<<"name :"<<name<<endl;
            cout<<"age :"<<age<<endl;
        }
};
int main()
{
    student s1; 
    student s2(1,"dhyan"); 
    student s3(2,"vishal",20); 

    s1.display(); // default constructor
    s2.display(); // parameterized constructor  == >age  fix 
    s3.display();// parameterized constructor  ==> rollno ,name ,age
    return 0;
}