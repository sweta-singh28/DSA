#include <iostream>
using namespace std;

int main() {
  int arr[4] = {12, 45, 4, 14};


  //cout<<arr<<endl; //base address
  //cout<<arr[0]<<endl; //12
  //cout<<&arr<<endl; //base address
  //cout<<&arr[0]<<endl; //base address

  //int* p = arr;
  //cout<<p<<endl; //address of arr[0] (base address)
  //cout<<&p<<endl; //address of p
  //cout<<*p<<endl; //value at arr[0] (base address, 0 index)


  cout<<*arr<<endl;
  cout<<arr[0]<<endl; //0 index
  cout<<*arr + 1<<endl; //12 + 1
  cout<<*(arr) + 1<<endl; // 12+1
  cout<<*(arr + 1)<<endl; //45
  cout<<arr[1]<<endl; //1 index
  cout<<*(arr + 2)<<endl; //4
  cout<<arr[2]<<endl; //2 index
  cout<<*(arr + 3)<<endl; //14
  cout<<arr[3]<<endl; //3 index


  int i = 0;
  cout<<arr[i]<<endl; 
  cout<<i[arr]<<endl;
  cout<<*(arr+i)<<endl;
  cout<<*(i+arr)<<endl;





  return 0;
}