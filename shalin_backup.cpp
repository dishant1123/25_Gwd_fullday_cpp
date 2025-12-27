/*
cpp ==> object oriented languages. 

print ==> cout   ===> iostream 
scan ==> cin 


*/
/*
#include <iostream>
using namespace std;   //  std ==> standard lib ==> cin  cout string vector  ==> namespace ==> container 
int main()
{
    cout<<"my name is shalin"<<endl;// left shift
    cout<<"live ina ahm.";// left shift

    return 0;     
}
// professional : 
#include <iostream>
int main()
{
    std::cout<<"my name is shalin";
    return 0; 
}
*/

// data type  : 
/*
1. int  : pos neg 
2. float : decimal 
3. char / string  : name , character 
4. long int : exceeding limit  of int  ex: int a=6790789 
5. double : decimal  ex:123456.77990 
6. bool : true false 

=============
rules : 

1. variable start  ==> special character,number 
    ex : int a@ =90 , int @a =78 , int 12a=90 , int a@a=78 
2. except : underscore(_) 
    ex: int __=90 , int  a_=89 , int a_a=78 
============= 

operators : 

1.airthematic operator + - * / %
2.relational operator ==,!=,<,>,<=,>=
    ex : float a =90.0  float b=90  
3. logical : & || 
4. assignment operator  += -= *= /= %=
5. increment operator ++ -- 
6. bitwise operator & | ^ << >>
7. ternary operator ? :

*/
/*
#include <iostream>
using namespace std;
int main()
{
    int a=90; 
    float b=90.00;
    // char c='a'; 
    // long int d=12334556; 
    // double e=1234467.8989090; 
    
    // cout<<"enter the value of a :"<<endl;
    // cin>>a;  // right swift 
    // cout<<"a value is  :"<<a<<endl; 
    cout<<"b value is  :"<<(a==b)<<endl; 
    // cout<<"c value is  :"<<c<<endl; 
    // cout<<"d value is  :"<<d<<endl; 
    // cout<<"e value is  :"<<e<<endl; 
    // return 0;
}
*/ 
// class object : 

/*
class type  : 
1. public : any access to class members
2. private : within class only
3. protected : inherit class only
*/

#include <iostream>
using namespace std;
class student
{
    public : 
        //string name= "shalin"; 
        //int rollno=1;
        string name; 
        int rollno;
    void input()
    {
        cout<<"enter the  name : ";
        cin>>name;
        cout<<"enter the  rollno : ";
        cin>>rollno;
    }
        void show()
    {
        cout<<"name is  :"<<name<<endl;
        cout<<"rollno is  :"<<rollno<<endl;
    }
};
int main()
{
    student s1; 
    // cout<<"name is  :"<<s1.name<<endl;
    // cout<<"rollno is  :"<<s1.rollno<<endl;
    // s1.show();  // func 

    // s1.name="ram"; 
    // s1.rollno=2;
    s1.input();
    s1.show();
    
    s1.name="sita";
    s1.rollno=3;
    s1.show();
    return 0; 
}