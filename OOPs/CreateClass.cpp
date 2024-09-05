#include<iostream>
using namespace std;
//creating class
//The size of empty class is 1 (Need to allocate minimum possible space or memory just to keep the track of it)
//if(size ----> 0 not possible to identify)
class Animal{
    int age; //size = 4
    int weight; //size = 4
    char ch;  //size = 1   
    //size should be 9 but it shows 12 whyyyyyy???
    //cause of padding and greedy alignment
    //padding---> Padding is the technique used by compilers to add extra bytes to structures for alignment purposes, optimizing memory access at the cost of increased memory usage.
    //greedy---> greedy alignment refers to a technique used to minimize padding in memory layout for class objects. 


};

int main(){
    cout<<"The size of Empty class is: "<<sizeof(Animal)<<endl;

    return 0;
}