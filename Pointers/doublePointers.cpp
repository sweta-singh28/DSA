#include <iostream>
using namespace std;


int main() {
    int a = 5;
    int* p = &a;
    int** q = &p;
    
    cout<<a<<endl; //data at a
    cout<<&a<<endl; //address of a 
    cout<<p<<endl; //address of a stored in p
    cout<<&p<<endl; // address of p
    cout<<*p<<endl; //data at a
    cout<<q<<endl; // data of q
    cout<<*q<<endl; // data of p
    cout<<**q<<endl; // data of a    //double pointers
    cout<<&q<<endl; //address of q


    
    

    return 0;
}