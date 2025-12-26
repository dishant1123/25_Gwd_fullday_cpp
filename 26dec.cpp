/*
multiple inheritance

class a 
class b : 
class c : public a ,public b
*/
/*
#include <iostream>
using namespace std; 
class father 
{
    private :
        string name; 
    public :
        father(string name )
        {
            this->name =name; 
        }
    void display()
    {
        cout<<"father name is "<<name<<endl;
    }
};
class mother 
{
    private :
        string m_name;
        int m_age; 
    public :
        mother(string m_name,int m_age)
        {
            this->m_name =m_name;
            this->m_age =m_age;
        }
    void show()
    {
        cout<<"mother name is : "<<m_name<<" and  mother age is : "<<m_age<<endl;
    }
};
class child : public father, public mother
{
    public :
        string c_name; 
        child(string c_name,string m_name,int m_age,string name):father(name),mother(m_name,m_age)
        {
            this->c_name =c_name;
        }
        void c_show()
        {
            cout<<"child name is  :"<<c_name<<endl;
            father::display();
            mother::show();
        }
};
int main()
{
    child c("om","savita",45,"yogesh"); 
    c.c_show(); 
    return 0;
}
*/ 

// protected : 

#include <iostream>
using namespace std; 
class father 
{
    protected:
        string name; 
    public :
        father(string name )
        {
            this->name =name; 
        }
    
};
class mother 
{
    protected :
        string m_name;
        int m_age; 
    public :
        mother(string m_name,int m_age)
        {
            this->m_name =m_name;
            this->m_age =m_age;
        }
    
};
class child : public father, public mother
{
    public :
        string c_name; 
        child(string c_name,string m_name,int m_age,string name):father(name),mother(m_name,m_age)
        {
            this->c_name =c_name;
        }
        void c_show()
        {
            cout<<"child name is  :"<<c_name<<endl;
            cout<<"father name is "<<name<<endl;
            cout<<"mother name is : "<<m_name<<" and  mother age is : "<<m_age<<endl;
        }
};
int main()
{
    child c("om","savita",45,"yogesh"); 
    c.c_show(); 
    return 0;
}