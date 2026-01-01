#include<iostream>
using namespace std;
int fact(int n){
    cout<<"Function is called for n: "<<n<<endl;
    //base case
    if(n == 1 ){
        return 1;
    }

    return n * fact(n-1);
}


int main(){
    int n;
    cout<<"Enter number: "<<endl;
    cin>>n;

    int ans = fact(n);
    cout<<"The answer is: "<<ans<<endl;







    return 0;
}