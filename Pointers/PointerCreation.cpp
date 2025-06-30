#include <iostream>
using namespace std;

int main() {

  //int a = 5;
  //int b = 5;
  //cout<<a<<endl;


//address of the storage  location where the 5 is stored in symbol table
  //cout<<&a<<endl;
  //cout<<&b<<endl;


  
  int a = 5;
  //pointer create
  //ptr is pointer to a (integer data or)  which contain integer data 
  int *ptr = &a;   //stores address

  //value at a
  cout<<"The value at a: "<<a<<endl;

  //address of a
  cout<<"Address of a: "<<&a<<endl;

  //to access the address 
  cout<<"Value stored at ptr is: "<<ptr<<endl;

  //access the value ptr is pointing to
  cout<<"Value ptr is pointing to is: "<<*ptr<<endl; //using *ptr as dereference operator

  //address of ptr
  cout<<"Address of ptr: "<<&ptr<<endl;



  //NULL POINTER
  int *ctr = 0;
  int *dtr = nullptr;
  

 






  
  return 0;
}