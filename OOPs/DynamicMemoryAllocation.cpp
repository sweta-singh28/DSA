#include<iostream>
using namespace std;
//Creating 2d array using heap memory

int main(){
    int row = 5;
    int col = 3;
   
    //int** arr----> inside the stack  and new int*[5]-----. inside the 
    int** arr = new int*[5];

    for(int i=0; i<row; i++){
        arr[i] = new int[col];
    }

    //printing 
    //for(int i=0; i<row; i++){
    //    for(int j=0; j<col; j++){
     //       cout<<arr[i][j]<<" ";
     //   }
      //  cout<<endl;
   // }




    //dealloaction
    for(int i=0; i<row; i++){
       delete []arr[i];
    }

    delete[]arr;


    return 0;

}