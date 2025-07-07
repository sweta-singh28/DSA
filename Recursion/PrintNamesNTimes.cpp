#include<iostream>
using namespace std;

void printName(int n){
    
    //base case
    if(n==0){
        return;
    }

    //processing
    cout<<"Swetaa"<<endl;

    //recursive call
    printName(n-1);

}
int main(){
    int n,i;
    cout<<"Enter the number of time you want to print your name: "<<endl;
    cin>>n;

    printName(n);

    return 0;
}