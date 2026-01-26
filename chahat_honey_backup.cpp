
// public  , private  , protected : 
/*
#include <iostream>
using namespace std;
class student 
{
    public : 
        int rollno; 
        string  name;
    void  input()
    {
        cout<<"enter rollno : ";
        cin>>rollno;
        cout<<"enter name : ";
        cin>>name; 
    } 
    void  show()
    {
        cout<<"rollno : "<<rollno<<endl;
        cout<<"name : "<<name<<endl;
    }
    
};
int main()
{
    student s1; 
    // cout<<"rollno : "<<s1.rollno<<endl;
    // cout<<"name : "<<s1.name<<endl;

    // s1.rollno =20 ;
    // s1.name ="chahat";

    // cout<<"rollno : "<<s1.rollno<<endl;
    // cout<<"name : "<<s1.name<<endl;

    s1.input(); 
    s1.show();
    return 0;
}
*/

// private  : 
/*
#include <iostream>
using namespace std;
class student 
{
    private : 
        int rollno=1; 
        string  name="honeeey "; 
    public : 
        void show()
        {
            cout<<"rollno : "<<rollno<<endl;
            cout<<"name : "<<name<<endl;
        }
};

int main()
{
    student s1; 
    // cout<<"rollno : "<<s1.rollno<<endl;   ==> error bcz of  private 
    s1.show(); 
    return 0; 

}
*/

// protected : 

/*

#include <iostream>
using namespace std;
class student 
{
    protected :
        int  rollno =1 ; 
        string name ="chaahaaat"; 
        
};
class teacher : public student
{
    public : 
        void show()
        {
            cout<<"rollno : "<<rollno<<endl;
            cout<<"name : "<<name<<endl;
        }
};
int main()
{
    teacher t1; 
    t1.show();
    return 0;  
}

*/ 

// constructor  :
/*
constructor  is  special member  function  which is used in class and  also  automatically called when object is created. 

it is  mainly used to  initialized data members of class . 

key  points : 

1.class name  and  constructor  name  should  be  same .
2.no return type (not even void)
3. called automatically when object is created.
4.can be overloaded. 

type  : 
1. default constructor
2. parameterized constructor
3. non parameterized constructor
4. copy constructor
5. constructor overloading
*/

// default constructor :
/*
#include <iostream>
using namespace std;
class student 
{
    public : 
        student()
        {
            cout<<"default constructor called"<<endl;
            cout<<"chahat and honey best friends"<<endl;
        }
};
int main()
{
    student s1; 
    return 0 ;
}

*/

// non parameterized constructor :
/*
#include <iostream>
using namespace std;
class student 
{
    public : 
        string name; 
        int rollno; 
    student()
        {
            name ="chahat";
            rollno =20; 

            cout<<"non parameterized constructor called"<<endl;
            cout<<"chahat and honey best friends"<<endl;
        }
        void  show()
        {
            cout<<"rollno : "<<rollno<<endl;
            cout<<"name : "<<name<<endl;
        }
};
int main()
{
    student s1;
    cout<<"rollno : "<<s1.rollno<<endl;
    cout<<"name : "<<s1.name<<endl; // obj though print
    s1.show();  // function 
    
    cout<<"after  changes values : "<<endl;
    s1.rollno=30; 
    s1.name ="honey";

    s1.show();

    return 0 ;
}
*/

// parameterized constructor :
/*

#include <iostream>
using namespace std;
class student 
{
    public :
        string name ; 
        int  rollno;  
        
        student(string n , int r )
        {
            name =n; 
            rollno =r;
        }
        void show()
        {
            cout<<"rollno : "<<rollno<<endl;
            cout<<"name : "<<name<<endl;
        }
};
int main()
{
    student s1("chahat" , 20);
    student s2("honey" , 30);
    cout<<"rollno : "<<s1.rollno<<endl;
    cout<<"name : "<<s1.name<<endl;
    s1.show(); 
    s2.show();
    return 0 ;
}
*/

// copy constructor :used to copy object into another . 
/*
#include <iostream>
using namespace std;
class student 
{
    public : 
        string name ;
        int rollno; 
    student(string n , int r )
    {
        name =n; 
        rollno =r;
    }
    student(const student &s)
    {
        name =s.name; 
        rollno =s.rollno;
    }
    void show()
    {
        cout<<"rollno : "<<rollno<<endl;
        cout<<"name : "<<name<<endl;
    }
};
int main()
{
    student s1("chahat" , 20);
    student s2(s1); 
    s2.show();
    return 0; 
}
*/

// constructor overloading :
/*
#include <iostream>
using namespace std;
class student 
{
    public : 
        string name ;
        int  rollno; 
    student()
    {
        name =""; 
        rollno =0;  
    }
    student(int r)
    {
        name ="chahat";
        rollno =r; 
    }
    student(string n , int r )
    {
        name =n;
        rollno =r;
    }
    void  show()
    {
        cout<<"rollno : "<<rollno<<endl;
        cout<<"name : "<<name<<endl;
    }
    
}; 
int main()
{
    student s1;
    student s2(20); 
    student s3("honey" , 30);

    cout<<"default  constructor called : "<<endl;
    s1.show(); 

    cout<<"non parameterized / parameterized constructor called : "<<endl;
    s2.show();

    cout<<"parameterized constructor called : "<<endl;
    s3.show();
    return 0; 
}
*/ 

