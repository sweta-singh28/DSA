/*
1
2  3
4  5  6
7  8  9  10
11  12  13  14  15
16  17  18  19  20  21   */


#include<iostream>
using namespace std;
int main(){
    int n=1;


    for(int i=1; i<=6; i++){
        for(int j=1; j<=i; j++){
            cout<<n<<" ";
            n++;
        }
        cout<<endl;
    }
    return 0;
}