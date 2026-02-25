/*
employees managment  system  : inheritance + encapsulation  +abstraction  : 

*/

#include <iostream>
#include<vector>
using namespace std;

class employees 
{
    protected : 
        int emp_id; 
        string  name; 
        int  salary; 
    public : 
        employees(int id,string n ,int s)
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
class manager : public employees // single  inheritance  
{
    private : 
        string department; 
    public : 
        manager(int id,string n, int s,string d):employees(id,n,s)
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
class developer :public employees // hirearchy 
{
    protected : 
        string  language;
    public : 
        developer(int  id, string n, int s, string l) :employees(id,n,s)
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

