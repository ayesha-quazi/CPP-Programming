#include <iostream>
using namespace std;

int main() {

    int age; 

    cout<<"Enter your age: ";
    cin>>age;


    if(age>=12 && age<=35) 
    {
        cout<<"You're young!";
    }
    else{
        cout<<"You've reached an old age";
    }
    return 0;
}