#include<iostream>
using namespace std;

bool isPalindrome(int n){
    int x = n;
    int rev = 0;
    int digit = 0;

    if(n < 0){
        return false;
    }

    while(n > 0){
        digit = n % 10;
        rev = rev*10 + digit;
        n = n/10;
    }

    if(x == rev){
        return true;
    }
    else{
        return false;
    }

}

int main(){
    int start;
    cout<<"Enter the L: "<<endl;
    cin>>start;
    int end;
    cout<<"Enter the R: "<<endl;
    cin>>end;

    for(int n=start; n<=end; n++){
        if(isPalindrome(n)){
            cout<<n<<" ";
        }
    }
    cout<<endl;



    return 0;
}