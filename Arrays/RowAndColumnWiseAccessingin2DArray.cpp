#include<iostream>
using namespace std;

int main(){

    int brr[3][3] = {
        {1,4,3},
        {7,5,3},
        {8,2,9}}; 

        cout<<"Printing row wise: "<<endl;

        //row-wise print 
        //Outer loop
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cout<<brr[i][j]<<" ";
            }
            cout<<endl;
            
        }

        cout<<"Printing Column wise: "<<endl;

        //Outer loop
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cout<<brr[j][i]<<" ";
            }
            cout<<endl;
            
        }

        
    return 0;
}