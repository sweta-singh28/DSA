#include<iostream>
using namespace std;

int factorial(int n){
    cout<<"Function is called for n: "<<n<<endl;
    //base case
    if(n==1){
        return 1;
    }

    int smallerProblemAns  = factorial(n-1);
    int biggerProblemAns = n * smallerProblemAns;

    return biggerProblemAns;



}
int main(){
    int n;
    cout<<"Enter the value of n: "<<endl;
    cin>>n;

    int ans = factorial(n);

    cout<<"Answer is: "<<ans<<endl;
}
