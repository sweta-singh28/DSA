//Without function

#include <iostream>
using namespace std;

int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int size = 12;

    int key = 111;
    
    bool flag = 0;
    //0-> not found
    //1->found

    for(int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            flag = 1;
            break;
        }
        
    }

    if (flag)
    {
        cout<<"Present"<<endl;
    }
    else{
        cout<<"Absent"<<endl;
    }
    
    
    return 0;
}