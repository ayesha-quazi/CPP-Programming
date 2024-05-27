#include <iostream>
using namespace std;

int main() {
    char x=128;
    x++;
    cout<<(int)x<<endl;
// x=-127 this is called overflow. 127 (x++)➡-128 and vice-versa.
    return 0;
}