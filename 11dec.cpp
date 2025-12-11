/*
private  :access within  class only.  

*/
/*
#include <iostream>
using namespace std; 
class student
{
    private :
        string name="saumya"; 
        int marks =99; 
    
        void show()
        {
            cout<<"name :"<<name<<"\n";
            cout<<"marks :"<<marks<<endl;
        }
    public : 
        void display()
        {
            show();
        }

};
int main()
{
    student s1;  
    // cout<<"name :"<<s1.name<<"\n";
    // cout<<"marks :"<<s1.marks<<endl; // bcz  of private  not access outside the class .
    s1.display();
    return 0; 
}
*/ 

/*
constructor  : automatically called when object is created.
rules : 
1. class name ===> constructor  name .  
*/

#include<iostream>
using namespace std;
class person 
{
    public : 
        string name;
        int age; 
    person(string n , int a)
    {
        name=n; 
        age=a;
    }
    void show()
    {
        cout<<"name :"<<name<<"\n";
        cout<<"age :"<<age<<endl;
    }

};
int main()
{
    person p1("saumya",19);
    p1.show();
    return 0; 
}

// hw   ==> switch  and conditional statment: 

/*
Write a C++ program to calculate the monthly gross pay, annual income, and income tax of an employee using the following rules:

ask user to enter the city and grade.
1. Salary Components

Gross Pay =
Basic Pay + House Rent Allowance (HRA) + Dearness Allowance (DRA) + Other Allowances + Transport Allowance (TA) – Professional Tax – Provident Fund (PF)

| Grade | Basic Pay (₹) | Other Allowances (₹) |
| ----- | ------------- | -------------------- |
| A     | 60000         | 8000                 |
| B     | 50000         | 7000                 |
| C     | 40000         | 6000                 |
| D     | 30000         | 5000                 |
| E     | 20000         | 4000                 |
| F     | 10000         | 3000                 |

2. Constants & Formulas

Professional Tax = ₹200
Transport Allowance TA = ₹900
Provident Fund PF = 0.11 × Basic Pay
Dearness Allowance DRA = 0.5 × Basic Pay
 
HRA depends on city type:
City 1 (Tier 1) → HRA = 0.30 × Basic Pay
City 2 (Tier 2) → HRA = 0.20 × Basic Pay
City 3 (Tier 3) → HRA = 0.10 × Basic Pay

3.Annual Income = Gross Pay × 12
4.
| Annual Income           | Tax                                    | // 8 lpa 
| ----------------------- | -------------------------------------- |  
| Up to ₹2,50,000         | 0%                                     |  2.5 
| ₹2,50,001 – ₹5,00,000   | 5% of (Income – 2,50,000)              |   2.5  ==> 5% =12500 
| ₹5,00,001 – ₹7,50,000   | 10% of (Income – 5,00,000) + 12,500    |   2.5 ==>10% =25000
| ₹7,50,001 – ₹10,00,000  | 15% of (Income – 7,50,000) + 37,500    |50K %15 ==> 7500  45000
| ₹10,00,001 – ₹12,50,000 | 20% of (Income – 10,00,000) + 75,000   |
| ₹12,50,001 – ₹15,00,000 | 25% of (Income – 12,50,000) + 1,25,000 |
| Above ₹15,00,001        | 30% of (Income – 15,00,000) + 1,87,500 |

*/