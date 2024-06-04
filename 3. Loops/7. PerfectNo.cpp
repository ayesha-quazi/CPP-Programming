#include <iostream>
using namespace std;
int main()
{
    int i, n, sum=0;
    cout<<"Enter n: ";
    cin>>n;

    for(i=1; i<=n; i++)
    {
        if(n % i == 0) {
            sum=sum+i;
        }
    }
    if(2 * n == sum) 
        cout<<"It's a Perfect no. ";
    else 
    cout<<"It's not a perfect no. ";


    cout<<"Sum of Factor is "<<sum;

    return 0;
}

/*  
~ Sum of the fact of no. n double the no. is same then it's a Perfect no.
~ eg: (6) addn 1+2+3+6=12; mul 2*6=12; Then it's a Perfect no.*/