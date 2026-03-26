/*
pointer  : memory address store . 

*/

// ex :1 
/*
#include <iostream>
using namespace std;
int  main()
{
    int  a =10; 
    int  *p;   // pointer declaration
    p=&a;   // pointer assignment/ initialisation
    // int  *p = &a;     pointer declaration and initialisation

    cout<<"value  of a is  : "<<a<<endl;   // 10 
    cout<<"using pointer a value is  :  "<<*p<<endl;   // 10
    cout<<"address :"<<p<<endl;   // address of a
    cout<<"address :"<<&a<<endl;   // address of a
    return 0; 

}
*/

// ex : 2  double  pointer : 
/*
#include <iostream>
using namespace std;
int  main()
{
    int a=5 ; 
    int *p=&a;   // p =&a; 
    int **q = &p;  // q =&p ; 

    cout<<"value of a is : "<<a<<endl;   // 5 
    cout<<"value  of  p is  : "<<*p<<endl;   // 5
    cout<<"value  of  q is  : "<<**q<<endl;  

    cout<<"addres of  a is : "<<p<<endl;   // address of a
    cout<<"addres  : "<<q<<endl;   // address of a
    cout<<"address of : "<<&p<<endl;  
    return 0; 
}
*/ 

// ex : 3  pointer with  function  : 

/*
1. call by value  
2. call by reference
*/

//a . call by value : changes  are not reflected. 
/*
#include <iostream>
using namespace std;
void update(int x)
{
    x =x +10; 
    // cout<<"value of x : "<<x<<endl;
}
int main()
{
    int a=5; 
    update(a); 
    cout<<"value of a : "<<a<<endl;  
    return 0 ;
}
*/

// b. call by reference : changes  are reflected. (using  pointer)
/*
#include <iostream>
using namespace std;
void update(int *x)
{
    *x = *x +10;
}
int  main()
{
    int a=5; 
    update(&a); 
    cout<<"value of a : "<<a<<endl;
    return 0;
}   

#include <iostream>
using namespace std;
void update(int &x)
{
    x = x +10;
    cout<<"value of a : "<<x<<endl;
}
int  main()
{
    int a=5; 
    update(a); 
    cout<<"value of a : "<<a<<endl;
    return 0;
}   
*/ 

// ex :4  pointer with  array  : 

#include <iostream>
using namespace std;
int main()
{
    int  a[5] ={12,45,67,89,23}; 
    int  *p =a; // p =&a;  

    //cout<<"value  of  a[0] is : "<<a[0]<<endl;   // 12
    //cout<<"a[0] with  pointer  : "<<*p<<endl;   // 12

   // cout<<"value of  a[1]  using pointer is : "<<*(p+1)<<endl;   // address of a

    for(int i=0; i<5; i++)
    {
        cout<<*(p+i)<<endl; 
    }
    return 0 ; 
}

/*

task  :1  using  pointer  with array index 3 value  update. after  array print. 
scan using  loop   and  print using  loop. 

int  a[5] = {12,45,67,89,23};   

before update  : {12,45,67,89,23} 

index :3  value  :99 

after update  : {12,45,67,99,23}
*/