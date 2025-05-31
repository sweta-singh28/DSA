#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int>arr = {0,1,1,0,0,1,0,1,0,0,0,1,1,0,1,1,0};
    

    int start = 0;
    int end = arr.size() - 1;

    for (int i = 0; i <= end;)
    {
        if(arr[i] == 0){
            swap(arr[i], arr[start]);
            start++;
            i++;

        }
        else if(arr[i] == 1){
            swap(arr[i], arr[end]);
            end--;
        }
        else{
            i++;
        }
    }

        for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;
    
}


  


  


// Another way

// #include<iostream>
// #include<vector>
// using namespace std;

// int main(){

//     vector<int>arr = {0,1,1,0,0,1,0,1,0};
//     int size = 9;

//     int start = 0;
//     int end = size - 1;

//     for (int i = 0; i <= end;)
//     {
//         if(arr[i] == 0){
//             swap(arr[start], arr[i]);
//             start++;
//             i++;

//         }
//         else {
//             swap(arr[i], arr[end]);
//             end--;
//         }
      
//     }

//         for(int i=0; i<size; i++){
//         cout<<arr[i]<<" ";
//     }
    
//     return 0;
// }