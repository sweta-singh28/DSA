#include<iostream>
#include<vector>
using namespace std;
//2D vector

void Addition(vector<vector<int>>& a, vector<vector<int>>&b){
    for(int i=0; i<a.size(); i++){
        for(int j=0; j<b[i].size(); j++){
            a[i][j] = a[i][j] + b[i][j];
        }
    }

   
}


int main(){
    vector<vector<int>>a = {{1, 2}, 
                            {3, 4}};

    vector<vector<int>> b = {{4, 3}, 
                             {2, 1}};



    Addition(a, b);                         

    cout<<"Printing answer: "<<endl;
    for(int i=0; i<a.size(); i++){
        for(int j=0; j<b.size(); j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }                         




    return 0;
}