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
/*
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
*/ 
/*
Question (C++ – Inheritance and Method Extension)

Implement an inheritance hierarcy in C++ as follows:
Create a base class named Book having the following data members:
    name – name of the book
    n – number of authors
    authors – list of authors   ==> array 
    publisher – name of the publisher
    ISBN – ISBN number of the book
    year – year of publication

The Book class should contain:
    A constructor to initialize all data members
    A member function display() to display book details

Create a derived class named TextBook which:

    Inherits from the Book class
    Has an additional data member course
The TextBook class should:
    Extend the functionality of the base class by defining its own display() method

Display all the book details along with the course name


hint  : 

class book  
    void  display()
class textbook : public book 
    void  display()
        book ::display(); 
        cout<<"course is : "<<course<<endl;
*/

#include <iostream>
#include <string>
using  namespace std;
class book 
{
    protected : 
        string name; 
        int n; 
        string authors[10];
        string publisher;
        string ISBN;
        int year; 
    public : 
        book(string name , int n , string authors[] , string publisher , string ISBN , int year) 
        {
            this->name =name; 
            this->n=n; 
            for(int i=0; i<n; i++)
            {
                this->authors[i]=authors[i];
            }
            this->publisher=publisher;
            this->ISBN=ISBN;
            this->year=year;
        }
        void  display()
        {
            cout<<"Book name :"<<name<<endl;
            cout<<"publisher :"<<publisher<<endl;
            cout<<"ISBN :"<<ISBN<<endl;
            cout<<"year :"<<year<<endl;
            cout<<"number of authors :"<<n<<endl;
            for(int i=0; i<n; i++)
            {
                cout<<"author :"<<authors[i]<<endl;
            }
            cout<<endl;
        }
};
class textbook : public book 
{
    string  course; 
    public : 
        textbook(string name , int n , string authors[] , string publisher , string ISBN , int year,string course) : book(name,n,authors,publisher,ISBN,year) // base class constructor called 
        {
            this->course=course;
        } 
        void  display()
        {
            book ::display(); 
            cout<<"course is : "<<course<<endl;
        }  
};

int main()
{
    string authors[2]={"purva","het"}; 

    textbook t1("balaguru",2,authors,"guru","bg12345",2020,"java"); 
    t1.display();
    return 0; 

}