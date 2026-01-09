/*
all  types inheritance : 
1. single  2. multiple  3. multi level  4. hierarchy 5 . hybrid ==> virtual function  
*/

#include<iostream>
using namespace std; 
class person   // base class 
{
    protected : 
        string name; 
    public : 
        person ()
        {
            cout<<"enter the  name  : "; 
            cin>>name; 
            cout<<"constructor of person is called"<<endl;
        }
};
class student : virtual public person  // derived class
{
    public : 
        student()
        {
            cout<<"constructor of student is called"<<endl;
        }
        void show()
        {
            cout<<"student name is  : "<<name<<endl;
        }
};
// =========== multi level inheritance ============
class collegestudent : public student 
{
    public : 
        collegestudent()
        {
            cout<<"constructor of collegestudent is called"<<endl;
        }
        void showclgstudent()
        {
            cout<<"collegestudent name is  : "<<name<<endl;
        }
};
class sports  
{
    protected :
        string  sport ; 
    public : 
        sports()
        {
            cout<<"enter the sport :";
            cin>>sport; 
            cout<<"constructor of sports is called"<<endl;
        }
};
class result :public student, public sports 
{
    public : 
        result()
        {
            cout<<"constructor of result is called"<<endl;
        }
        void showresult()
        {
            cout<<" name is  : "<<name<<endl; 
            cout<<" sport is  : "<<sport<<endl;
        }
};
class teacher :public student 
{
    public : 
        teacher()
        {
            cout<<"constructor of teacher is called"<<endl;
        }
    void showteacher()
    {
        cout<<"teacher name is  : "<<name<<endl;
    }
};
class staff : public student 
{
    public : 
        staff()
        {
            cout<<"constructor of staff is called"<<endl;
        }
    void showstaff()
    {
        cout<<"staff name is  : "<<name<<endl;
    }
};
class marks 
{
    protected : 
        int  Marks ;
    public : 
        marks()
        {
            cout<<"enter the marks : ";
            cin>>Marks;
            cout<<"constructor of marks is called"<<endl;
        }

};
class hybridstudent :public student, public marks 
{
    public : 
        hybridstudent()
        {
            cout<<"constructor of hybridstudent is called"<<endl;
        }
    void showhybridstudent()
    {
        cout<<"hybridstudent name is  : "<<name<<endl;
        cout<<"hybridstudent marks is  : "<<Marks<<endl;
    }
}; 

int main()
{
    int choice; 
    do{
        cout<<"INHERITANCE TYPES"<<endl;
        cout<<"1. single inheritance"<<endl;
        cout<<"2. multilevel inheritance"<<endl;
        cout<<"3. multiple inheritance"<<endl;
        cout<<"4. hierarchy"<<endl;
        cout<<"5. hybrid inheritance"<<endl;
        cout<<"6. exit"<<endl;
        cout<<"enter the  your choice : "; 
        cin>>choice; 

        switch(choice)
        {
            case 1:
            { 
                student s; 
                s.show(); 
                break;
            }
            case 2 : 
            {
                collegestudent c;
                c.showclgstudent(); 
                break; 
            }
            case 3: 
            {
                result r; 
                r.showresult(); 
                break;
            }
            case 4 :
            {
                teacher t; 
                t.showteacher();
                
                staff s; 
                s.showstaff();
                break;
            }
            case 5 :
            {
                hybridstudent h;
                h.showhybridstudent();
                break;
            }
            case 6 :
            {
                cout<<"exit"<<endl;
                break;
            }
            default :
            {
                cout<<"invalid  choice"<<endl;
                break;
            }
        }
    }while(choice !=6);

    return 0; 
}
