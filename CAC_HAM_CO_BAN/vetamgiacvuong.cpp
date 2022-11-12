#include <iostream>
using namespace std;

int main () {
    int n;
    do {
        cout <<"\nNhap n: ";
        cin >> n;
        if (n<=0) {
            cout <<"\nGia tri khong hop le, vui long nhap lai!";
        }
    } while (n<=0);
    for (int i=1; i<=n; i++) {
        for (int j=1; j<=i; j++) {
            cout <<" * "; 
        }
        cout <<endl;
    }
    system("pause");
    system("cls");
    return 0;
}