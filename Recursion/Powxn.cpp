#include<iostream>
using namespace std;
int pow(int x, int n){
    int ans = 1;
    for(int i=0; i<n; i++){
        ans = ans * x;
    }
    return ans;


}

int main(){
    int x;
    cout<<"Enter number: "<<endl;
    cin>>x;

    int n;
    cout<<"Enter power: "<<endl;
    cin>>n;
    int ans = pow(x,n);
    cout<<"Answer is: "<<ans<<endl;


    return 0;
}