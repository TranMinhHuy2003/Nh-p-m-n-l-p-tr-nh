#include <iostream>
using namespace std;

int main () {
    int n;
    do {
        cout <<"\nNhap n: ";
        cin >>n;
        if (n<10 || n>99) {
            cout <<"\nSo n khong hop le, vui long nhap lai!";
        }
    } while (n<10 || n>99);
    int S;
    S=n/10+n%10;
    cout <<"\nTong cac chu so cua n la: " <<S;
    system("pause");
    system("cls");
    return 0;
}