#include <iostream>
using namespace std;

int main() {

    float billAmt;
    float discount = 0.0;

    cout << "Enter your bill: ";
    cin >> billAmt;
    
    if (billAmt >= 500) {
        discount = billAmt * 20 / 100;
    }
    else if (billAmt >= 100 && billAmt < 500) {
        discount = billAmt * 10 / 100;
    }

    cout << "Your Bill Amount is: " << billAmt << endl;
    cout << "Your Discount is: " << discount << endl;
    cout << "Your Discounted Bill Amount is: " << billAmt - discount << endl;

    return 0;
}
