#include <iostream>
using namespace std;
int main()
{
    int n, r;

    cout<<"Enter n: ";
    cin>>n;

    while(n>0)
    {
        r=n % 10;
        n=n / 10;
        cout<<r<<endl;
    }

    return 0;
}

/* ~ Reverse no: mod(by)10. Eg: (123) % (10) we'll get the last digit (3)

*/