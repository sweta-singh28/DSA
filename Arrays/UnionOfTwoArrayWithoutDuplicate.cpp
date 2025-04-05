#include<iostream>
#include<vector>
using namespace std;

bool isPresent(vector<int>&ans, int value){
    for(int i=0; i<ans.size(); i++){
        if(ans[i] == value){
            return true;
        }
    }
    return false;
}

int main(){
     int n;
    cout<<"Enter the number of elements in first array: "<<endl;
    cin>>n;
    
    int arr[n];
    cout<<"Enter the elements in the first array: "<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    
    int m;
    cout<<"Enter the number of elements in second array: "<<endl;
    cin>>m;
    
    int brr[m];
    cout<<"Enter the elements in the second array: "<<endl;
    for(int i=0; i<m; i++){
        cin>>brr[i];
    }
    
    
    //pushing the elements of two arrays in ans
    vector<int>ans;
    //pushing the elements of first array
    for(int i=0; i<n; i++){
        if(!isPresent(ans, arr[i])){
            ans.push_back(arr[i]);
        }
    }

    ///pushing the elements of second array
    for(int i=0; i<m; i++){
        if(!isPresent(ans, brr[i])){
            ans.push_back(brr[i]);
        }
    }
    
    //print the finalans
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
    
   



    return 0;
}