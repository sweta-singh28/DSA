#include<iostream>
using namespace std;
class CircularQueue{
    public:
    int size;
    int *arr;
    int front;
    int rear;

    //constructor
    CircularQueue(int size){
        this->size = size;
        front = -1;
        rear = -1;
        arr = new int[size];
    }

    void push(int data){
        //Queue full
        if(front == 0 && rear == size-1){
            cout<<"queue is full, cannot insert"<<endl;
        }

        //Single element case--> insert first element 
        else if(front -1){
            //we want to insert first element so we fill first bring the rear nd front at 0 then we will insert element
            front = rear = 0;
            arr[rear] = data;
        }

        //circular nature establishment 
        //first check if the rear is at the last index or not and front is not present at first index(oth index)... if yes then point the rear at 0th index nd then insert data
        else if(rear == size-1 && front != 0){
            rear = 0;
            arr[rear] = data;
        }

        //normal flow-->normal insertion
        rear++;
        arr[rear] = data;
    }

    void pop(){
        //q is empty
        if(front == -1 && rear == -1){
            cout<<"Queue is empty, cannot pop"<<endl;
        }
        
        //single element pop
        else if(front == rear){ //both front nd rear will be pointing at same element 
            arr[front] = -1;
            //after pop the queue is empty so we will point the front nd rear at starting (1-)
            front = -1;
            rear = -1;
        }

        //circular nature establishment
        else if(front = size-1){
            front = -1;

        }
        

        //normal pop
        else{
            front++;
        }
    }



};

int main(){

    return 0;
}