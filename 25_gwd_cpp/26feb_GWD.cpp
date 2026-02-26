/*
friend  function  :  friend  function  is a function that  not a member of class.
but it is  allowed to access private and protected members  of class. 

it is  declared using keyword friend inside the class .

why : 
private member  :cannot access outside the class 
protected member : cannot access outside the class 

syntax : 
class name 
{
    friend return_type function_name(parameter);
}
*/


// ex :1 
/*
#include <iostream>
using namespace std;
class student 
{
    private : 
        int marks; 

    public : 
        student(int marks)
        {
            this->marks=marks;
        }
    friend void showmarks(student s); 
};
void showmarks(student s)
{
    cout<<"marks : "<<s.marks<<endl; 
}
int main()
{
    student s1(99); 
    showmarks(s1); 
    return 0; 
}
*/ 
// ex :2 
/*
#include <iostream>
using namespace std;
class number 
{
    private : 
        int num;
    public : 
        number (int n)
        {
            num =n; 
        }
    friend int add(number n1,number n2); 
};
int add(number n1,number n2)
{
    return n1.num + n2.num; 
}
int main()
{
    number a(10),b(20); 
    cout<<"sum : "<<add(a,b)<<endl;
    return 0; 
}
*/
/*
using friend function  : two values swap  
*/

// ex :3  friend function  using  two class 

#include <iostream>
using namespace std;

class b; 

class a 
{
    private :
        int x ; 
    public : 
        a(int x)
        {
            this->x =x;
        }
        friend void add(a obj1, b obj2);
};
class b 
{
    private :
        int y; 
    public :
        b(int y)
        {
            this->y =y;
        }
    friend void add(a obj1, b obj2);
}; 
void add(a obj1 ,b obj2)
{
        cout<<"add :"<<obj1.x +obj2.y;
}

int main()
{
    a obj1(50); 
    b obj2(100); 
    add(obj1,obj2);
    return 0; 
}
/*
swap : 
*/