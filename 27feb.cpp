/*
file handling  : 

1.R+  :read +write ==> only  exiting   
2.W+  :write + read  ==> create new file  + write  ==> exiting  overwrite
3.A+  :write +read   ==> create new file  + write  ==> exiting  append

1. seekg() == > cursor position   
2. ifstream ==> write  
3. ofstream ==> read


*/

// r+ : exiting open ==> 
/*
#include <iostream>
#include <fstream>
#include <cstdio>   // fputs , fgets
using namespace std;
int  main()
{
    fstream file("shahil.txt",ios::in | ios::out);
    file<<"R+ mode example \n"<<endl; 
    
    file.seekg(0); 
    string line; 

    while(getline(file,line))
    {
        cout<<line<<endl;
    }
    file.close(); 
    return 0; 
}
*/
// w + 
/*
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    fstream file("employees.txt",ios::in | ios::out | ios::trunc);
    file<<"purva,vidhi,om,shahil,saumya,shalin.\n"<<endl;

    file.seekg(0);
    string line; 

    while(getline(file,line))
    {
        cout<<line<<endl;
    }
    file.close(); 
    return 0;
}
*/

// a+ : 

#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    fstream file("employees.txt",ios::in | ios::out | ios::app);
    file<<"my name is  shahil\n"<<endl;
    file<<"my name is  purva\n"<<endl;

    file.seekg(0); 

    string line; 

    while(getline(file,line))
    {
        cout<<line<<endl;
    }
    file.close(); 
    return 0;
}
