#include<iostream>
using namespace std;
class CircularQueue{
    public:
    int size;
    int *arr;
    int front;
    int rear;

    CircularQueue(int size){
        this->size = size;
        arr = new int[size];
        front = -1;
        rear = -1;

    }

    void push(int data){
        //Queue full
        if (front == 0 && rear == size-1)
        {
           cout<<"Queue is full, Cannot insert"<<endl;
        }

        //Single element case  --> first element
        else if (front == -1)
        {
            front = rear = 0;
            arr[rear] = data;
        }

        //circular nature
        else if (rear == size-1 && front != 0)
        {
            rear = 0;
            arr[rear] = data;
        }
        
        //normal flow
        else{
            rear++;
            arr[rear] = data;
        }
    }


    void pop(){
        //check empty
        if (front == -1)
        {
            cout<<"Queue is empty, Cannot pop"<<endl;
        }

        //single element removal
        else if (front == rear)
        {
            arr[front] = -1;
            front = -1;
            rear = -1;
        }
        

        //circular nature
        else if (front == size-1)
        {
            front = 0;
        }
        

        //normal flow 
        else{
            front++;
        }
        
    }
};



int main(){


    return 0;
}