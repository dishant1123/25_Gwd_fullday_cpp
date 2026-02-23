/*
file  handling  : file handling done with fstream  library. 

ofstream ==>write  to file  
ifstream ==>read  from file
fstream  ==? read +write to file
*/

// write to file  using  ofstream . 

/*
#include <iostream>
#include <fstream>
#include <string>
using namespace std; 
int main()
{
    ofstream fout("shahil.txt"); 
    fout<<"hello shahil"<<endl; 
    fout<<"how are you"<<endl;
    fout.close(); 
    return 0; 
}
*/ 
// read from file  using ifstream . 

/*
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ifstream fin("shahil.txt");
    string line; 

    while(getline(fin,line))
    {
        cout<<line<<endl;
    }
    fin.close();
    return 0;
}

*/ 

// append : ios::app
/*
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ofstream fout("shahil.txt",ios::app); // append mode 

    fout<<"live in ahmedabad"<<endl;
    fout<<"study in Royal."<<endl;
    fout.close();
    return 0; 
}
*/ 

// emp managment system using file handling  :

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
int main()
{
    int choice; 
    do{
        cout<<"\n\t\t\t\t\tEmployee managment system\n\n";
        cout<<"1.add employee\n";
        cout<<"2.display employee list\n";
        cout<<"3.exit\n";
        cout<<"enter choice : ";
        cin>>choice;
        switch(choice)
        {
            case 1: addemp();break; 
            case 2: display();break;
            case 3: cout<<"bye...";break;
            default : cout<<"enter correct choise"<<endl;
        }
    }while(choice!=3);
    return 0; 
}