#include<iostream>
using namespace std;
int sum(int n){
    //base case
    if(n==0){
        return 0;
    }

    //recursive call
    int ans = n + sum(n-1);
    return ans;
}
int main(){
    int n;
    cout<<"Enter number: "<<endl;
    cin>>n;

    int ans = sum(n);
    cout<<"Answer is: "<<ans<<endl;
    return 0;
}