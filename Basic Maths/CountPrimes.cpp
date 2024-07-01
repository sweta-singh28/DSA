//naive approch
//TC-> O(nsquare)
#include<iostream>
#include<vector>
using namespace std;

bool isPrime(int n){
        if(n<=1){
            return false;
        }
        for(int i=2; i<n; i++){
            if(n%i == 0){
                return false;
            } 
        }
        return true;
    }

    int countPrimes(int n) {
        int count = 0;
        for(int i=0; i<n; i++){
            if(isPrime(i)){
                count++;
            }
        }
        return count;
        
    }

int main(){
    int n;
    cout<<"Enter number: "<<endl;
    cin>>n;

    cout<<"The number of prime numbers: "<<countPrimes(n)<<endl;



    return 0;
}