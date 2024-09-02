#include<iostream>
#include<vector>
using namespace std;


void printSolution(vector<vector<char>> &board, int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<board[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl<<endl;
}


bool isSafe(int row, int col, vector<vector<char>> &board, int n){
    //check if we can place the  queen at the current cell[row][col] or not
    int i = row;
    int j = col;

    //check row
    while(j>=0){
        if(board[i][j] == 'Q'){
            return false;
        }
        j--;
    }

    //check upper left diagonal
    i = row;
    j=col;
    while(i>=0 && j>=0){
        if(board[i][j] == 'Q'){
            return false;
        }
        i--;
        j--;
    }

    //check button left
    i=row;
    j=col;
    while(i<n && j>=0){
        if(board[i][j] == 'Q'){
            return false;
        }
        i++;
        j--;
    }

    return true;
}

void solve(vector<vector<char>> &board, int col, int n){
    //base case
    if(col>=n){
        printSolution(board, n);
        return;
    }

    //Solve 1 case (rest recursion will handle)
    for(int row=0; row<n; row++){
        if(isSafe(row, col, board, n)){
            //place the queen
            board[row][col] = 'Q';    //1 means queen is placed
            //RR
            solve(board, col+1, n);
            //backtracking
            board[row][col] = '-';     //0 means teh cell is empty
        }
    }

}

int main(){
    int n = 4;

    vector<vector<char>> board(n, vector<char>(n,'-'));
    int col = 0;

    //0---> empty cell
    //1---> queen at the cell

    solve(board, col, n);

    return 0;
}