#include<iostream>
using namespace std;
class stack{
    public:
    int*arr;
    int size;
    int top1;
    int top2;

    stack(int data){
        arr = new int[size];
        this->size = size;
        top1 = -1;
        top2 = -1;
    }



    void push1(int data){
        if(top2 - top1 == 1){
            //space not available
            cout<<"Stack Overflow."<<endl;
        }
        else{
            //space available
            top1++;  //top ++ cause we are moving from l to r
            arr[top1] = data;
        }
    }


    void pop1(){
        if(top1 == -1){
            cout<<"Underflow in stack1."<<endl;
        }
        else{
            //no need to delete, top ko piche le jao
            top1--;
        }

    }


    void push2(int data){
        if(top2 - top1 == 1){
            //space not available
            cout<<"Stack Overflow."<<endl;
        }
        else{
            //space available
            top2--;  //top ++ cause we are moving from l to r
            arr[top2] = data;
        }
        
    }
    void pop2(){
        if(top2 == -1){
            cout<<"Underflow in stack2."<<endl;
        }
        else{
            //no need to delete, top ko piche le jao
            top1++;
        }
        
    }

};
int main(){
    stack s(10);

    s.push1(10);
    s.push1(20);
    s.push1(30);
    s.push1(40);
    s.push1(50);
    s.push1(60);



    s.push2(100);
    s.push2(200);
    s.push2(300);
    s.push2(400);
    s.push2(500);
    s.push2(600);
    


    return 0;
}