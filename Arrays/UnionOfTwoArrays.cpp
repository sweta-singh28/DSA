#include<iostream>
#include<vector>
using namespace std;

int main(){

    int arr[] = {2,5,8,1,0};
    int sizea = 5;

    int brr[] = {6,7,4,3};
    int sizeb = 4;

    vector<int> ans;


    //pushing all the element of vector arr
    for (int i = 0; i < sizea; i++)
    {
        ans.push_back(arr[i]);
    }


    //pusing all the element of vector brr
    for (int i = 0; i < sizeb; i++)
    {
        ans.push_back(brr[i]);
    }

    //printing the union of both arrays
    cout<<"The Union of both arrays is: "<<endl;
    for (int i = 0; i <ans.size(); i++)
    {
        cout<<ans[i]<<" ";
    }
    

    return 0;
}