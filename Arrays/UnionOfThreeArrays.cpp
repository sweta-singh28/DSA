//Union of three arrays

#include<iostream>
#include<vector>
using namespace std;

int main(){
    int arr[] = {2,4,5};
    int sizea = 3;

    int brr[] = {1,3,9};
    int sizeb = 3;

    int crr[] = {7,6,8};
    int sizec = 3;

    vector<int>ans;

    //pushing all the element of arr
    for (int i = 0; i <sizea; i++)
    {
        ans.push_back(arr[i]);
    }

    //pushing all the element of arr
    for (int i = 0; i <sizeb; i++)
    {
        ans.push_back(brr[i]);
    }

    //pushing all the element of arr
    for (int i = 0; i <sizec; i++)
    {
        ans.push_back(crr[i]);
    }

    //printing the element
    cout<<"The union of three arrays is: "<<endl;

    for (int i = 0; i < ans.size(); i++)
    {
        cout<<ans[i]<<" ";
    }
    
    

    return 0;
}