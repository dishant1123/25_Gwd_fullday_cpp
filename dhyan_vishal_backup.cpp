/*
constructor  : automatically called when object is created.

rules : 
1. class name  ===> constructor  name .
2. no return type  of constructor 

type  : 
1. default constructor
2. parameterized constructor
3. non parameterized constructor
4. copy constructor
5. constructor overloading
*/

// default constructor: 
/*
#include <iostream>
using namespace std; 
class student 
{
    public : 
        student()
        {
            cout<<"my name is  dhyan shah."<<endl;
            cout<<"live in ahm.";
        }
};
int main()
{
    student s;
    return 0; 
}
*/
// non parameterized constructor
/*
#include <iostream>
using namespace std; 
class student 
{
    public : 
        string name ;
        int age ;
        student()
        {
            name ="dhyan shah";
            age =19;
            
        }
        void  show()
        {
            cout<<name;
            cout<<age;
        }
        
};
int main()
{
    student s;
    cout<<s.name<<endl;
    cout<<s.age<<endl;
    s.show(); 
    return 0; 
}
*/ 

// parameterized constructor : 
/*
#include <iostream>
using namespace std; 
class student 
{
    public : 
        string name; 
        int age; 
        student(string n , int a )
        {
                name=n; 
                age=a;
        }
};
int main()
{
    student s("dhyan shah",19);
    student s1("vatsal",20);

    cout<<s.name<<endl;
    cout<<s.age<<endl;

    cout<<s1.name<<endl;
    cout<<s1.age<<endl;
    return 0; 
}

*/ 
/*
public : access within class and  outside class. 

class student
public :
    string name ="dhyan shah";
    int age =19;
    void  show()
         cout<<name; 
         cout<<age;
int main()
    student s; 
    cout<<s.name<<endl;
    cout<<s.age<<endl;
    s.show();
    s.name ="vatsal"; 
    s.age=20; 
    s.show();  
    return 0 ; 

private : access within class only.

class student 
private :
    string name ="dhyan shah";
    int age =19;
public :
    void  show()
    {
        cout<<name;
        cout<<age;
    }
int main()
{
    student s; 
    cout<<s.name<<endl; // not poss bcz of private 
    s.show(); 
    s.name ="vatsal";
    s.age=20;
    s.show(); // not poss bcz of private
}


*/

// array  : 
/*
#include <iostream>
using namespace std; 
class student 
{
    public :
        int  rollno ;
        string name; 
        int age; 
    student()
    {
        cout<<"enter the  rollno : "<<endl;
        cin>>rollno;
        cout<<"enter the  name : "<<endl;
        cin>>name;
        cout<<"enter the  age: "<<endl;
        cin>>age;
       
    }
    void  show()
    {
        cout<<"rollno   : "<<rollno<<endl;
        cout<<"name     : "<<name<<endl;
        cout<<"age      : "<<age<<endl;
    }
};
int main()
{
    cout<<"students  information"<<endl;
    student s[3];  // 3 student information  
    
    for(int  i=0; i<3; i++)
    {
        cout<<"\nstudent"<<i+1<<" information"<<endl;
        s[i].show(); 
    }
    return 0; 
}
*/ 

// parameterized constructor : 
/*
#include <iostream>
using namespace std;
class student 
{
    public :
        string name;
        int age,rollno; 
    
    student(string n , int a,int  r)
    {
        name=n; 
        age =a; 
        rollno=r;
    }
    void  display()
    {
        cout<<"rollno   : "<<rollno<<endl;
        cout<<"name     : "<<name<<endl;
        cout<<"age      : "<<age<<endl;
    }
};
int main()
{
    student s[3]={
        student("dhyan",19,23), 
        student("vatsal",20,24),
        student("dhwani",21,25)
    };
    cout<<"students  information"<<endl;
    for(int  i=0; i<3; i++)
    {
        s[i].display(); 
    }
    return 0; 
}
*/

// using  function : 
/*
#include <iostream>
using namespace std;
class student 
{
    public : 
        int rollno; 
        string name;
        int age; 
    student()
    {
        rollno =0; 
        name=""; 
        age =0; 
    }
    void  input()
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
    student s[3];

    cout<<"enter the  student information"<<endl;
    for(int i=0; i<3; i++)
    {
        s[i].input(); 
    }
    cout<<"students  information"<<endl;
    for(int i=0; i<3; i++)
    {
        s[i].display(); 
    }
    return 0;
}
*/ 

// using private  : 

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