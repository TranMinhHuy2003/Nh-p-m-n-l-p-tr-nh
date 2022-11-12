#include <iostream>
using namespace std;

void Nhap (int &n) {
    do {
        cout <<"\nNhap n: ";
        cin >> n;
        if (n<=0) {
            cout <<"\nn khong hop le, vui long nhap lai!";
        }
    } while (n<=0);
}
 
int fibonacci(int n) {
    int f0;
    int f1 = 1;
    int fn = 1;

    if (n == 1) {
        return n;
    } else {
        for (int i = 2; i < n; i++) {
            f0 = f1;
            f1 = fn;
            fn = f0 + f1;
        }
    }
    return fn;
}

void Xuat (int n) {
    cout << n <<" so dau tien cua day so Fibonacci: ";
    for (int i = 1; i <= n; i++) {
        cout << fibonacci(i) << " ";
    }
}
 
int main() {
    int n;
    Nhap(n);
    Xuat(n);
    system("pause");
    system("cls");
    return 0;
}