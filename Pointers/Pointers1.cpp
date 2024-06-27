#include <iostream>
using namespace std;

int main() {


  int a = 10;
  
  //pointer 
  int*ptr = &a;

  //accessing the value
  cout<<"The address of a is: "<<&a<<endl;
  cout<<"The value stored at ptr is: "<<ptr<<endl;
  cout<<"Value pt is pointing to is: "<<*ptr<<endl;
  //address of the ptr
  cout<<&ptr<<endl;




  
  return 0;
}