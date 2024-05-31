#include <iostream>
using namespace std;

int main()
{
    int a,b,c;

    cout<<"Enter any 3 values: ";
    cin>>a>>b>>c;

    if(a>b || b>c) {
        cout<<"A is the greatest!";
    }

    else{
        if(b>c)
        {
            cout<<"B is greater than all";
        }

        if(b<c)
        {
        cout<<"C is the greatest of all!";
        }
    }

    return 0;
}

/* if(condition) {
    ---}

    else
    {
        if(condition) 
        {
            ---
        }
        if(condition)
        {
            ----
        }
    
    }

*/