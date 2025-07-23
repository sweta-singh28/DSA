#include<iostream>
using namespace std;
//create a stack using array

class stack{
    public:

    int* arr;
    int top;   //it represents the index of top element
    int size;     //it respresents the total size of the array

    //create a constructor
    stack(int data){
        arr = new int[size];
        this->size = size;
        top = -1;

    }

    //create functions or methods

    void push(int data){
        if(size-top > 1){
            //space available
            top++;
            arr[top] = data;
        }
        else{
            //space not available
            cout<<"Stack overflow."<<endl;
        }

    }


    void pop(){
        if(top == -1){
            //stack is empty
            cout<<"Stack Underflow, cant delete element."<<endl;
        }
        else{
            //stack is not empty
            //no need to delete just top ko piche le jao 
            top--;
        }
    }


    int getTop(){
        if(top == -1){
            //stack is empty
            cout<<"There is no element in stack."<<endl;
        }
        else{
            //stack is not empty
            return arr[top];
        }
    }


    //it returns the number of valid elements present in stack
    int getSize(){
        //size = top+1
        return top+1;

    }


    bool empty(){
        if(top == -1){
            return true;
        }
        else{
            return false;
        }

    }



};

int main(){
    stack s(10);

    //insertion
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);

    //pop()
    s.pop();

    while(!s.empty()){
        cout<<s.getTop()<<" ";
        s.pop();
    }
    cout<<endl;


    s.push(1);
    s.push(1000);

    cout<<"The size of the stack is: "<<s.getSize();




    return 0;
}