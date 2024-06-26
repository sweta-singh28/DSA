#include <iostream>
using namespace std;

int main() {

  //int a = 5;
  //int b = 5;
  //cout<<a<<endl;


//address of the stroge location where the 5 is stored in symbol table
  //cout<<&a<<endl;
  //cout<<&b<<endl;


  
  int a = 5;
  //pointer create
  //ptr is pointer to a which contain integer data
  int *ptr = &a;

  //acess the value ptr is pointing to
  cout<<*ptr<<endl; //using *ptr as dereference 



  //NULL POINTER
  int *ptr = 0;
  int *ptr = nullptr;
  

  cout<<*ptr<<endl;






  
  return 0;
}