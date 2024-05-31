#include <iostream>
using namespace std;

int main()

{
    int day;

    cout<<"Enter Day No.: ";
    cin>>day;
    switch (day)
    {
    case 1: cout<<"Mon";
        break;
    case 2: cout<<"Tue";
        break;
    case 3: cout<<"Wed";
        break;
    case 4: cout<<"Thu";
        break;
    case 5: cout<<"Fri";
        break;
    case 6: cout<<"Sat";
        break;
    case 7: cout<<"Sun";
        break;
    
    default: cout<<"Invalid day";
}

    return 0;
}


/* 
~Switch case: executes case 1, then if break mentioned it'll end (the program)

~ Last option Default.

~ Faster than else-if statements.
~ There must be proper space between case n no.
*/