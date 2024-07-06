#include <iostream>
using namespace std;
void square(int* p){
    int a = 10; 
    p = &a;  //passing the address of local variable a in p
    *p = (*p) * (*p); //change in local variable a
}

int main() {
    int a = 10;
    square(&a);
    cout<<a<<endl; //printing the variable a of main function
   
    
    
    return 0;
}