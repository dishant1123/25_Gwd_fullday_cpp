/*
hierarchy level  inheritance  : 

class a 
class b : public a 
class c : public a 
class d : public a 

multi ple  : 

class a 
class b:  
class c : public a ,public b

multi level : 

class a : 
class b : public a 
class c : public b
*/

#include <iostream>
using namespace std;
class vehicle 
{
    public :
        int v_no; 
        string v_type;
        vehicle(int v_no,string v_type)
        {
            this->v_no=v_no;
            this->v_type=v_type;
        }
};
class car : public vehicle 
{
    public :
        int c_no; 
        string c_model; 
    car(int  c_no,string c_model,int v_no,string v_type):vehicle(v_no,v_type)  // base class constructor
    {
        this->c_no=c_no;
        this->c_model=c_model;
    }
    void  show()
    {
        cout<<"vehicle no is : "<<v_no<<" and vehicle name is : "<<v_type<<endl;
        cout<<"car no is : "<<c_no<<" and car model is : "<<c_model<<endl;
    }
};

class truck : public vehicle
{
    public : 
        int t_no; 
        string t_model; 
    truck(int t_no,string t_model,int v_no,string v_type):vehicle(v_no,v_type)
    {
        this->t_no=t_no;
        this->t_model=t_model;
    }
    void  show()
    {
        cout<<"vehicle no is : "<<v_no<<" and vehicle name is : "<<v_type<<endl;
        cout<<"truck no is : "<<t_no<<" and truck model is : "<<t_model<<endl;
    }
};
int main()
{
    truck t1(6445,"ashok",3456,"6 wheeler");
    t1.show(); 

    car c1(8230,"punch",6445,"4 wheeler");
    c1.show();
    return 0; 
}