/*
constructor  use  : 
1. automatically  call   object is  created. 
2. return  void no 
3. new parameter ==> public
4. object intialized 

rules : 
1. class name = constructor name same 

types : 
1. default constructor
2. parameterized constructor
3. non parameterized constructor
4. copy constructor
5. constructor overloading 
*/

// default constructor 
/*
#include <iostream>
using namespace std;
class student 
{
    public :
        student()
        {
            cout<<"chahat is very intelligent girl."<<endl;
            cout<<"best friend name is  honey."<<endl;
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
        int  rollno; 
        string name; 
    student()
    {
            rollno =1; 
            name = "chahat";
            cout<<"chahat is very intelligent girl."<<endl;
    }
    void show()
    {
        cout<<name<<endl;
        cout<<rollno<<endl;
    }
};
int main()
{
    student s; 
    s.show();
    cout<<s.name<<endl; 
    cout<<s.rollno<<endl;
    return 0; 
}


#include <iostream>
using namespace std; 
class student 
{
    private :
        int  rollno; 
        string name;
    public :
    student()
    {
            rollno =1; 
            name = "chahat";
            cout<<"chahat is very intelligent girl."<<endl;
    }
    void show()
    {
        cout<<name<<endl;
        cout<<rollno<<endl;
    }
};
int main()
{
    student s; 
    s.show();
    // cout<<s.name<<endl; 
    // cout<<s.rollno<<endl;
    return 0; 
}
*/ 

// parameterized constructor
/*
#include <iostream>
using namespace std;
class student 
{
    public : 
        int rollno ; 
        string name; 
    student(int r, string  n)
    {
        rollno=r; 
        name=n;
    }
};
int main()
{
    student s(1,"chahat");
    student s1(2,"honey");
    cout<<s.name<<endl;
    cout<<s.rollno<<endl;

    cout<<s1.name<<endl;
    cout<<s1.rollno<<endl;
    return 0; 
}
*/ 

// copy constructor : 

#include <iostream>
using  namespace std; 
class test
{
    public :
        int  t; 
    test(int x)
    {
        t=x;
    }
    test(test &t1)
    {
        t=t1.t; 
        cout<<"copy constructor called : "<<t<<endl;
    }
}; 
int main()
{
    test t1(10);
    test t2(t1); 
    return 0; 
}
/*
public : 
    int  t 
test(int x )
{
    t=x; 
}

int mian()
{
    test t1(10);
    method / obj 
}
*/