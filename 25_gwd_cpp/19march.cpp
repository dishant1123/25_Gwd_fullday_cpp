/*
array  sort  : 

1. bubble sort
2. insertion sort
3. selection sort
*/

// ex :1 
/*
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
*/ 
// ex :2  selection sort : 

/*
1. finding the min element from unsorted array . 
2. swapping it with the current position. 
*/
/*
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
    for(i=0; i<n; i++) // i =1  1 <5 
    {
        int minindex =i;  //  minindex =1  
        for(int j=i+1; j<n; j++) // j=4  4 <5 
        {
            if(a[j] < a[minindex]) // a[4] < a[2]  3  < 2  
            {
                minindex = j;  //    minindex =2
            }
        }
        temp =a[i];  // temp = 5
        a[i] = a[minindex]; // a[1] =2
        a[minindex] = temp; //  a[2] =5    //a[5] = {1,2,5,7,3}
    }
    cout<<"array  after sorting  : \n";
    for(i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
    return 0; 
}
*/

// ex :3  insertion sort :

/*
insertion sort works like sorting playing cards. 
1. take one element at a time. 
2.compare with previous elements.
3.insert it at the correct position.

*/

/*
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
        cout<<a[i]<<" "; // a[5] = {5,1,2,7,3} 
    }

    for(i =1; i<n ; i++) // 2  2 <5 
    {
        int key =a[i];  // key = 2 
        int  j =i-1;   // j = 1 

        while(j >=0 && a[j] >key) // 1 >=0 && a[1] > 2     5 >2  
        {
            a[j+1] =a[j]; // a[2] =5 
            j--;   // 0 
        }
        a[j+1] =key; // a[1] = 2  // a[5] = {1,2,5,7,3} 
    }
    cout<<"array  after sorting  : \n";
    for(i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
    return 0; 
}
    */ 

// ex :4  vector   : 

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int  main()
{
    int a[100],n; 
    cout<<"enter the size  of array  : ";
    cin>>n;
    cout<<"enter the elements  : \n";
    for(int i=0; i<n; i++)
    {
        cin>>a[i];  //
    }
    cout<<"array  before sorting  : \n";
    for(int i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
    // sort(a,a+n);  // a,a+  
    sort(a,a+n,greater<int>()); 

    cout<<"array  after sorting  : \n";
    for(int i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;

}
