#include<iostream>
#include<vector>
#include<string>
using namespace std;
bool isSafe(int i, int j, int rows, int cols, int arr[][3], vector<vector<bool> >&visited){
    //three conditions which decides either it safe or not
    if( ((i>=0 && i<rows) && (j>=0 && j<cols)) && (arr[i][j] == 1) && (visited[i][j] ==false)){
        return true;
    }
    else{
        return false;
    }
}

void solveMaze(int arr[3][3], int rows, int cols, int i, int j, vector<vector<bool> >&visited, vector<string>&path, string output ){
//Base case
if(i == rows-1 && j == cols-1){
    //answer found
    //store the value of output in path
    path.push_back(output);
    return;
}

//Solve 1 case for down----> (i+1, j)
if(isSafe(i+1, j, rows, cols, arr, visited)){
    visited[i+1][j] = true;
    //RR
    solveMaze(arr, rows, cols, i+1, j,visited, path, output + 'D');
    //Backtracking
    visited[i+1][j] = false;
}

//Solve 1 case for left---->  (i, j-1)
if(isSafe(i, j-1, rows, cols, arr, visited)){
    visited[i][j-1] = true;
    //RR
    solveMaze(arr, rows, cols, i, j-1, visited, path, output + 'L');
    //Backtracking
    visited[i][j-1] = false;
}

//Solve 1 case for right---->  (i, j+1)
if(isSafe(i, j+1,rows,cols,arr,visited)){
    visited[i][j+1] = true;
    //RR
    solveMaze(arr, rows, cols, i, j+1, visited, path, output + 'R');
    //Backtracking
    visited[i][j+1] = false;
}

//Solve 1 case for up ------>   (i-1, j)
if(isSafe(i-1, j,rows,cols,arr,visited)){
    visited[i-1][j] = true;
    //RR
    solveMaze(arr, rows, cols, i-1, j, visited, path, output + 'U');
    //Backtracking
    visited[i-1][j] = false;
}


}

int main(){
    int maze[3][3]= {{1,0,0}, 
                     {1,1,0},
                     {1,1,1}};

    if(maze[0][0] == 0){
        cout<<"No path Exists"<<endl;
        return 0;
    }                 

                 
    int rows = 3;
    int cols = 3;
    
    vector<vector<bool> >visited(rows, vector<bool>(cols, false));
    
    //mark true to the value of the source (src)
     
    vector<string>path;
    
    string output = "";
    
    solveMaze(maze, rows, cols, 0, 0, visited, path, output);
    
                 
                 
    cout<<"Printing the results: "<<endl;

    for(auto i: path){
        cout<<i<<" ";
    }             
    cout<<endl;
    
    
    if(path.size() == 0){
        cout<<"No path Exists."<<endl;
    }
    
    
    return 0;
}