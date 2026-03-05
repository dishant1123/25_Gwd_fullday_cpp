/*
vector : vector is a dymaic array provided by STL ==> standard template library
it is  similar to array but it can change its size dynamically

vector<int>v;

*/

// ex :1 
/*
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>v ={10,20,30,40,50};

    for(int i=0; i<v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    return 0; 
}
*/

// ex :2  adding element in vector using push_back
/*
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>y; 
    
    y.push_back(10);
    y.push_back(20);
    y.push_back(30);
    y.push_back(40);
    
    for(int i=0; i<y.size(); i++)
    {
        cout<<y[i]<<" ";
    }
    return 0; 
}
*/

// ex :3  adding element in vector using loop :

#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>y;

    int n,x; 
    cout<<"enter the size of array : ";
    cin>>n; 

    for(int i=0; i<n; i++)
    {
        cin>>x; 
        y.push_back(x);
    }
    cout<<"vector  element is : \n"; 
    for(int i=0; i<y.size(); i++)
    {
        cout<<y[i]<<" ";
    }
    return 0; 

}
