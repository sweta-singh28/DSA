#include<iostream>
using namespace std;

class Queue{
    public:
    int *arr;
    int size;
    int front;
    int rear;
    int data;


    Queue(int size){
        this->data = data;
        arr = new int[size];
        front = 0;
        rear = 0;
    }


    
    //pushing element in queue
    void push(int data){
        if (rear == size)
        {
            cout<<"Queue is full"<<endl;
        }
        else{
            arr[rear] = data;
            rear++;
        }
        
    }


    
    //Popping out element from queue   (mark -1)
    void pop(){
        if (front == rear)
        {
            cout<<"Queue is empty"<<endl;
        }
        else{
            arr[front] = -1;
            front++;
            if (front == rear)   //front n rear equal then start from 0 again to reduce memory wastage
            {
                front = 0;
                rear = 0;
            }
            
        }
        
    }


    //getting the front element
    int getFront(){
        if (front == rear)
        {
            cout<<"Queue is empty"<<endl;
        }
        else{
            return arr[front];
        }
        
    }
 

   //check if queue is empty or not
    bool isEmpty(){
        if (front == rear)
        {
            return true;
        }
        else{
            return false;
        }
    }


    int getSize(){
    return rear - front;
    }


};




int main(){
    Queue q(10);

    q.push(5);
    q.push(10);
    q.push(15);
    q.push(20);
    q.push(25);
    q.push(30);

    cout<<"Size of queue is: "<<q.getSize()<<endl;

    q.pop();

    cout<<"Size of queue is: "<<q.getSize()<<endl;

    cout<<"Front element is: "<<q.getFront()<<endl;

    if (q.isEmpty())
    {
        cout<<"Queue is empty."<<endl;
    }
    else{
        cout<<"Queue is not empty"<<endl;
    }
    

    return 0;
}