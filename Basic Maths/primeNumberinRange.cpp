#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cout<<"Enter n: "<<endl;
    cin>>n;

    int m;
    cout<<"Enter: "<<endl;
    cin>>m;

    vector<int>ans;


    //first loop on range
    for(int i=n; i<=m; i++){
        int count = 0;

        //2nd loop to check prime 
        for(int j=1; j<=i; j++){
            if(i % j == 0){
                count++;
            }
        }

        //check if it has 2 factors push it in ans array
        if(count == 2){
            ans.push_back(i);
        }

    }

    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }


    return 0;

}