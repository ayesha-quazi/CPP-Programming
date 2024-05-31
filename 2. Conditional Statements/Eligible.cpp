#include <iostream>
using namespace std;

int main() {

    int age;

    cout<<"Are you eliglible for offer, enter your age: ";
    cin>>age;

    if(age<=12 || age>=50) 
    {
        cout<<"You're eligible 🎉";
    }
    else 
    {
        cout<<"Better luck next time 🙃";
    }

    return 0;
}