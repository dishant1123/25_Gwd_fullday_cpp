/*
file handling : 

1. R+ : read +write  
2. W+ : read +write 
3. A+ : write +append 


*/

#include <iostream>
#include <fstream>
using namespace std;
struct employess
{
    int id; 
    string name;
    int salary; 
};
void addemp()
{
    employess emp; 
    ofstream fout("employees.txt",ios::app); 

    cout<<"enter id:";
    cin>>emp.id;
    cout<<"enter the  name  : "; 
    cin.ignore(); 
    getline(cin,emp.name);
    cout<<"enter salary : ";
    cin>>emp.salary;

    fout<<emp.id<<" "<<emp.name<<" "<<emp.salary<<endl;
    fout.close();
    cout<<"employee added"<<endl;

}

void display()
{
    employess emp; 
    ifstream fin("employees.txt");

    cout<<"\n\n\t\t\t\t\tEmployee list\n\n";

    while(fin>>emp.id>>emp.name>>emp.salary)
    {
        cout<<"id :"<<emp.id<<endl;
        cout<<"name :"<<emp.name<<endl;
        cout<<"salary :"<<emp.salary<<endl;

    }
    fin.close();
}
void update()
{
    employess emp; 
    int id; 
    ifstream fin("employees.txt");
    ofstream fout("temp.txt");

    cout<<"enter the id you want to update  : "; 
    cin>>id; 

    while(fin>>emp.id >>emp.name>>emp.salary)
    {
        if(emp.id ==id)
        {
            cout<<"enter the  new salary  : "; 
            cin>>emp.salary;
        }
        fout<<emp.id<<" "<<emp.name<<" "<<emp.salary<<endl;
    }
    fin.close();
    fout.close();
    remove("employees.txt");
    rename("temp.txt","employees.txt");
    cout<<"employee updated"<<endl;
}
void delete_emp()
{
    employess emp; 
    int id; 
    ifstream fin("employees.txt");
    ofstream fout("temp.txt");

    cout<<"enter the id you want to delete  : "; 
    cin>>id; 

    while(fin>>emp.id >>emp.name>>emp.salary)
    {
        if(emp.id !=id)
        {
            fout<<emp.id<<" "<<emp.name<<" "<<emp.salary<<endl;
        }
    }
    fin.close();
    fout.close();
    remove("employees.txt");
    rename("temp.txt","employees.txt");
    cout<<"employee delete"<<endl;
}
int main()
{
    int choice; 
    do{
        cout<<"\n\t\t\t\t\tEmployee managment system\n\n";
        cout<<"1.add employee\n";
        cout<<"2.display employee list\n";
        cout<<"3.update employee\n";
        cout<<"4.delete employee\n";
        cout<<"5.exit\n";
        cout<<"enter choice : ";
        cin>>choice;
        switch(choice)
        {
            case 1: addemp();break; 
            case 2: display();break;
            case 3: update();break;
            case 4: delete_emp();break;
            case 5: cout<<"bye...";break;
            default : cout<<"enter correct choise"<<endl;
        }
    }while(choice!=5);
    return 0; 
}