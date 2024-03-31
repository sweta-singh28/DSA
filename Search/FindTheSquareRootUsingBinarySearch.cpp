#include<iostream>
#include<vector>
using namespace std;

int findSqrt(int n){
    int s = 0;
    int e = n-1;
    int mid = s + (e-s)/2;
    int target = n;
    int ans;       

    while (e>=s)
    {
        if (mid*mid == target)
        {
            return mid;
        }
        else if (mid*mid >target)
        {
            //left search.
            e = mid -1;
        }
        else{
            //store the ans.
            ans = mid;
            //search in right.
            s = mid + 1;
        }
        
        mid = s + (e-s)/2;
        
    }
    return ans;
    

}

int main(){

    int n;
    cout<<"Enter the number: "<<endl;
    cin>>n;


    int finalAnswer = findSqrt(n);
    cout<<"The answer is: "<<finalAnswer<<endl;


    int precision;
    cout<<"Enter the number of floating digits in precision: "<<endl;
    cin>>precision;

    
    double step = 0.1;
    double ans = finalAnswer;
    for (int i = 0; i < precision; i++)
    {
        
        for (double j = ans; j*j<=n; j=j+step)
        {
            ans = j;
        }
        step = step / 10;
        
    }
    cout<<"The final answer is: "<<ans<<endl;
    

    return 0;
}