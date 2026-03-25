#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter number: "<<endl;
    cin>>n;

    while(n != 1){
        cout<<n<<" ";

        //n is even
        if(n%2 == 0){
            n = n/2;
        }
        //n is odd
        else if(n&1){
            n = n*3+1;

        }
    }

    


    return 0;
}