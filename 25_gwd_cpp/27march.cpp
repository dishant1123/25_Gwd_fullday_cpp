/*
file handling  : 

1. read  : exiting  file 
2. write : new  create  file + write  ==> exiting  open  ==> overwrite. 
3. append: new  create  file + write  ==> exiting  open  ==> last add.  

#include<fstream>  
ofstream :  write  file 
ifstream :  read  file
*/

// ex : 1  write  file  :
/*
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
       ofstream fout("honey.txt");  // open file  ==> write  
       fout<<"my name is  honey."<<endl;
       fout<<"my age is  19."<<endl;
       fout<<"big fan of  virat kohli."<<endl;

       fout.close();
       return 0 ;
}
*/ 
// ex :2 read file  : 

/*
#include <iostream>
#include <fstream>
using namespace std;
int  main()
{
    ifstream fin("honey.txt");  // open file  ==> read
    string line; 

    while(getline(fin,line))
    {
        cout<<line<<endl;
    }
    fin.close();
    return 0; 

}
*/

// ex :3 append file  :

#include <iostream>
#include <fstream>
using namespace std;
int  main()
{
    ofstream fout("honey.txt", ios::app);  // open file  ==> append
    fout<<"favoutite  book is  :harry potter"<<endl;
    fout<<"dream to meet virat kohli"<<endl;
    fout.close(); 
    return 0 ; 
}

/*
task  :1 string  ==> vowel  consonant separate.  vowel.txt  consonant.txt
*/