/*
 pointer using in  oop  : 
*/

// ex :1 
/*
#include <iostream>
using namespace std;
class student 
{
    public : 
        int  rollno; 
        string  name ; 
    
    student(int r, string n)
    {
        rollno =r;
        name  =n; 
    }
    void show()
    {
        cout<<"rollno :"<<rollno<<endl;
        cout<<"name :"<<name<<endl;
    }
};
int main()
{
    student *s = new student(101,"rahul");
    s->show();
    delete s;   // malloc  : free() 
    return 0; 

}
*/

// ex :2 using  pointer  menu driven  : 

#include <iostream>
using namespace std;
class student 
{
    private : 
        int rollno ;
        string name; 
        int  age; 
    public : 
        void set_data(int r, string n, int a)
        {
            rollno =r;
            name =n;
            age =a;
        }
        void display()
        {
            cout<<"rollno :"<<rollno<<endl;
            cout<<"name :"<<name<<endl;
            cout<<"age :"<<age<<endl;
        }
        int  getrollno()
        {
            return rollno;
        }

};

int main()
{
    int  n; 
    cout<<"enter the  number  of student : "<<endl;
    cin>>n; 

    student *s = new student[n]; 

    int  choice ; 
    int  count =0 ; 
    do{
        cout<<"MENU"<<endl;
        cout<<"1.add student"<<endl;
        cout<<"2.display student"<<endl;
        cout<<"3.search student"<<endl;
        cout<<"4.exit"<<endl;
        cout<<"enter your choice :"<<endl;
        cin>>choice;
        switch(choice)
        {
            case 1:
                if(count<n)
                {
                    int r; 
                    string  n; 
                    int a; 

                    cout<<"enter rollno :"<<endl;
                    cin>>r;
                    cout<<"enter name :"<<endl;
                    cin>>n;
                    cout<<"enter age :"<<endl;
                    cin>>a;

                    s[count].set_data(r,n,a); 
                    count++; 
                    cout<<"student added"<<endl;
                }
                else 
                {
                    cout<<"student  storage  is  full"<<endl;
                }
                break;
                case 2: 
                {
                    if (count ==0)
                    {
                        cout<<"no student  data  to  display"<<endl;
                    }
                    else 
                    {
                        for(int i=0; i<count; i++)
                        {
                            s[i].display();
                        }
                    }
                }
                break;
                case 3 :
                {
                    if (count ==0)
                    {
                        cout<<"no student  data  to  display"<<endl;
                    }
                    else 
                    {
                        int  s_rollno; 
                        cout<<"enter rollno :"<<endl;
                        cin>>s_rollno;
                        bool found =false;
                        for(int i=0; i<count; i++)
                        {
                            if(s[i].getrollno() ==s_rollno)
                            {
                                s[i].display();
                                found =true;
                                break;
                            }
                        }
                        if(!found)
                        {
                            cout<<"student  not  found"<<endl;
                        }
                    }
                }
                break;
                case 4 :
                {
                    cout<<"byeeee byeee"<<endl ; 
                    break;
                }
                default :
                {
                    cout<<"invalid choice"<<endl;
                    break;
                }
        }
    }while(choice !=4);
    return 0; 
}