/*
structure  : multiple  data type  store  . 

struct student 
{
    int rollno;
    char name[20];
}

*/

// ex :1 : 

/*
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
*/ 
// ex : 2 age  > 18  name print  

// ex :3 structure  with  function  with array : 

#include <iostream>
using namespace std;
struct student
{
    int  id; 
    string  name;
    int marks;
};

void input(student s[],int n)
{
    for(int  i=0; i<n; i++)
    {
        cout<<"enter id : "<<endl;
        cin>>s[i].id;
        cout<<"enter name : "<<endl;
        cin>>s[i].name;
        cout<<"enter age : "<<endl;
        cin>>s[i].marks;

    }
}
void display(student s[],int n)
{
    cout<<"rollno\tname\tage"<<endl;
    for(int  i=0; i<n; i++)
    {
        cout<<s[i].id<<"\t"<<s[i].name<<"\t"<<s[i].marks<<endl;
    }
}
void highestmarks(student s[],int n)
{
    float max = s[0].marks; 
    int index =0 ; 
    for(int i=1; i<n; i++)
    {
        if(s[i].marks >max) 
        {
            max=s[i].marks; 
            index =i; 
        }   
    }
    cout<<"Topper : \n"; 
    cout<<"id : "<<s[index].id<<endl;
    cout<<"name : "<<s[index].name<<endl;
    cout<<"marks : "<<s[index].marks<<endl;
}
int main()
{
    int n ; 
    cout<<"enter no of student : "<<endl;
    cin>>n;

    student s[n]; 
    input(s,n);
    display(s,n);
    highestmarks(s,n);
    return 0; 
}