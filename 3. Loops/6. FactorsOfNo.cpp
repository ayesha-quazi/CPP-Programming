#include <iostream>
using namespace std;
int main()
{
    int i, n;

    cout<<"Enter n: ";
    cin>>n;

    for(i=1; i<=n; i++)
    {
        if(n % i == 0){
            cout<<i<<endl;
        }
    }

    return 0;
}

/* ~ Factors simply means no's those are divisible by (n)
eg: n=3, fact will be: 1,3 [Because this no is only divisible by 2 no's | Reminder is 0]
*/