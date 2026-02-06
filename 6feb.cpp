/*
sorting  : 
1. bubble sort
2. selection sort
3. insertion sort
*/
// bubble sort : 
/*
#include <iostream>
using namespace std;
int  main()
{
    int  a[50],i,j,temp,n;
    cout<<"enter the number of elements in the array"<<endl;
    cin>>n; 

    for(i=0; i<n; i++)
    {
        cin>>a[i]; 
    }
    cout<<"unsorted array is"<<endl;
    for(i=0; i<n; i++)
    {
        cout<<a[i]<<" ";  // a[5] = {1,5,2,4,3}
    }
    
    for(i=0; i<n; i++) // 1    1 <5 
    {
        for(j=i+1; j<n; j++) // j=2  2 <5 
        {
            if(a[i] > a[j]) // a[1] > a[2]    5  > 2
            {
                temp =a[i];  // temp = 5 
                a[i] = a[j]; // a[1] = 2 
                a[j] = temp; //   a[2] = 5 

            }    // {1,2,5,4,3}
        }
    }
    cout<<"\nsorted array is"<<endl;
    for(i=0; i<n; i++)
    {
        cout<<a[i]<<" ";  
    }
    return 0; 
}
*/

// selection  sort : 
/*
we repeatlly select the  smallest element  from unsorted array. 
and swap it with first unsorted position. 
[64,25,12,22,11]

pass :1   small : 11 
[11,25,12,22,64]

pass 2: 12 

*/
/*
#include <iostream>
using namespace std;
int  main()
{
    int  a[50],i,j,temp,n;
    cout<<"enter the number of elements in the array"<<endl;
    cin>>n; 

    for(i=0; i<n; i++)
    {
        cin>>a[i]; 
    }
    cout<<"unsorted array is"<<endl;
    for(i=0; i<n; i++)
    {
        cout<<a[i]<<" ";  // a[5] = {1,5,2,4,3}
    }

    for(i=0; i<n-1; i++) // 1   1 <3  
    {
        int minindex =i ;  // minindex = 1 
        for(j =i+1; j<n; j++) // j =4 4 <5 
        {
            if(a[j] < a[minindex]) // a[4] < a[2]   3 < 2 
            {
                minindex = j; // minindex = 2
            }

        }
        temp =a[i]; //    temp= 5
        a[i] = a[minindex]; // a[1] =2 
        a[minindex] = temp; // a[2] = 5    {1,2,5,4,3}
    }
    cout<<"\nsorted array is"<<endl;
    for(i=0; i<n; i++)
    {
        cout<<a[i]<<" ";  
    }
    return 0;

}
*/

// insertion sort :
/*
    its  works the way  you sort playing cards in your hand. 
    take one  element at a time. 
    insert in to its correct position in already sorted part of the array.
*/

#include <iostream>
using namespace std;
int  main()
{
    int  a[50],i,j,temp,n;
    cout<<"enter the number of elements in the array"<<endl;
    cin>>n; 

    for(i=0; i<n; i++)
    {
        cin>>a[i]; 
    }
    cout<<"unsorted array is"<<endl;
    for(i=0; i<n; i++)
    {
        cout<<a[i]<<" ";  // a[5] = {11,5,2,4,3}
    }

    for(i=1; i<n; i++) // 1  1 <5 
    {
        int  key = a[i];  // key = 5
        j = i-1; // j =0 
        while(j>=0 && a[j] > key) // -1 >=0  && a[0]   > 5  11 > 5 
        {
            a[j+1] =a[j];  // a[1] = 11
            j--; // -1
        }
        a[j+1] = key;  // a[0] = 5    //  5 11 2 4 3 
    }
    cout<<"\nsorted array is"<<endl;
    for(i=0; i<n; i++)
    {
        cout<<a[i]<<" ";  
    }
    return 0;   
}