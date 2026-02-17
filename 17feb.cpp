/*
sort  using  vector  : 
*/

// ex :1 
/*
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int  main()
{
    vector<int>v={5,2,9,1,7};

    // sort(v.begin(),v.end(),greater<int>());

    sort(v.begin(),v.end());  // asc to desc 
    cout<<"sorted vector is : "<<endl;
    for(int i=0; i<v.size(); i++)
    {
        cout<<v[i]<<endl;
    }
    return 0; 

}

*/ 

//ex :2 

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int a[40],n; 
    cout<<"enter the number of elements : "<<endl;
    cin>>n;  

    for(int i=0; i<n; i++)
    {
        cin>>a[i]; 
    }
    // sort(a,a+n);// asc to desc  ==> sort(a,a+n)

    sort(a,a+n,greater<int>());  // desc to asc 
    
    cout<<"sorted array is : "<<endl;
    for(int i=0; i<n; i++)
    {
        cout<<a[i]<<endl;
    }
    return 0; 
}