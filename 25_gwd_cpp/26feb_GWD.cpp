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
