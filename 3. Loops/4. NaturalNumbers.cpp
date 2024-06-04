#include <iostream>
using namespace std;
int main()
{
    int sum=0, i, n;

    cout<<"Enter n";
    cin>>n;

    for(i=1; i<=n; i++) {
        sum=sum+i;
    }

    cout<<"Sum N no. is "<<sum<<endl;

    return 0;
}