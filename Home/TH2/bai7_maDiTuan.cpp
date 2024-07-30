
#include <iostream>
using namespace std;
#define MAX_SIZE 20

int n;
int H[MAX_SIZE][MAX_SIZE]; 
int x, y; 
int u, v; 
int a[8] = {2, 1, -1, -2, -2, -1, 1, 2}; 
int b[8] = {1, 2, 2, 1, -1, -2, -2, -1};


int isAcceptable(int u, int v) {
    return (u >= 0 && u < n && v >= 0 && v < n && H[u][v] == 0);
}


void markVisited(int u, int v, int k) {
    H[u][v] = k;
}


void printPath(int k) {
    printf("Step %d: (%d, %d)\n", k, x, y);
    x = u;
    y = v;
}


int knightTour(int k) {
    if (k == n * n) {
        return 1; 
    }

    for (int i = 0; i < 8; i++) {
        u = x + a[i];
        v = y + b[i];
        if (isAcceptable(u, v)) {
            markVisited(u, v, k + 1);
            printPath(k + 1);
            if (knightTour(k + 1)) {
                return 1;
            }
            markVisited(u, v, 0); 
        }
    }

    return 0; 
}

int main() {
    cout<<"Nhap kich thuoc ban co: ";
   cin>>n;

    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            H[i][j] = 0;
        }
    }

    x = 0;
    y = 0;
    markVisited(x, y, 1);

    if (knightTour(1)) {
        cout<<"tim thanh cong";
    } else {
        printf("Khong di chuyen duoc them\n");
    }

    return 0;
}
