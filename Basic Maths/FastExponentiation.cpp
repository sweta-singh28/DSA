//TC-> O(logb)
#include <iostream>
using namespace std;
int  FastExponentiation(int a, int b){
    int ans = 1;
   while(b>0){
       if(b&1){
           ans = ans*a;
       }
       a = a*a;
       b>>=1;
   }
    return ans;
}


int main() {
    cout<<FastExponentiation(5,4)<<endl;
    
    

    return 0;
}