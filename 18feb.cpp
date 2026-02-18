/*
template  : its allows you to write generic code that works with different data types
without rewriting the same  logic. 

1. function  template
2. class template

*/

// ex :1  function  template ex : 
/*
#include <iostream>
using namespace std;
template <typename T>
void swapvalues(T &a, T &b)
{
    T temp =a ;
    a = b;
    b = temp;
}
int main()
{
    int  x=10,y=67; 
    swapvalues(x,y);
    cout<<"x ="<<x<<" "<<"y="<<y<<endl;

    double  a=10.5,b=67.8;
    swapvalues(a,b);
    cout<<"a="<<a<<" "<<"b="<<b<<endl;

    char  c='a',d='b'; 
    swapvalues(c,d);
    cout<<"c="<<c<<" "<<"d="<<d<<endl;
    return 0;
}
*/ 

// ex :2  class  template ex :
/*
#include <iostream>
using namespace std;
template <class T>

class test 
{
    T data; 

    public : 
        test(T d)
        {
            data =d;
        }

    void  show()
    {
        cout<<"data="<<data<<endl;
    }
};
int main()
{
    test<int> a(10); 
    a.show(); 

    test<double> b(10.5);
    b.show();

    test<char> c('a');
    c.show();

    return 0; 
}
*/

// ex :3 multiple parameter template ex :


#include <iostream>
using namespace std;

template <class t1, class t2>

class pair_values 
{
    t1 a; 
    t2 b; 
    public : 
        pair_values(t1 a1, t2 b1)
        {
            a=a1;
            b=b1;
        }
    void show()
    {
        cout<<"a="<<a<<" "<<"b="<<b<<endl;
    }
};

int main()
{
    pair_values<int,double> p1(10,10.5);

    pair_values<int,string> p2(11,"purva");

    p1.show();
    p2.show();
    return 0; 
}