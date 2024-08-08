#include <iostream>
#include<vector>
using namespace std;
//Union of three arrays
int main() {
  //first array
  int n;
  cout<<"Enter the number of elements in first array: "<<endl;
  cin>>n;
  int arr[n];
  cout<<"Enter the elements in first array: "<<endl;
  for(int i=0; i<n; i++){
    cin>>arr[i];
  }



  //second array
  int m;
  cout<<"Enter the number of elemnts in second array: "<<endl;
  cin>>m;
  int brr[m];
  cout<<"Enter the elements in second array: "<<endl;
  for(int i=0; i<m; i++){
    cin>>brr[i];
  }



  //third array
  int p;
  cout<<"Enter the number of elemnts in third array: "<<endl;
  cin>>p;
  int crr[p];
  cout<<"Enter the elements in third array: "<<endl;
  for(int i=0; i<p; i++){
    cin>>crr[i];
  }


  vector<int>ans;

  //pushing all the elements of arr in ans array
  for(int i=0; i<n; i++){
    ans.push_back(arr[i]);
  }
  //pushing all the elemnts of brr in ans array
  for(int i=0; i<m; i++){
    ans.push_back(brr[i]);
  }
  //pushing all the elements ofr crr in ans array
  for(int i=0; i<p; i++){
    ans.push_back(crr[i]);
  }

  //printing the ans array
  cout<<"The union of three arrays is: "<<endl;
  for(int i=0; i<ans.size(); i++){
    cout<<ans[i]<<" ";
  }
  cout<<endl;

  return 0;
}