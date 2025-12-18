// constructor  overloading  : 
/*
#include<iostream>
using  namespace std;
class demo
{
    public :
        demo()
        {
            cout<<"default constructor called"<<endl;
        }
        demo(int a)
        {
            cout<<"parameterized constructor called"<<a<<endl;
        }
};
int main()
{
    demo d1;
    demo d2(90); 
    return 0; 
}
*/ 
// 4 pillar of  oop : 

/*
1.inheritance 
2.polymorphism
3.abstraction
4.encapsulation
*/

// inheritance : derived class access  base class member , method. 

/*
class a 
{
public :
    int a 
    string name
 void  show()
}

class b : public a 
{
    show()
}

*/

// single  inheritance :

#include<iostream>
using namespace std;
class a
{
    public : 
        int rollno=1; 
        string name="honey"; 
    void show()
    {
            cout<<"a class method\n";
    }
};
class b : public a 
{
    public :
    void  display()
    {
        cout<<"rollno is :"<<rollno<<endl;
        cout<<"name is :"<<name<<endl;
    }
};
int main()
{
    b b1; 
    b1.show();
    b1.display();
    // b1.display();
    return 0; 
} 