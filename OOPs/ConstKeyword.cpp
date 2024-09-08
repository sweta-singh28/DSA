#include<iostream>
using namespace std;

int main(){
    // const int x = 10;
    //cout<<x<<endl;
   
    //x = 11;   // x value cannot be changed 

    //2. Const with pointers 
    int *a = new int;
    *a = 2;
    cout<<*a<<endl;
    int b = 5;
    a = &b;
    cout<<*a<<endl;    
    

    return 0;
}