#include <iostream>
using namespace std;

void solve(int** ptr){
    //ptr = ptr+1; //changes in the address of y stored in z
    //*ptr = *ptr+1; //changes in the address of x stored in y
    **ptr = **ptr+1; // changes at the value stored in x(x = 13)
    
}




int main() {
    int x = 12;
    int* y = &x;
    int** z = &y;
    
    solve(z);
    
    cout<<x<<endl;
   

    return 0;
}