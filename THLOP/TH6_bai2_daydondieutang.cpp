#include<iostream>
using namespace std;

void A3(int a[], int n, int L[], int T[]) {
    a[0] = -2147423222;
    a[n + 1] = 2147483647;
    L[n + 1] = 1;
    int jmax;
    for (int i = n; i >= 0; i--) {
        jmax = n + 1;
        for (int j = i + 1; j <= n; j++) {
            if (a[j] > a[i] && L[j] > L[jmax])
                jmax = j;
        }
        L[i] = L[jmax] + 1;
        T[i] = jmax;
    }
}

void result(int a[], int T[], int n) {
    int k = T[0];
    while (k != n + 1) {
        cout << a[k] << " ";
        k = T[k];
    }
}
int main() {
    int n = 12;
    int L[n + 2] = {0}, a[n + 2] = {0}, T[n + 2] = {0}; // Khởi tạo lại mảng
    int input[] = {0, 1, 6, 2, 3, 5, 7, 4, 7, 12, 7, 3, 2};

    for (int i = 0; i < n; i++) {
        a[i + 1] = input[i]; // Bắt đầu từ chỉ số 1
    }

    A3(a, n, L, T);
    
    // Kiểm tra kết quả
    cout << "Chuỗi con tăng dài nhất: ";
    result(a, T, n);
    cout << endl;

    return 0;
}