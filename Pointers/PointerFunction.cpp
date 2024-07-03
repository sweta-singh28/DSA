#include <iostream>
using namespace std;

void pointer(int* ptr){

    *ptr = *ptr + 1; //dereference
}


int main() {
    int a = 5;
    int* p = &a;
    
    pointer(p); //passing p(means address of the a stored in pointer p) in the util funtion
    
    cout<<a<<endl;
    
    

    return 0;
}