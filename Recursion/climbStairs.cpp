#include <iostream>
using namespace std;
int climbStairs(int n){
    //base case- stopping condition
    if(n==0 || n==1){
        return 1;
    }
    
    //Recursive relation
    int ans = climbStairs(n-1) + climbStairs(n-2);
    return ans;
}



int main() {
    int n;
    cout<<"Enter the number of n: "<<endl;
    cin>>n;
    
    int ans = climbStairs(n);
    cout<<"Answer is: "<<ans<<endl;
    
    return 0;
}