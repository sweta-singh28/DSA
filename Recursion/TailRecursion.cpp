#include <iostream>
using namespace std;
//Tail Recursion
 //Tail recursion ---> first processing then recursive call. 
//print 1 to n

void print(int n){
    //base case
    if(n==0){
        return;
    }
      
    //processing
    cout<<n<<endl;

    //RR      
    
    print(n-1);
    
    
}



int main() {
    int n;
    cout<<"Enter the number: "<<endl;
    cin>>n;
    
    print(n);
    
     

    return 0;
}