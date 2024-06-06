#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int>arr{2,4,5,7,6};
    vector<int>brr{2,9,8,4};

    vector<int>ans;

    //Outer loop on arr vector
    for (int i = 0; i < arr.size(); i++)
    {
        int element = arr[i];
        //for every element, run loop on brr
        for (int j = 0; j < brr.size(); j++)
        {
            if(element == brr[j]){
                //mark the inserted element
                brr[j] = -1;
                ans.push_back(element);
            }
        }
        

    }

    //printing the array
    cout<<"The insection of both the arays is: "<<endl;
    for(auto value: ans){
        cout<<value<<" ";
    }
    return 0;
}