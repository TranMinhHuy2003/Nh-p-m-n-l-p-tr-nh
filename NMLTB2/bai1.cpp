#include <iostream>
using namespace std;

int sosanh (int a, int b) {
    if (a<b) {
        return a;
    } else {
        return b;
    }
}

int main () {
    int a,b,c,d;
    cout <<"\nNhap a: ";
    cin >> a;
    cout <<"\nNhap b: ";
    cin >> b;
    cout <<"\nNhap c: ";
    cin >> c;
    cout <<"\nNhap d: ";
    cin >> d;
    cout <<"\nSo nho nhat la: " <<sosanh(sosanh(a,b),sosanh(c,d));
    system("pause");
    system("cls");
    return 0;
}