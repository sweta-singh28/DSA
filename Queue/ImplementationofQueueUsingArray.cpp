#include<iostream>
using namespace std;
class Queue{
    public:
    int* arr;
    int front;
    int rear;
    int size;

    Queue(int size){
        this->size = size;
        arr = new int[size];
        front = 0;
        rear = 0;
    }


    void push(int data){
        if(rear == size){
            cout<<"Queue is empty"<<endl;
        }
        else{
            //insert data
            arr[rear] = data;
            rear++;
        }
    }

    void pop(){
        if(front == rear){
            cout<<"Queue is empty cant pop"<<endl;
        }
        else{
            //cannot remove it so make it with -1
            arr[front] = -1;
            front++;

            //if front nd rear are at equal position then start from the 0 index again
            if(front == rear){
                front = 0;
                rear = 0;
            }
        }
    }

    int getFront(){
        if(front == rear){
            cout<<"Queue is empty"<<endl;
        }
        else{
            return arr[front];
        }
    }

    bool isEmpty(){
        if(front == rear){
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

    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);

    //pop
    q.pop();

    //get the front element
    cout<<"The front element is: "<<q.getFront()<<endl;

    //get size
    cout<<"The size of the queue is: "<<q.getSize()<<endl;

    //check if it is empty
    if(q.isEmpty()){
        cout<<"Queue is empty"<<endl;
    }
    else{
        cout<<"Queue is not empty"<<endl;
    }










    return 0;
}