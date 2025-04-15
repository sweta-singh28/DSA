#include<iostream>
using namespace std;

int CountDigits(int n){
    int count = 0;

    while(n>0){
        count += 1;

        n = n/10;
    }
    return count;


}
int main(){
    int n = 14693;
    cout<<"The number is: "<<n<<endl;
    
    
    int digits = CountDigits(n);
    cout<<"The number is: "<<digits<<endl;





    return 0;
}