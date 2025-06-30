#include <iostream>
using namespace std;
void solve(int* p){
  cout<<"Address stored at inside p: "<<p<<endl;
  cout<<"Address of p: "<<endl;
  *p = *p + 10;
}



int main() {
  int a = 5;
  cout<<"Address of a: "<<&a<<endl;
  int* ptr = &a;
  cout<<"Address stored at ptr: "<<ptr<<endl;
  cout<<"Address of ptr: "<<&ptr<<endl;

  cout<<endl<<endl<<"Calling solve function"<<endl;
  solve(ptr);

  cout<<a<<endl;
  

  return 0;
}