#include<iostream>
#include<vector>
using namespace std;
//intersection of two arrays
int main(){
    vector<int>arr{1,2,3,1,5,6,9};
    vector<int>brr{2,3,4,5,2};
    
    vector<int>ans;
    
    for(int i=0; i<arr.size(); i++){
        for(int j=0; j<brr.size(); j++){
            if(arr[i] == brr[j]){
                int k;
                for(k=0; k<ans.size(); k++){
                    if(ans[k] == arr[i]){
                        break;
                    }
                }
                if(k == ans.size()){
                        ans.push_back(arr[i]);
                    }
            }
        }
    }
    
    
    cout<<"The answer is: "<<endl;
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
    
    
    return 0;
}