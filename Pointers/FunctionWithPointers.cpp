#include <iostream>
using namespace std;

void solve(int arr[10]){
  cout<<"Size inside the solve function: "<<sizeof(arr)<<endl; //prints the size of the pointer 8
  cout<<"arr: "<< arr <<endl; //prints the address of the pointer
  cout<<"&arr: "<<&arr<<endl; //prints the address of the arr
 
  arr[0] = 50;


}

int main() {
  int arr[6] = {4,7,1,9};
  cout<<"Size inside the main function: "<<sizeof(arr)<<endl;

  cout<<"arr: "<<arr<<endl; //base address
  cout<<"&arr: "<<&arr<<endl; //base address

  //printing array inside the main function
  for(int i=0; i<6; i++){
    cout<<arr[i]<<" "<<endl;
  }



  cout<<endl<<"Now calling solve function"<<endl;
  solve(arr);


  cout<<"Again inside the main function"<<endl; //printing the array again
  for(int i=0; i<6; i++){
    cout<<arr[i]<<" "<<endl;
  }




  return 0;
}