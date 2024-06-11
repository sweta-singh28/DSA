#include<iostream>
#include<vector>
using namespace std;
int main(){
    //Union of two arrays;
    
    int n;
    cout<<"Enter the number of elements in the first array: "<<endl;
    cin>>n;
    
    int arr[n];
    cout<<"Enter the elements of first array: "<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    
    int m;
    cout<<"Enter the number of elements in the second array: "<<endl;
    cin>>m;
    
    int brr[m];
    cout<<"Enter the elements of second array: "<<endl;
    for(int i=0; i<m; i++){
        cin>>brr[i];
    }
    
    vector<int>ans;
    
    //pushing the elements of arr
    for(int i=0; i<n; i++){
        ans.push_back(arr[i]);
    }
    
    //pushing the elements of brr
    for(int i=0; i<m; i++){
        ans.push_back(brr[i]);
    }
    
    //printing the arrays
    cout<<"The union of two arrays is: "<<endl;
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
    
    
    return 0;
}