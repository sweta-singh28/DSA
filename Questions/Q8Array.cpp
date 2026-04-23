#include<iostream>
#include<vector>
#include<unordered_map>
#include<unordered_set>
using namespace std;

int main(){
    vector<int>arr = {2, 3, 2, 3, 5};
    vector<int>ans(arr.size(), 0);
    
    unordered_map<int, int>freq;


    //count frequency 
    for(int i=0; i<arr.size(); i++){
        int temp = arr[i];
        freq[temp]++;
    }


    for(int i=1; i<arr.size(); i++){
        ans[i-1] = freq[i];
    }

    //printing
    cout<<"Printing the answer: "<<endl;

    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;



    return 0;
}