/*
pointer  : 

1. easily  manipulation array . 
2. address store . 

*/

// ex :1 
/*
#include <iostream>
using namespace std;
int main()
{
    int a =10; 
    int *p;   // pointer declaration
    p =&a;   // pointer  intialization 
    
    // int  *p =&a ;  // pointer declaration with initialization

    cout<<"a value  is  : "<<a<<endl;
    cout<<" pointer  though  a value is  : "<<*p<<endl;
    cout<<"address of  a is  : "<<p<<endl; 
    cout<<"address of  a value is  : "<<&a<<endl;
    return 0; 
}
    */
// ex : pointer  with array : 

/*
#include <iostream>
using namespace std;
int main()
{
    int  a[5] ={1,2,3,4,5}; 
    int *p=a;  // *p =&a

    cout<<"4 th  element is  : "<< *(p +3)<<endl; 
    return 0; 
}
*/ 
// dynamic memory allocation :

/*
==>memory  allocation at runtime(not complie time) . 
==> stored in heap. 
new 
delete 

*/
/*
#include <iostream>
using namespace std;
int main()
{
    int  *p= new int; 
    *p =80; 

    cout<<"value of  p is  : "<<*p<<endl; // 80 

    delete p;
    return 0;   
}
    */

// using  array  with  dynamic  memory  allocation :
/*
#include <iostream>
using namespace std;
int main()
{
    int *a = new int[6]; 

    for(int i=0; i<6; i++)
    {
        a[i]=(i+1) *10;
    }

    cout<<"\n"; 
    for(int i=0; i<6; i++)
    {
        cout<<a[i]<<" ";
    }
    delete[] a; 
    return 0; 
}
*/

// malloc : memory allocation  
/*
#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
    int  *p = (int *) malloc(sizeof(int)); 
    
    *p =100; 
    cout<<"value of  p is  : "<<*p<<endl;
    free(p);
    return 0; 
}

*/ 

// double  pointer  : 
/*
#include <iostream>
using namespace std; 
int main()
{
    int x=10 ; 
    int *p = &x;  // p = &x 
    int **q = &p;  // q = &p 

    cout<<"x value  is  : "<<x<<endl;
    cout<<"p value  is  : "<<*p<<endl; //   x value  
    cout<<"p address is  : "<<p<<endl; // address of  x
    cout<<"q value  is  : "<<**q<<endl; // address of  p
    cout<<"q address is  : "<<q<<endl; // address of  p
    return 0; 
}
*/

// modify pointer using  function  : 

#include <iostream>
using namespace std;
void  update(int **p)
{
    **p =90; 
}
int main()
{
    int x=78; 
    int  *p = &x; 

    update(&p);
    cout<<"x value  is  : "<<x<<endl;
    return 0; 

}