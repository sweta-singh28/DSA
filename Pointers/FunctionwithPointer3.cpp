#include <iostream>
using namespace std;
void update(int* a, int* b){
  *a = 100; 
  *b = 200;
}

int main() {
  int arr[4] = {10,40,30,40};
  int* p = &arr[1];
  int* q = &arr[2];

  //print the array
  for(int i=0; i<4; i++){
    cout<<arr[i]<<" "<<endl;
  }

  update(p,q);

  //printing the array agin
  cout<<endl<<endl<<"Printing array after calling update function"<<endl;
  for(int i=0; i<4; i++){
    cout<<arr[i]<<" "<<endl;
  }
  
  return 0;
}