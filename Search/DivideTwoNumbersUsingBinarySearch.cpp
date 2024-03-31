#include<iostream>
using namespace std;

int solve(int dividend, int divisor){
    int s = 0;
    int e = abs(dividend);
    int ans = 0;


    int mid = s + (e-s)/2;

    while (e>=s)
    {
        if (abs(mid*divisor) == abs(dividend))
        {  
            //perfect solution
            ans = mid;
            break;
        }
        else if (abs(mid*divisor) > abs(dividend))
        {   
            //left search
            e = mid-1;
        }
        else{
            //store ans
            ans = mid;
            //right search
            s = mid+1;
        }
        
       mid = s + (e-s)/2;    
    }
       
       
       if((dividend<0 && divisor<0) || (dividend>0 && divisor>0)){
           return ans;
       }
       else{
           return -ans;
       }
       
}

int main(){

    int dividend = 22;
    int divisor = -2;


    int finalAnswer = solve(dividend, divisor);
    cout<<"The answe is: "<<finalAnswer<<endl;

    return 0;
}
