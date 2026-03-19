/*
array  sort  : 

1. bubble sort
2. insertion sort
3. selection sort
*/

// ex :1 

#include<iostream>
using namespace std;
int  main()
{
    int a[100],n,i,temp;
    cout<<"enter the size  of array  : "; 
    cin>>n; 
    cout<<"enter the elements  : \n";
    for(i=0; i<n; i++)
    {
        cin>>a[i];  // 
    }
    cout<<"array  before sorting  : \n";
    for(i=0; i<n; i++)
    {
        cout<<a[i]<<" "; // a[5] = {1,5,2,7,3} 
    }

    for(i=0; i<n; i++)// i =1   1 < 5 
    {
        for(int j=i+1; j<n; j++) // j =3  3 <5 
        {
            if(a[i] < a[j]) // a[1] > a[2]   5 > 2 
            {
                temp = a[i];  //   temp=5 
                a[i] = a[j]; //    a[1] =2
                a[j] =temp;  //    a[2] =5 
            }                         // a[5] = {1,2,5,7,3}
        }
    }
    cout<<"array  after sorting  : \n";
    for(i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
    return 0; 

}