#include <iostream>
#include<vector>
using namespace std;
//WAP to calculate the factorial of a given number.
int factorial(int n){
    //base case
    if(n==1){
        return 1;
    }
    
    //recursive call
    return n * factorial(n-1);
}




int main() {
    int n;
    cout<<"Enter the number: "<<endl;
    cin>>n;
    
    int finalAns = factorial(n);
    cout<<"Answer is: "<<finalAns;
  
 
    return 0;
}