// banking system :
/*
#include <iostream>
using namespace std;
class bank 
{
    private  : 
        int  pin; 
        double balance; 
    protected :
        int accno; 
    public :
        bank(int p , int a)
        {
            pin =p; 
            accno =a; 
            balance =25000; 
            cout<<"account created successfully"<<endl;
        }
        bool checkpin(int p)
        {
            return (p==pin);
        }
        void  depsit(double amt)
        {
            balance +=amt;
            cout<<"deposited : "<<amt<<endl;
        }
        void  withdraw(double amt)
        {
            if(balance -amt >=10000)
            {
                balance -=amt;
                cout<<"withdrawed : "<<amt<<endl;
            }
            else 
            {
                cout<<"min balance  require  rs. 10000"<<endl;
            }
        }
        void showbalance()
        {
            cout<<"balance : "<<balance<<endl;
        }
};
int main()
{
    int acc,pin,choice,inputpin;
    double amt; 

    cout<<"enter account no : ";
    cin>>acc;
    cout<<"enter pin : ";
    cin>>pin; 

    bank b1(pin,acc);
    cout<<"enter the  pin  to access account : ";
    cin>>inputpin;

    if(!b1.checkpin(inputpin))
    {
        cout<<"invalid pin"<<endl;
        return 0;
    }
    do
    {
        cout<<"BANK MENU"<<endl;
        cout<<"1.deposit"<<endl;
        cout<<"2.withdraw"<<endl;
        cout<<"3.show balance"<<endl;
        cout<<"4.exit"<<endl;
        cout<<"enter choice : ";
        cin>>choice;
        switch(choice)
        {
            case 1:
                cout<<"enter amount  for depsoit: ";
                cin>>amt; 
                b1.depsit(amt);
                break;
            case 2:
                cout<<"enter amount  for withdraw: ";
                cin>>amt; 
                b1.withdraw(amt);
                break;
            case 3: 
                b1.showbalance();
                break;
            case 4 :
                cout<<"aabhar ........exiting"<<endl;
                break;
            default :
                cout<<"invalid choice"<<endl;
                break;
        }

    } while (choice !=4);
    return 0;
}
*/ 
// inheritance :  to inherit  properties  and  methods  from  parent  class  to  child  class

// type of inheritance :
/*
1. single level inheritance
2. multiple  inheritance
3. multi level inheritance
4. hirarchical inheritance
5. hybrid inheritance
*/


// single level inheritance : 1 base class 1 derived class
/*
#include <iostream>
using namespace std;
class student 
{
    public : 
        string name ; 
        int rollno; 
    student(string n , int r )
    {
        name =n; 
        rollno =r;
    }
};
class teacher : public student
{
    public : 
        string  subject; 
    teacher(string n,int r , string s):student(n,r)  // base class constructor
    {
        subject=s;
    }
    void show()
    {
        cout<<"student information"<<endl;
        cout<<"rollno : "<<rollno<<endl;
        cout<<"name : "<<name<<endl;
        cout<<"subject : "<<subject<<endl;
    }
};

int main()
{
    teacher t1("chahat",20,"c++");
    t1.show();
    return 0; 
}

*/
/*
#include <iostream>
using namespace std;
class student 
{
    private: 
        string name ; 
        int rollno;
    public : 
    student(string n , int r )
    {
        name =n; 
        rollno =r;
    }
    void  show()
    {
        cout<<"student information"<<endl;
        cout<<"rollno : "<<rollno<<endl;
        cout<<"name : "<<name<<endl;
    }
};
class teacher : public student
{
    private :
        string  subject;
    public : 
        teacher(string n,int r , string s):student(n,r)  // base class constructor
    {
        subject=s;
    }
    void display()
    {
        student::show();
        cout<<"subject : "<<subject<<endl;
    }
};

int main()
{
    teacher t1("chahat",20,"c++");
    t1.display();
    return 0; 
}
*/ 

// multiple inheritance : 2 base class 1 derived class

/*
class a 
class b 

class c : public a, public b 
*/

#include <iostream>
using namespace std;
class student 
{
    private : 
        int  rollno ;
    public : 
        student(int  r)
        {
            rollno =r;
        }
    void show()
    {
        cout<<"rollno : "<<rollno<<endl;
    }
};
class sports  
{
    private :
        int score;
    public : 
        sports(int s)
        {
            score=s;
        }
    void score_show()
    {
        cout<<"score : "<<score<<endl;
    }
};

class result : public student,public sports
{
    public : 
        result(int r, int s ): student(r), sports(s)
        {
        }
    void display()
    {
        student::show();
        sports::score_show();
    }
};
int main()
{
    result r1(1,90); 
    r1.display();
    return 0;
}