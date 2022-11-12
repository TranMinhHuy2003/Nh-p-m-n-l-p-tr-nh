#include <iostream>
using namespace std;

int main () {
    int a,b;
    do {
        cout <<"\nNhap a: ";
        cin >>a;
        if (a<=0) {
            cout <<"\nSo a khong hop le, vui long nhap lai!";
        }
    } while (a<=0);
    do {
        cout <<"\nNhap b: ";
        cin >>b;
        if (b<=0) {
            cout <<"\nSo b khong hop le, vui long nhap lai!";
        }
    } while (b<=0);

    cout <<"\nKet qua chia lay phan nguyen cua a va b: "<<a/b;
    cout <<"\nKet qua chia lay phan du cua a va b: "<<a%b;
    system("pause");
    system("cls");
    return 0;
}