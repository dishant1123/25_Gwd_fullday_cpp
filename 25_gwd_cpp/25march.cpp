/*
structure  : multiple  data type  store  . 

struct student 
{
    int rollno;
    char name[20];
}

*/

// ex :1 : 

#include <iostream>
using namespace std;

struct student 
{
    int rollno; 
    string  name; 
    int age; 
}s[3];

int   main()
{
    int i; 
    for(i=0; i<3; i++)
    {
        cout<<"enter rollno : "<<endl;
        cin>>s[i].rollno; 
        cout<<"enter name : "<<endl;
        cin>>s[i].name;
        cout<<"enter age : "<<endl;
        cin>>s[i].age;
    }
    cout<<"rollno\tname\tage"<<endl;
    for(i=0; i<3; i++)
    {
        cout<<s[i].rollno<<"\t"<<s[i].name<<"\t"<<s[i].age<<endl;
    }
    return 0 ; 
}

// ex : 2 age  > 18  name print  
