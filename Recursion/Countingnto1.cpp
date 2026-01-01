#include<iostream>
using namespace std;
void reverseCounting(int n){
    //base case
    if(n == 0){
        return;
    }
    cout<<n<<" ";

    reverseCounting(n-1);
}

int main(){
    int n;
    cout<<"Enter Number: "<<endl;
    cin>>n;

   reverseCounting(n);

    return 0;
}