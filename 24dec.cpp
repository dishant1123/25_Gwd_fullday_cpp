/*
class in array  : 

*/
/*
#include<iostream>
using namespace std;
class student 
{
    public : 
        string  name[3]; 
        int age[3];
    void input()
    {
        for(int i =0; i<3;i++)
        {
            cin>>name[i];
            cin>>age[i]; 
        }
    } 
    void display()
    {
        for(int i=0;i<3;i++)
        {
            cout<<name[i]<<" "<<age[i]<<endl;
        }
    }
};
int main()
{
    student s1; 
    s1.input(); 
    s1.display(); 
    return 0; 
}
*/ 

// single inheritance

/*

class a : 
class b : public a 
*/

// multi level  inheritance

/*
class a : 
class b : public a 
class c : public b  

obje  ==> c   ==> a and  b 
obj  == >b  ==>a 
*/

/*
#include<iostream>
using namespace std;
class school 
{
    public : 
        string name; 
    school(string n)
    {   
        name =n; 
    }
};
class principal : public school
{
    public : 
        string p_name; 
        int age; 
    principal(string n, string p , int a):school(n) // base  class constructor  called 
    {
        p_name=p; 
        age=a;
    }
    void display()
    {
        cout<<"school name  : "<<name<<endl;
        cout<<"principal name : "<<p_name<<endl;
        cout<<"principal age : "<<age<<endl;
    }
}; 

class student : public principal 
{
    public : 
        int  rollno; 
        string s_name; 
        int s_age; 
    student(string s_n,int r,int s_a,string p_n,int p_a,string n):principal(n,p_n,p_a)
    {
        rollno=r;
        s_name=s_n;
        s_age=s_a;
    }
    void  show()
    {
        display();
        cout<<"rollno : "<<rollno<<endl;
        cout<<"student name : "<<s_name<<endl;
        cout<<"student age : "<<s_age<<endl;
    
    }
};
int main()
{
    student s1("purva",12,21,"dr.purvi",40,"Hiramani");
    //s1.show(); 
    principal p1("hiramani","dr.purvi",40);
    p1.display(); 
    return 0; 
}
*/ 

// this  ==> operator  ==< cuurent  object refers . 
/*
#include<iostream>
using namespace std;
class student 
{
    public :
        int age; 
        string name;

    student(string name , int age)
    {
        this->name =name; 
        this->age =age; 
    }
};
int main()
{
    student s1("purva",21);
    cout<<s1.name<<endl;
    cout<<s1.age<<endl;
    return 0; 
}
*/ 
/*
#include <iostream>
using namespace std;
class Test {
public:
    int x;
    Test() {
        x = 0;
    }
};
class Derived_Test : public Test {
public:
    int y;
    Derived_Test() {
        y = 1;
    }
};
int main() {
    Derived_Test b;
    cout << b.x << " " << b.y;
    return 0;
}
*/ 
/*
option  : 

a. 0 1 
b. 1 0 
c. Error because class B inherits A but variable x 
isn’t inherited. 
d. Error because when object is created, 
argument must be passed like 
Derived_Test(1)
*/
/*
#include <iostream>
using namespace std;
class A {
public:
    int x;
    A(int x) {
        this->x = x;
    }
    void count(int x) {   // not used
        this->x = this->x + 1;
    }
};
class B : public A {
public:
    int y;
    B(int y = 0) : A(3) {   // calling base class constructor
        this->y = y;
    }
    void count() {         // function hiding (like Python)
        y = y + 1;
    }
};
int main() {
    B obj;
    obj.count();
    cout << obj.x << " " << obj.y;
    return 0;
}
    */ 
/*
option  : 
a. 3 0 
b. 3 1 
c. 0 1 
d. 1 0 

*/
/*
#include <iostream>
#include <string>
using namespace std;
class People {
public:
    string name;
    // Constructor
    People(string name) {
        this->name = name;
    }
    // Member function
    void namePrint() {
        cout << name << endl;
    }
};
int main() {
    People person1("Sally");
    People person2("Louise");
    person1.namePrint();   
    return 0;
}
*/ 
#include <iostream>
using namespace std;
class Demo {
public:
    int x;
    Demo() {
        x = 1;
    }
    void change() {
        x = 10;
    }
};
class Demo_derived : public Demo {
public:
    int change() {         
        x = x + 1;
        return x;
    }
};
int main() {
    Demo_derived obj;
    cout << obj.change();
    return 0;
}
// h 11  o 11    v error   d 2    n 2   v2   h 11   p 2    s  11  sh error 