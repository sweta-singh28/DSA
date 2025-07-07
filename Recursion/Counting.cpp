#include<iostream>
using namespace std;
int counting(int n){
    // base case
    if(n == 0){
        return 0;
    }

    //printing
    cout<<n<<endl;


    //recursive call
    return counting(n-1);


}

int main(){
    int n;
    cout<<"Enter the value of n: "<<endl;
    cin>>n;

    cout<<endl;

    counting(n);
  

    



    return 0;
}
