#include <iostream>
using namespace std;
//Head Recursion
 //Head recursion ---> first recursive call then processing
//print 1 to n

void print(int n){
    //base case
    if(n==0){
        return;
    }
    
    //RR      
    
    print(n-1);
    
    //processing
    cout<<n<<endl;
    
}



int main() {
    int n;
    cout<<"Enter the number: "<<endl;
    cin>>n;
    
    print(n);
    
     

    return 0;
}