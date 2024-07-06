#include <iostream>
using namespace std;


int main() {
    int a = 10;
    int *p = &a;
    int **q = &p;
    
    int b= 20;
    *q = &b; //dereference q and store the address of b
    (*p)++;
    cout<<a<<" "<<b<<endl;
    
    
    return 0;
}