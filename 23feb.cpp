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