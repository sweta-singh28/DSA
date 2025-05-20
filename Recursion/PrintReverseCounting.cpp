#include <iostream>
using namespace std;
void printCounting(int n){
    //base case
    if(n == 0){
        return;
    }
    //processing  (printing n)
    cout<<n<<" "<<endl;
    
    //recursive relation (function calling itself)
    printCounting(n-1);
}


int main() {
    int n;
    cout<<"Enter the value of n: "<<endl;
    cin>>n;
    cout<<endl;
    
    printCounting(n);
    
    return 0;
}