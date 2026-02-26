/*
employees managment  system  : inheritance + encapsulation  +abstraction  : 

*/
#include <iostream>
#include<vector>
using namespace std;

class Employees
{
    protected : 
        int emp_id; 
        string  name; 
        int  salary; 
    public : 
        Employees(int id,string n ,int s)
        {
            emp_id=id; 
            name=n;
            salary=s;
        }
        int get_empid()  // encapsulation 
        {
            return emp_id;
        }
        void set_name(string n) // encapsulation  
        {
            name=n;
        }
        void set_salary(int s)
        {
            salary=s;
        }
        virtual void display()=0;   //abtraction   
};
class manager : public Employees // single  inheritance  
{
    private : 
        string department; 
    public : 
        manager(int id,string n, int s,string d):Employees(id,n,s)
        {
            department=d;
        }
    void display()  
    {
        cout<<"\n\n\t\t\t\t\tManager details\n\n";
        cout<<"id :"<<emp_id<<endl; // get_empid() ; 
        cout<<"name :"<<name<<endl;
        cout<<"salary :"<<salary<<endl;
        cout<<"department :"<<department<<endl;
    }
};
class developer :public Employees // hirearchy 
{
    protected : 
        string  language;
    public : 
        developer(int  id, string n, int s, string l) :Employees(id,n,s)
        {
            language=l;
        }
    void display()
    {
        cout<<"\n\n\t\t\t\t\tDeveloper details\n\n";
        cout<<"id :"<<emp_id<<endl;
        cout<<"name :"<<name<<endl;
        cout<<"salary :"<<salary<<endl;
        cout<<"language :"<<language<<endl;
    }
};

class senior_developer : public developer  // multi level 
{
    private  : 
        int  experience;
    public : 
        senior_developer(int id,string n, int s, string l ,  int  e) :developer(id,n,s,l)
        {
            experience=e;
        }
    void display()
    {
        cout<<"\n\n\t\t\t\t\tSenior developer details\n\n";
        cout<<"id :"<<emp_id<<endl;
        cout<<"name :"<<name<<endl;
        cout<<"salary :"<<salary<<endl;
        cout<<"language :"<<language<<endl;
        cout<<"experience :"<<experience<<endl;
    }
};
class bonus 
{
    protected : 
        int bonus_amt; 
    public :
        bonus(int b)
        {
            bonus_amt=b;
        }

};
class tech_lead :public developer, public bonus 
{
    public : 
        tech_lead(int id,string n,int s,string l, int b) :developer(id,n,s,l),bonus(b)
        {
        }
    void display()
    {
        cout<<"\n\n\t\t\t\t\tTech lead details\n\n";
        cout<<"id :"<<emp_id<<endl;
        cout<<"name :"<<name<<endl;
        cout<<"salary :"<<salary<<endl;
        cout<<"language :"<<language<<endl;
        cout<<"bonus :"<<bonus_amt<<endl;
    }
};
class hybridemp :public senior_developer,public bonus 
{
    public : 
        hybridemp(int id,string n,int s,string l,int b,int e) :senior_developer(id,n,s,l,e),bonus(b)
        {
        }
    void display()
    {
        cout<<"\n\n\t\t\t\t\tHybrid emp details\n\n";
        cout<<"id :"<<emp_id<<endl;
        cout<<"name :"<<name<<endl;
        cout<<"salary :"<<salary<<endl;
        cout<<"language :"<<language<<endl;
        cout<<"bonus :"<<bonus_amt<<endl;
    }

};

vector<Employees*>employees ; 

void add_emp()
{
    int type, id,exp,salary,bonus;
    string name,dept,lang; 
    cout<<"\n1.manager\n2.developer\n3.senior developer\n4.tech lead\n5.hybrid emp\n";
    cin>>type; 

    cout<<"\nEnter id :";
    cin>>id;
    cout<<"\nEnter name :";
    cin>>name;
    cout<<"\nEnter salary :";
    cin>>salary;

    if(type==1)
    {
            cout<<"\nEnter department :";
            cin>>dept;
            employees.push_back(new manager(id,name,salary,dept)); 

    }
    else if(type==2)
    {
        cout<<"\nEnter language :";
        cin>>lang;
        employees.push_back(new developer(id,name,salary,lang));
    }
    else if(type==3)
    {
        cout<<"\nEnter experience :";
        cin>>exp;
        cout<<"\nEnter language :";
        cin>>lang; 
        employees.push_back(new senior_developer(id,name,salary,lang,exp));
    }
}
void display_all()
{
    if(employees.empty())
    {
        cout<<"no record found";
        return; 
    }
    for(int i=0; i<employees.size(); i++)
    {
        employees[i]->display(); 
    }
}
void delete_emp() // pop  ==> last add delete  ==> id ==>match ==>delete 
{
    if(employees.empty())
    {
        cout<<"no record found";
        return; 
    }
    delete employees.back(); // free memory first
    employees.pop_back(); // delete last 
    cout<<"\n\n\t\t\t\t\tEmployee deleted\n\n";
}
int main()
{
    int choice; 
    while(true)
    {
        cout<<"employees managment system\n";
        cout<<"1.addemp"<<endl;
        cout<<"2.display"<<endl;
        cout<<"3.delete"<<endl;
        cout<<"4.exit"<<endl;
        cin>>choice;
        switch(choice)
        {
            case 1:
                add_emp();
                break;
            case 2: 
                display_all();
                break;
            case 3 :
                delete_emp();
            case 4:
                return 0; 
            default:
                cout<<"\n\n\t\t\t\t\tInvalid choice\n\n";
                break;
        }
    }
}

/*
menu  : 
1.add emp 
2.display emp list
3. update 
4. delete 
5. exit
*/
/*
multi ple                       multi inheritance       hirechy 

class a                         class a                  class a 
class b                         class b : public a       class b : public a
class c :public a,public b      class c : public b       class c : public a  
*/

