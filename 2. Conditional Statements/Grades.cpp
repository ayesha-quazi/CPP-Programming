#include <iostream>
using namespace std;

int main()
{
    int m1, m2, m3, Total;

    float Avg;

    cout<<"Enter your marks for A,B,C subjects: ";
    cin>>m1>>m2>>m3;

    Total = m1+m2+m3;
    Avg= Total/3.0;
    
    if(Avg>=60) {
        cout<<"You've got an A grade 🚀";
    }
    else {
        if(35>=Avg<60) {
            cout<<"You've got a B grade 💪🏻";
        }

        if(Avg>35) {
            cout<<"You couldn't make it this time 🙁";
        }
    }

    return 0;
}