//Sieve of Eratosthenes
//TC-> O(n*log(logn))
#include<iostream>
#include<vector>
using namespace std;

int countPrimes(int n) {
        if(n==0){
            return 0;
        }
        vector<bool>prime(n, true); //all prime marked already.
        prime[0] = prime[1] = false;

        int ans = 0;
        for(int i=2; i<n; i++){
            if(prime[i]){
                ans++;

                int j=2*i;
                while(j<n){
                    prime[j] =  false;
                    j+=i;
                }
            }
        }
        return ans;

        
    }

int main(){
    int n;
    cout<<"Enter number: "<<endl;
    cin>>n;
    int ans = countPrimes(n);
    cout<<"The ans is: "<<ans<<endl;
    return 0;
}