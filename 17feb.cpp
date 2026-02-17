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
/*
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
*/

// ex :3   using class object : 

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class student 
{
    public : 
        string name ;
        int  marks; 
    student(string n, int  m)
    {
        name =n; 
        marks =m; 
    }

};
bool compare(student s1,student s2)
{
    return s1.marks < s2.marks;   // asc to marks 
}
int main()
{
    vector<student>v; 
    v.push_back(student("saumya",98)); 
    v.push_back(student("om",89)); 
    v.push_back(student("purva",99)); 
    v.push_back(student("sahil",91));
    v.push_back(student("vidhi",95)); 

    sort(v.begin(),v.end(),compare); 

    cout<<"sorted marks is : "<<endl;

    for(int i=0; i<v.size(); i++)
    {
        cout<<v[i].name<<" "<<v[i].marks<<endl;
    }

    return 0 ;
}


