#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<vector<int> > arr;


    vector<int>a = {6, 2, 5, 3, 7};
    vector<int>b = {3, 9, 0};
    vector<int>c = {0, 7};

    arr.push_back(a);
    arr.push_back(b);
    arr.push_back(c);

    for (int i = 0; i < arr.size(); i++)
    {
        for (int j= 0; j <arr[i].size(); j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
        
         
    }
    

    return 0;
}