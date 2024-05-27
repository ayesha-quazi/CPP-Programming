#include <iostream>
#include<cmath>

using namespace std;

int main()  {
    
    int a,b,c;
    float r1, r2;
    
    cout<<"Enter 3 numbers: ";
    cin>>a>>b>>c;
    
    r1= (-b+sqrt(b*b-4*a*c))/(2*a);
    r2= (-b-sqrt(b*b-4*a*c))/(2*a);
    
    cout<<"Roots are: "<<r1<<" "<<r2;
    
    return 0;
}

/* try these values:
    a=1 b=-4 c=4
    a=1 b=-5 c=6
    a=2 b=-5 c=3
    a=4 b=-4 c=1
    a=1 b=1 c=-6  
*/