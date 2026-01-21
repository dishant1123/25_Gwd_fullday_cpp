/*
encapsulation  : 
class vehicle  : 
    private  : 
        string model  
        int  year 

*/

// friend function  : 

/*
==>one  type  of  function that can access private members of a class and  also protected members of the class. 
==> it is  not  member  of class . 
*/

// ex :1 : 
/*
# include<iostream>
using  namespace std;
class student 
{
    private : 
        int marks; 

    public : 
        student(int m)
        {
            marks =m; 
        }
    friend void show(student s);
           
};
void show(student s)
{
    cout<<"marks is  : "<<s.marks<<endl;
}
int main()
{
    student s1(90); 
    show(s1);
    return 0; 
}
*/

// ex :2 

#include<iostream>
using  namespace std;
class B; 

class A 
{
    private : 
        int  x =90 ; 
    public : 
        friend void show(A,B); 
}; 
class B 
{
    private : 
        int  y =100 ;
    public :
        friend void show(A,B);
}; 

void show(A a ,B b)
{
    cout<<"sum of  x and y is  : "<<a.x + b.y<<endl;
}
int main()
{
    A obj1; 
    B obj2;
    show(obj1,obj2);
    return 0; 
}

/*
void add(); 
void  sub(); 
int main()
{
    add(); 
    sub(); 
}
void add()
{
}
*/