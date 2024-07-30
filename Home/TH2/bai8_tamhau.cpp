
#include<iostream>
using namespace std;
#define N 8


int board[N];

bool isSafe(int row, int col) {
    
    for (int i = 0; i < row; i++) {
        if (board[i] == col) {
            return false;
        }
    }

    
    for (int i = 0; i < row; i++) {
        if (board[i] == col - (row - i)) {
            return false;
        }
    }

    
    for (int i = 0; i < row; i++) {
        if (board[i] == col + (row - i)) {
            return false;
        }
    }

    return true;
}

void printBoard() {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (board[i] == j) {
                cout<<"Q ";
            } else {
                cout<<". ";
            }
        }
        cout<<endl;
    }
    cout<<endl;
}

bool solveNQueens(int row) {
    if (row == N) {
        printBoard();
        return true;
    }

    for (int col = 0; col < N; col++) {
        if (isSafe(row, col)) {
            board[row] = col;
            if (solveNQueens(row + 1)) {
                return true;
            }
            board[row] = -1;
        }
    }

    return false;
}

int main() {
	
    for (int i = 0; i < N; i++) {
        board[i] = -1;
    }

    solveNQueens(0);

    return 0;
}
