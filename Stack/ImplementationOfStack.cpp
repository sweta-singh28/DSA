#include<iostream>
using namespace std;
//creating own stack function

class Stack{
    public:
    
    int *arr;
    int top;
    int size;     //total size of array

    Stack(int size){
        arr = new int[size];
        this->size = size;
        top = -1;
    }

    void push(int data){
        if (size-top > 1)
        {
            //space available
            //insert
            top++;
            arr[top] = data;
        }
        else{
            //space not available
            cout<<"Stack Overflow."<<endl;
        }
    }

    void pop(){
        if (top == -1)
        {
            cout<<"Stack Underflow, Cant delete element"<<endl;
        }
        else{
            //stack is not empty
            top--;
        }
        
    }

    int getTop(){
        //Element at the top
        if (top == -1)
        {
            //stack empty
            cout<<"Stack Underflow, there is no element in stack"<<endl;
        }
        else{
            return arr[top];
        }
        

    }
 
    //return number of valid elements present in stack
    int getSize(){
        return top+1;

    }

    bool isEmpty(){
        if (top ==-1)
        {
            return true;
        }
        else{
            return false;
        }

    }

};

int main(){
    
    Stack S(10);

    //insertion
    S.push(10);
    S.push(20);
    S.push(30);
    S.push(40);
    
    //printing elements in stack
    while (!S.isEmpty())
    {
        cout<<S.getTop()<<" ";
        S.pop();
    }
    cout<<endl;

    cout<<"Size of stack: "<<S.getSize();




    return 0;
}