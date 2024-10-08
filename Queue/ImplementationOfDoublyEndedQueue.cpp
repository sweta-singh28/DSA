#include<iostream>
using namespace std;

class Deque{
    public:
    int *arr;
    int size;
    int front;
    int rear;

    Deque(int size){
        this->size = size;
        arr = new int [size];
        front = -1;
        rear = -1;

    }

    void pushRear(int data){
        //Queue full
        if (front == 0 && rear == size-1)
        {
           cout<<"Queue is full, Cannot insert"<<endl;
           return;
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



    void pushFront(int data){
        //Queue full
        if (front == 0 && rear == size-1)
        {
           cout<<"Queue is full, Cannot insert"<<endl;
           return;
        }

        //Single element case  --> first element
        else if (front == -1)
        {
            front = rear = 0;
            arr[front] = data;
        }

        //circular nature
        else if (front == 0 && rear != size-1)
        {
            front = size - 1;
            arr[front] = data;
        }
        
        //normal flow
        else{
            front--;
            arr[front] = data;
        }
    }


    void popFront(){
         //check empty
        if (front == -1)
        {
            cout<<"Queue is empty, Cannot pop"<<endl;
            return;
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
    

    void popRear(){
          //check empty
        if (front == -1)
        {
            cout<<"Queue is empty, Cannot pop"<<endl;
            return;
        }

        //single element removal
        else if (front == rear)
        {
            arr[front] = -1;
            front = -1;
            rear = -1;
        }
        

        //circular nature
        else if (rear == 0)
        {
            rear = size-1;
        }
        

        //normal flow 
        else{
            rear--;
        }
    }
    


     // Function to display the deque
    void display(){
        if (front == -1) {
            cout << "Queue is empty" << endl;
            return;
        }

        if (rear >= front){
            for (int i = front; i <= rear; i++)
                cout << arr[i] << " ";
        } else {
            for (int i = front; i < size; i++)
                cout << arr[i] << " ";
            for (int i = 0; i <= rear; i++)
                cout << arr[i] << " ";
        }
        cout << endl;
    }
};


int main(){
    Deque dq(10);
    
    // Test push and display
    dq.pushRear(5);
    dq.pushRear(10);
    dq.pushFront(15);
    dq.display();
    
    dq.popFront();
    dq.display();
    
    dq.popRear();
    dq.display();
    
    
    

    return 0;
}