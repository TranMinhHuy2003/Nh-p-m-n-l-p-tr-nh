#include <iostream>
using namespace std;
 
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
 
int main() {
    int n;
    cout <<"\nNhap n: ";
    cin >> n;
    if (n<=0) {
        cout <<"\nKhong tim duoc day Fibonacci cua " <<n;
    } else {
        cout << n <<" so dau tien cua day so Fibonacci: ";
        for (int i = 1; i <= n; i++) {
            cout << fibonacci(i) << " ";
        }   
    }
    system("pause");
    system("cls");
    return 0;
}