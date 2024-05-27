#include <iostream>

using namespace std;

enum day {mon=2,tue,wed,thur,fri=9,sat,sun };

int main()
{
    day d;
    d=wed;

    cout<<mon<<endl;
    cout<<tue<<endl;
    cout<<wed<<endl;
    cout<<thur<<endl;
    cout<<fri<<endl;
    cout<<sat<<endl;
    cout<<sun;

    return 0;
}

/* 

~ Enum = useful for defining user-define DT, commanly used words have 'codes', no more string we'll use these codes.

eg: Menu:
file-0, new-1, open-3;
1st one is '0' till the last one, automatically given are codes.


~ Typedef: solves the readability issue. typedef➡'marks' m1,m2,m3; helps to get us the code readable


typedef int marks;

{
    marks m1,m2;

    m1=40;
    m2=39;
}


 */