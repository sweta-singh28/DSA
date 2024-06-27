#include <iostream>
using namespace std;

int main() {
  int arr[4] = {12, 13, 4, 14};

  cout<<arr<<endl; //base address
  cout<<arr[0]<<endl; //12
  cout<<&arr<<endl; //base address
  cout<<&arr[0]<<endl; //base address

  int* p = arr;
  cout<<p<<endl; //address of arr[0] (base address)
  cout<<&p<<endl; //address of p
  cout<<*p<<endl; //value at arr[0] (base address, 0 index)



  return 0;
}