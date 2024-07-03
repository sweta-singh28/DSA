#include <iostream>
using namespace std;
int main() {
    int* ptr = 0;
    int a = 10;
    *ptr = a; //segmentation fault      *(0*000)
    cout<<*ptr<<endl;
    
    


    return 0;
}