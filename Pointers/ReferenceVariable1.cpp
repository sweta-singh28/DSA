#include <iostream>
using namespace std;
void solve(int*& p){  //pass by reference.
    p = p+1;
}


int main() {
    int a = 5;
    int* p = &a;
    
    
    cout<<"Before "<<p<<endl;
    solve(p);

   


    cout<<"After "<<p<<endl;
    return 0;

    
    
}