#include <iostream>
using namespace std;
int main()
{
    int n, i;
    cout<<"Enter number: ";
    cin>>n;
    
    for(i=1; i<=10; i++)
    {
        cout<<n<<" x "<<i<<" = "<<n*i;
        cout<<endl;
    }

    return 0;
}

// enter any num n you'll get it's table. 