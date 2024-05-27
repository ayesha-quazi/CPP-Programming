// Compound assignment

/*   
    Sum = sum + a;
    Sum+=a;.... sum+assign(a);
*/

#include <iostream>
#include<cmath>

using namespace std;

int main()  {
    
    int sum = 10;
    int x = 2;
    
    //sum+=x;
    sum*=x;
    cout<<sum;
    
    return 0;
}
