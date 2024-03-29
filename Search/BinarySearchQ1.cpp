#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

//Using STL in vector

int main(){
    vector<int>v{1,3,4,7,8,9};

    if (binary_search(v.begin(), v.end(), 7))
    {
        cout<<"Found"<<endl;
    }
    else{
        cout<<"Not Found"<<endl;
    }
    


    return 0;
}