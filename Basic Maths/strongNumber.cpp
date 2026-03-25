#include<iostream>
using namespace std;
int main(){
    int n = 145;

    int digit = 0;
    int original = n;
    int sum = 0;

    while(n != 0){
        digit = n%10;
        n = n/10;

        //find factorial of each digit
        int fact = 1;
        for(int i=1; i<=digit; i++){
            fact = fact*i;
        }

        sum += fact;
    }


    if(sum == original){
        cout<<"Strong Number."<<endl;
    }
    else{
        cout<<"Not a strong Number"<<endl;
    }

    return 0;
}