// Numbers from 0 to n:

#include <iostream>
using namespace std;

int main()
{
    int n, i;

    cout<<"Enter a no.: ";
    cin>>n;

    while(i<=n)
    {
        cout<<i<<endl;
        i++;
    }

    return 0;
}

/*
~ Types: While, Do-While, For, For Each.
~ Repeatitive program.  
*/

/* ~ First condtn is written then process is checked. Eg. If this is F then it won't check the condtn.
While: w(<condtn>){
    process;
}
*/   

/* ~ First process is done then condtn is checked. Eg. If this is F still it will check the condtn. This runs @least once even when it has a 'F' value.
Do-While: do{
    process;
} while(<condtn>);
*/
