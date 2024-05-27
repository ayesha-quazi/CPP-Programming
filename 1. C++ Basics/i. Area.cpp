// Program needs:

// • Input 
// • Process
// • Output

// Program for Area of Triangle:

// Area = (b*h)/2

#include <iostream>
using namespace std;

int main() {
    int b, h, Area;

    cout << "Enter value for b: ";
    cin >> b;
    cout << "Enter value for h: ";
    cin >> h;

    Area = (b * h) / 2;

    cout << "The Area is " << Area << endl;

    return 0;
}
