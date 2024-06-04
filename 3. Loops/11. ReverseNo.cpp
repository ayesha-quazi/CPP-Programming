#include <iostream>
using namespace std;
int main()
{
    int n, r, rev=0, m;

    cout<<"Enter n: ";
    cin>>n;
    m = n;

    while(n>0)
    {
        r=n % 10;
        n=n / 10;
        rev=rev*10+r;
    }

    cout<<"Reverse of a Number is: "<<rev;

    return 0;
}

/* ~ Reverse no: mod(by)10. Eg: (123) % (10) we'll get the last digit (3)

*/