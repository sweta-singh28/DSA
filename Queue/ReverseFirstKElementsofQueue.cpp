#include<iostream>
#include<queue>
#include<stack>
using namespace std;

void reverseK(queue<int>&q, int k){
    //stepA: Queue-->k elements--->stack
    stack<int>s;
    int count = 0;
    int n = q.size();

    //edge case
    if (k == 0 || k > n)
    {
        return;
    }
    
     
     while (!q.empty())
     {
        int temp = q.front();
        q.pop();
        s.push(temp);
        count++;

        if (count == k)
        {
            break;
        }
     }


        //stepB---> stack to queue
        while (!s.empty())
        {
            int temp = s.top();
            s.pop();
            q.push(temp);
        }



        //stepC:Push n-k element from q front to q back
        count = 0;
        while (!q.empty() && n-k != 0) 
        {
            int temp = q.front();
            q.pop();
            q.push(temp);
            count++;


            if (count == n-k)
            {
                break;
            }
            
        }
    }

int main(){
    queue<int>q;


    q.push(3);
    q.push(6);
    q.push(4);
    q.push(23);
    q.push(5);


    reverseK(q, 3);

    cout<<"Printing the reversed (till k) queue: "<<endl;
    while (!q.empty())
    {
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;


    return 0;
}