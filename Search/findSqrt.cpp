#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int findSqrt(int n){
    int target = n;
    int start = 0;
    int end = n;
    int mid = start+(end-start)/2;
    
    int ans = -1;
    
    while(start<=end){
        if(mid*mid == target){
            return mid;
        }
        else if(mid*mid<target){
            //store ans
            ans = mid;
            //right search
            start = mid +1;
        }
        else{
            //left search 
            end = mid-1;
        }
        mid = start+(end-start)/2;
    }
    return ans;
    
}


int main() {
    
    int n;
    cout<<"Enter number: "<<endl;
    cin>>n;
    
    int target=n;
    
    int ans = findSqrt(n);
    cout<<"The ans is: "<<ans<<endl;
    
    int precision;
    cout<<"Enter the number of the floating digits in precision"<<endl;
    cin>>precision;
    
    double step = 0.1;
    double finalAns = ans;
    
    for(int i=0; i<precision; i++){
        
        for(double j = finalAns; j*j<=n; j = j+step){
            finalAns = j;
        }
        step = step/10;
    }
    
    cout<<"Final ans is: "<<finalAns<<endl;
    

    return 0;
}