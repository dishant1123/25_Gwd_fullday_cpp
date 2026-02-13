/*
structure with  pointer  : 

*/ 

// ex :1 
/*
#include<iostream>
using namespace std;
struct student 
{
    string  name ; 
    int age; 
};
int  main()
{
    student s1={"saumya",20}; 
    student s2={"purva",21};

    student *p =&s1; 
    p=&s2; 
    // student *p =&s2; 
    cout<<"name is  : "<<p->name<<endl; // s1.rollno ,s1.name 
    cout<<"age is  : "<<p->age<<endl;
    
    // cout<<"another student info : "<<endl;
    // cout<<"name is  : "<<p->name<<endl; // s1.rollno ,s1.name 
    // cout<<"age is  : "<<p->age<<endl;
    
    return 0; 
} 
*/
/*
int  a=10; 
int *p =&a; 
*/

// ex :2   structure array  with  pointer 
/*
#include<iostream>
using namespace std;
struct student 
{
    int  rollno;
    string name; 

}; 
int main()
{
    student s[3]; 
    student *p=s;

    cout<<"enter the  rollno and name  : "<<endl;
    for(int  i=0; i<3; i++)
    {
        cin>>(p+i)->rollno;    //cin>>s[i].rollno; 
        cin>>(p+i)->name;      //cin>>s[i].name;
    }
    cout<<"information of  students : "<<endl;

    for(int i=0; i<3; i++)
    {
        cout<<"rollno is  : "<<(p+i)->rollno<<endl;
        cout<<"name is  : "<<(p+i)->name<<endl;
    }
    return 0;
}
/*

int  a[5]; 
int  *p =a;

for(int i=0; i<5; i++)
{
    cin>>(p+i);
}
*/


// vector  : 

/*
use  ==> #include<vector>
vector  : vector is  resizable  array that can grow  or shrink in size during run time. 

array  ==> fixed size 
vector ==>dymanic size (automatically memory management)

use : 
1. dymanic size (no need to define  size in advance)
2. easy insert and delete element 
3.built in useful functions 
4. safer than raw array 

syntax : 

vector<data_type>vector_name; 

ex : vector<int>y;

function  : 

1.push_back  : add element at end 
2.pop_back  : remove  the  element at end
3.size() : return the size of elements 
4.front() :first element 
5.back() : last element
6. clear() : remove all elements
*/

// ex :1 

#include<iostream>
#include<vector>
using  namespace std; 
int main()
{
    vector<int>v; 

    v.push_back(10);
    v.push_back(20);
    v.push_back(30);

    cout<<"vector  elements is : "<<endl; 

    for(int i=0; i<v.size(); i++)
    {
        cout<<v[i]<<endl;
    }
    return 0; 

}
