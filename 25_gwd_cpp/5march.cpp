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
/*
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
*/ 

// ex :4 pop_back () ==> remove the last element from the vector

/*
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>y ={1,2,3,4,5};

    cout<<"vector size  before pop_back() : "<<y.size()<<"\n";

    y.pop_back(); 
    y.pop_back();
    cout<<"vector size  after pop_back() : "<<y.size()<<"\n";

    for(int i=0; i<y.size(); i++)
    {
        cout<<y[i]<<" ";
    }
    return 0; 
}

*/ 

// task :1 
/*
int  a[5] = {1,4,2,6,8}
sort asc to desc ==> {1,2,4,6,8}


*/

// sort  using  vector  : 

// ex :5 

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<int>y ={1,20,4,6,8};

    // sort(y.begin(), y.end());
    sort(y.begin(), y.end(),greater<int>());

    for(int i=0; i<y.size(); i++)
    {
        cout<<y[i]<<" ";
    }
    return 0; 
}
