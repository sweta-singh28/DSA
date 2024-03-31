#include<iostream>
#include<vector>
using namespace std;

void wavePrintMatrix(vector<vector<int> >v){
    int m=v.size();
    int n=v[0].size();

    for (int StartCol = 0; StartCol < n; StartCol++)
    {
        //even no. of column -> print top to buttom.
        if ((StartCol & 1) == 0)
        {
            for (int i = 0; i < m; i++)
            {
                cout<<v[i][StartCol]<<" ";
            }
            
        }
        else{
            //odd no. of column -> print buttom to top.
            for (int i = m-1; i >=0; i--)
            {
                cout<<v[i][StartCol]<<" ";
            }
            
        }
        
    }
    
}

int main(){

    vector<vector<int> >v{
        {1,3,5,7,9,2},
        {2,5,3,0,1,2,6,8},
        {1,0,8},
        {2,9,0,5,4,7,3},
        {9,3,5,6}

    };

    wavePrintMatrix(v);


    return 0;
}