/*
string  : 

strlen(), strcpy()
*/
/*
#include<iostream>
#include<string.h>
#include<cstring>
using namespace std;
int  main()
{
    // string s ; 

    char s[20]; 
    int  result;
    cout<<"enter the string : ";
    cin.getline(s,20);
    // getline(cin,s); 
    // cin>>s; 

    // result = s.length();
    // result = strlen(s.c_str()); // c_str() is used to convert string to char array
   
    result = strlen(s);
    cout<<"length of string is : "<<result<<"\n";
    return 0; 
}
*/ 

// string  reverse : 

#include<iostream>
#include<string.h>
using namespace std;
int  main()
{
    string s; 
    cout<<"enter the string : "; 
    getline(cin,s); // my name si ram

    for(int i = s.length()-1; i>=0; i-- )
    {
        cout<<s[i];
    }
    return 0; 

}