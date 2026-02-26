/*
friend  function  :  its  not member class.but  it can access private and protected member of class
*/
// ex :1 
/*
#include <iostream>
using namespace std;
class student 
{
    private : 
        int  marks; 

    public : 
        student(int m)
        {
            marks =m;
        }
    friend void showmarks(student s);
};
void showmarks(student s)
{
    cout<<"marks :"<<s.marks<<endl;
}
int  main()
{
    student s1(89); 
    showmarks(s1); 
    return 0; 
}
*/

// ex :2 friend  function  inheritance : 

#include <iostream>
using namespace std;
class base 
{
    private : 
        int x;
    public : 
        base(int a)
        {
            x=a; 
        }
    friend void showbase(base b); 
};

class derived : public base
{
    public : 
    derived(int a) : base(a)
    {
    }
};
void  showbase(base b)
{
    cout<<"x :"<<b.x<<endl;
}

int main()
{
    derived d1(23);
    showbase(d1);
    return 0; 
}
