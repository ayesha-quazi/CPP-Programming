#include <iostream>
using namespace std;
int main()
{
    int i, n, count=0;

    cout<<"Enter n: ";
    cin>>n;

    for(i=1; i<=n; i++){
    if(n % i == 0)
    {
    count++;
    }
    }
    if(count==2)cout<<"It's a Prime no.";
    else
    cout<<"It's not a Prime no.";

    return 0;
}

/*  ~ Prime no = If a no. is divi by 1 n itself it's a prime no.
eg: n=13. fact=1,13. Fact=2 then it'll be a prime no.
*/