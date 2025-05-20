#include<iostream>
using namespace std;
void Print1toN(int n){
    //base case
    if(n == 0){
        return;
    }

    //RR
    Print1toN(n-1);

    //printing
    cout<<n<<endl;

}
int main(){
    int n;
    cout<<"Enter Number: ";
    cin>>n;

    cout<<"Printing the Numbers: "<<endl;;
    Print1toN(n);


                                                          
    return 0;
}