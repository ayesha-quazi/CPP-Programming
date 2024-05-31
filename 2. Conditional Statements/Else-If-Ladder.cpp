// Diaplay Day-number:

#include <iostream>
using namespace std;

int main() 
{
    int day;
    cout<<"Enter day number: ";
    cin>>day;
    if(day==1){
        cout<<"Mon"<<endl;
    }
    else if(day==2){
        cout<<"Tue"<<endl;
    }
    else if(day==3){
        cout<<"Wed"<<endl;
    }
    else if(day==4){
        cout<<"Thur"<<endl;
    }
    else if(day==5){
        cout<<"Fri"<<endl;
    }
    else if(day==6){
        cout<<"Sat"<<endl;
    }
    else if(day==7){
        cout<<"Sun"<<endl;
    }
    else{
        cout<<"Invalid Day no.";
    }
    return 0;
}

/* ~ No of comparision depends on the value given. This will run until it reaches the destination.  */