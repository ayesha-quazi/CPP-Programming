/*
    & AND: 0&1= 0, 1&1=1;
    | OR: 0|1= 1, 1|1=1;
    ^ X-OR: 0^1= 1, 1^1=0;
    ~ NOT: 0 = 1, 1 = 0;
    <<, >> 

    used in electronics, device-drivers, hardware  part.
*/

#include <iostream>
using namespace std;

int main() {
    
    int x=11, y=5, z;

    z=x&y;
    cout<<z<<endl;

    return 0;
}

