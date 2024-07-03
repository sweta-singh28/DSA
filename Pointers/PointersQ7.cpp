#include <iostream>
using namespace std;
int main() {
    //assume address of a is 200
    double a = 10.54;
    double* d = &a;
    d = d+1;
    cout<<d<<endl;
    
    


    return 0;
}