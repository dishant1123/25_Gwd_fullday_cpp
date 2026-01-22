
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

/*

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

*/ 

// constructor  :
/*
constructor  is  special member  function  which is used in class and  also  automatically called when object is created. 

it is  mainly used to  initialized data members of class . 

key  points : 

1.class name  and  constructor  name  should  be  same .
2.no return type (not even void)
3. called automatically when object is created.
4.can be overloaded. 

type  : 
1. default constructor
2. parameterized constructor
3. non parameterized constructor
4. copy constructor
5. constructor overloading
*/

// default constructor :
/*
#include <iostream>
using namespace std;
class student 
{
    public : 
        student()
        {
            cout<<"default constructor called"<<endl;
            cout<<"chahat and honey best friends"<<endl;
        }
};
int main()
{
    student s1; 
    return 0 ;
}

*/

// non parameterized constructor :
/*
#include <iostream>
using namespace std;
class student 
{
    public : 
        string name; 
        int rollno; 
    student()
        {
            name ="chahat";
            rollno =20; 

            cout<<"non parameterized constructor called"<<endl;
            cout<<"chahat and honey best friends"<<endl;
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
    cout<<"rollno : "<<s1.rollno<<endl;
    cout<<"name : "<<s1.name<<endl; // obj though print
    s1.show();  // function 
    
    cout<<"after  changes values : "<<endl;
    s1.rollno=30; 
    s1.name ="honey";

    s1.show();

    return 0 ;
}
*/

// parameterized constructor :

#include <iostream>
using namespace std;
class student 
{
    public :
        string name ; 
        int  rollno;  
        
        student(string n , int r )
        {
            name =n; 
            rollno =r;
        }
        void show()
        {
            cout<<"rollno : "<<rollno<<endl;
            cout<<"name : "<<name<<endl;
        }
};
int main()
{
    student s1("chahat" , 20);
    student s2("honey" , 30);
    cout<<"rollno : "<<s1.rollno<<endl;
    cout<<"name : "<<s1.name<<endl;
    s1.show(); 
    s2.show();
    return 0 ;
}