/*
template  :  is allow to generic code that works with different data type without rewriting the same function  or class .

instread of writing seprate function  of  (int  , float  double  etc) a template lets the complier generate the correct version  automatically. 

syntax : 

template <typename t>
return type function_name(t a,t b)
{
 code
}

*/
// ex : 1
/*
#include <iostream>
using namespace std;

template<typename t>
t con(t a , t b)
{
    if(a>b)
    {
        return a; 
    }
    else 
    {
        return b; 
    }
}
int main()
{
    cout<<con(10,20)<<endl;
    cout<<con(5.5,2.4)<<endl;
    cout<<con('a','b')<<endl;

    return 0 ;
}
*/
// ex :2  class template
/*
#include <iostream>
using namespace std;
template<class t>


class test 
{
    t num; 

    public : 
        test(t n)
        {
            num =n; 
        }
    void show()
    {
        cout<<"value of  number is : "<<num<<endl;
    }
};

int main()
{
    test <int> a(10); 
    test <float> b(10.78);
    test <char> c('a');
    test <double> d(102344.53344);

    a.show();
    b.show();
    c.show();
    d.show();
    return 0; 
}
*/ 

// ex :3  multiple  parameter template
/*
#include <iostream>
using namespace std;
template <class t ,class t1>

class data 
{
    t a; 
    t1 b ;

    public : 
        data(t n, t1 m)
        {
            a =n;
            b =m;
        }
        void show()
        {
            cout<<"value of  number  first is : "<<a<<endl;
            cout<<"value of  number second is : "<<b<<endl;
        }
};

int main()
{
    data <int ,float> a(12,45.67); 
    a.show(); 
    return 0; 
}
    */ 
// ex :4  swap two value using  template  : 
/*
#include <iostream>
using namespace std;
template <class t>

void swapping(t &a, t &b)
{
    t temp; 
    temp =a; 
    a =b;
    b =temp;
}
int  main()
{
    int  x =10 , y=20;
    swapping(x,y); 

    cout<<"value of x is : "<<x<<endl;
    cout<<"value of y is : "<<y<<endl;
    return 0; 
}
*/

// ex : 5  inline  function  (honey  clg topic)

/*
inline  function is  a function where the  compiler replaces the  function call with the actual function  code during the compliation  phase.

this reduce the function call overhead and  make the code faster for small functions .

*/

#include <iostream>
using namespace std;

inline int square(int x)
{
    return x*x;
}
int  main()
{
    int  num =6; 
    cout<<"value of square of  "<<num<<" is : "<<square(num)<<endl;
    return 0; 
}