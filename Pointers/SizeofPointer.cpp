#include<iostream>
using namespace std;

int main(){
    int a = 5;
    int* p = &a;
    cout<<sizeof(p)<<endl;


    char ch = 'b';
    char* c = &ch;
    cout<<sizeof(c)<<endl;

    
    double dtr = 5.05;
    double* d = &dtr;
    cout<<sizeof(d)<<endl;


    
    return 0;
}