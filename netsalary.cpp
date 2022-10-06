#include<iostream>
using namespace std;

int main()
{
    float basic;
    float percentAllow;
    float percentDeduct;
    float netSalary;

    cout<<"enter basic salary";
    cin>>basic;

    cout<<"enter percent of allowances";
    cin>>percentAllow;

    cout<<"enter percent deduction";
    cin>>percentDeduct;

    netSalary=basic+basic*(percentAllow)/100-basic*(percentDeduct)/100;

    cout<<"Net Salary is"<<netSalary<<endl;

    return 0;
}