#include <iostream>
using namespace std;

int main() {

    float NetSalary, sal, allowance,deduction;

    cout<<"Enter your basic salary: "<<endl;
    cin>>sal;

    cout<<"Enter % of allowances: "<<endl;
    cin>>allowance;

    cout<<"Enter % of deduction: "<<endl;
    cin>>deduction;

    NetSalary = sal + sal * allowance/100 - sal * deduction/100;

    cout<<"The total NetSalary is: " <<NetSalary<<endl;

    return 0;
}