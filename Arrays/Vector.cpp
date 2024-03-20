#include<iostream>
#include<vector>
using namespace std;

int main(){
    //create vector
    vector<int> arr;

    int ans = (sizeof(arr)/sizeof(int));
    cout<<ans<<endl;
    

    cout<<arr.size()<<endl;
    cout<<arr.capacity()<<endl;

    //insert 
    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(9);
    arr.push_back(2);

    //print
    for (int i = 0; i < arr.size(); i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    //remove or delete
    arr.pop_back();
    arr.pop_back();

    //print
    for (int i = 0; i < arr.size(); i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl; 

    int n;
    cin>>n;

    cout<<"Enter the n: ";


    vector<int>brr(n, -1);
    cout<<"Size of brr: "<<brr.size()<<endl;
    cout<<"Capacity of brr: "<<brr.capacity()<<endl;

        //print
    for (int i = 0; i < brr.size(); i++)
    {
        cout<<brr[i]<<" ";
    }
    cout<<endl;



    vector<int>crr{1,2,3,4,5};

    //printing crr
        for (int i = 0; i < crr.size(); i++)
    {
        cout<<crr[i]<<" ";
    }
    cout<<endl;

    //empty()
    cout<<"Vector crr is Empty or not: "<<crr.empty()<<endl;

    return 0;
}
