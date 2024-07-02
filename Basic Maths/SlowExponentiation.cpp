//TC-> O(b)
#include <iostream>
using namespace std;
int SlowExponentiation(int a, int b){
    int ans = 1;
    for(int i=0; i<b; i++){
        ans *= a;
    }
    return ans;
}


int main() {
    cout<< SlowExponentiation(5,4)<<endl;
    
    

    return 0;
}