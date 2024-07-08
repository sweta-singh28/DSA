#include <iostream>
using namespace std;
int factorial(int n){
    //base case
    if(n == 1){
        return 1;
    }
    cout<<"Function is called for n "<<n<<endl;
    int ans = n * factorial(n-1); //function calling itself
    return ans;
}




int main() {
    int n;
    cout<<"Enter the value of n: "<<endl;
    cin>>n;
    
    int ans = factorial(n);
    cout<<"The ans is: "<<ans<<endl;
    
    return 0;
}