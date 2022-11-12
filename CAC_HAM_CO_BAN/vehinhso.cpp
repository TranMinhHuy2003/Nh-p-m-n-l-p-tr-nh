#include <iostream>
using namespace std;

int main () {
    int n,m;
    do {
        cout <<"\nNhap m: ";
        cin >>m;
        cout <<"\nNhap n: ";
        cin>> n;
        if (m<=0 || n<=0) {
            cout <<"\nGia tri khong hop le, vui long nhap lai!";
        }
    } while (m<=0 || n<=0);
    for (int i=1; i<=m; i++) {
        for (int j=1; j<=n; j++) {
            cout <<j<<" ";
        }
        cout <<endl;
    }
    system("pause");
    system("cls");
    return 0;
}