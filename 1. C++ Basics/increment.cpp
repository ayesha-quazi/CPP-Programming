#include <iostream>
using namespace std;

int main() 
{
    int i=5, j;
    j=++i; //j=i++;
    cout<<"J is " <<j<<endl;
    cout<<"I is " <<i;

    return 0;
}

/* 

~ Pre-increment: first increment the value (x) then assign to (y). y=++x;

~ Post-incre: first assign the value (x) then increment the value(y) y=x++;

*/