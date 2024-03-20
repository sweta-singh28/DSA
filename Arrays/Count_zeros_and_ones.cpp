#include<iostream>
using namespace std;

int main(){

    int arr[] = {0,1,1,1,0,1,0,0,1,0,1,1,0,1,1,0,1};
    int size = 17;

    int numZero;
    int numOne;

    for (int i=0; i < size; i++)
    {
        if (arr[i] == 0)
        {
            numZero++;
         
        }
        if (arr[i] == 1)
        {
            numOne++;
        }
        
        
    }

    cout<<"Number of zeros: "<<numZero<<endl;
    cout<<"Number of ones: "<<numOne<<endl;
    
    return 0;

}