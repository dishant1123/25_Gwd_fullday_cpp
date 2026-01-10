/*
#include <iostream>
using namespace std;
int main()
{
    // int a; 
    float b=56.785678; 
    char c='a';
    string s="hello";
    bool t = true;
    long e=123456789;
    double f=123456789.123456789;
    cout<<"hello"<<endl;  // end  of line  
    cout<<"ram"<<endl;
    cout<<"enter the a value : "<<endl;
    // cin>>a;  
    // cout<<"a value is  :"<<a<<endl; 
    cout<<"b value is  :"<<b<<endl; 
    cout<<"c value is  :"<<c<<endl; 
    cout<<"s value is  :"<<s<<endl; 
    cout<<"t value is  :"<<t<<endl; 
    cout<<"e value is  :"<<e<<endl; 
    cout<<"f value is  :"<<f<<endl; 


    return 0; 
}
*/

/*
operator : 
1. aithematic : + - * / %  
    ex : 1 % 10 =1  2 % 10=2 
2. relational : == != > < >= <=
    ex : float a=10 , float b=10.0 cout<<(a==b)
3. logic : && ,||
4. assignment : = += -= *= /= %= 
    ex : int a =a+b    ==> a+=b
5. increment /dec : ++ --
     post inc  : i++  post  dec : i--  pre inc : ++i  pre dec :--i 
     ex :int a=10 
        a++  + ++a  - --a + a-- + a++  - a--   ==>    
        10   + 12  - 11 + 11  +10  - 11 

        b=90 
        --b  + b--  + ++b  - --b + b++  + --b  ==> 
6. bitwise : & | ^ << >> 
7. ternary : ?:

*/
/*
class object : 

class : blue print of  object 
object :  instance of class
    ex : fruits     
        1. apple 2. orange 3. banana

type : 
1. public : accessible from anywhere
2. private : only accessible from inside the class
3. protected: only accessible from inside the class and derived classes 
*/
// ex:1 
/*
#include <iostream>
using namespace std;
class student // name  == > student 
{
    public : 
        int rollno=1; 
        string name ="krish"; // data memeber ==> rollno name 
};
int main()
{
    student s1;// s1 object of class student 
    cout<<"rollno is  : "<<s1.rollno<<endl;
    cout<<"name is  : "<<s1.name<<endl;

    return 0; 
}
*/
//ex:2 
/*
#include <iostream>
using namespace std;
class student // name  == > student 
{
    public : 
        int rollno=1; 
        string name ="krish"; // data memeber ==> rollno name 
    void show()
    {
        cout<<"rollno is  : "<<rollno<<endl;
        cout<<"name is  : "<<name<<endl;
    }
};
int main()
{
    student s1;// s1 object of class student 
    cout<<"rollno is  : "<<s1.rollno<<endl;
    cout<<"name is  : "<<s1.name<<endl;
    s1.show();
    return 0; 
}
*/

// ex:3 
/*
#include <iostream>
using namespace std;
class student // name  == > student 
{
    public : 
        int rollno; 
        string name ; // data memeber ==> rollno name 
};
int main()
{
    student s1;// s1 object of class student 
    cout<<"enter the  rollno : "; 
    cin>>s1.rollno; 
    cout<<"enter the  name : "; 
    cin>>s1.name; 
    
    cout<<" rollno is  : "<<s1.rollno<<endl;
    cout<<"name is  : "<<s1.name<<endl;

    return 0; 
}
*/

// ex:4 
/*
#include <iostream>
using namespace std;
class student // name  == > student 
{
    public : 
        int rollno=1; 
        string name ="krish"; // data memeber ==> rollno name 
    void show()
    {
        cout<<"rollno is  : "<<rollno<<endl;
        cout<<"name is  : "<<name<<endl;
    }
};
int main()
{
    student s1;// s1 object of class student 
    cout<<"before update  : "<<endl;
    s1.show();

    s1.rollno=102; 
    s1.name="sita"; 

    cout<<"after update  : "<<endl;
    s1.show();
    return 0; 
}
*/ 

// private : 
/*
#include <iostream>
using namespace std;
class student 
{
    private :
        int id=1; 
        string name="krish" ;
    public :
        void show()
        {
            cout<<"id is  : "<<id<<endl;
            cout<<"name is  : "<<name<<endl;
        }
};
int main()
{
    student s1; 
    // cout<<"id is  : "<<s1.id<<endl; // not accessible bcz of  private  
    // cout<<"name is  : "<<s1.name<<endl;
    s1.show(); 
    return 0;
}
*/

//
/*
 
#include <iostream>
using namespace std;
class student 
{
    private :
        int id; 
        string name; 
    public : 
        void input()
        {
            cout<<"enter the id : ";
            cin>>id;
            cout<<"enter the name : ";
            cin>>name;
        }
        void  show()
        {
            cout<<"id is  : "<<id<<endl;
            cout<<"name is  : "<<name<<endl;
        }
};

int main()
{
    student s1; 
    s1.input();
    s1.show();
    return 0;
}
*/ 

// constructor : 
/*
1. automatically called when object is created
2. used to initialize data members
3. can't return any value 

type  : 

1.default constructor :
2.parameterized constructor :
3.non parameterized constructor :
4.copy constructor :
5.constructor overloading:

rule : 
1. class name same as  constructor name. 
*/

// default constructor :
/*
#include <iostream>
using namespace std;
class student
{
    public : 
        student() // constructor 
        {
            cout<<"default constructor called"<<endl;
            cout<<"my name is  krish."<<endl;
        }
};
int main()
{
    student s1;
    return 0; 
}
*/

// non parameterized constructor :
/*

#include <iostream>
using namespace std;
class student
{
    public :
        string name="krish"; 
        int age=21;
        student() // constructor 
        {
            // name ="krish";
            // age =20;    
            cout<<"default constructor called"<<endl;
            cout<<"my name is  krish."<<endl;
        }
        void show()
        {
            cout<<"name is  : "<<name<<endl;
            cout<<"age is  : "<<age<<endl;
        }
};
int main()
{
    student s1;
    s1.show();
    cout<<"name is  : "<<s1.name<<endl;
    cout<<"age is  : "<<s1.age<<endl;
    s1.name ="sita";
    s1.age =25;
    s1.show();
    return 0; 
}
*/ 
// parameterized constructor :


#include <iostream>
using namespace std;
class student
{
    public :
        string name; 
        int age;
        student(string n , int a) // constructor 
        {
            name =n; 
            age=a;
        }
        void show()
        {
            cout<<"name is  : "<<name<<endl;
            cout<<"age is  : "<<age<<endl;
        }
};
int main()
{
    student s1("krish",21);
    student s2("ram",29);

    s1.show();
    cout<<"name is  : "<<s1.name<<endl;
    cout<<"age is  : "<<s1.age<<endl;
    s2.show();
    // s1.name ="sita";
    // s1.age =25;
    // s1.show();
    return 0; 
}