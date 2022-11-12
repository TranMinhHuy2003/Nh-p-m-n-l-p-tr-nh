#include <iostream>
using namespace std;

int main () {
    float thuong;
    int a,b;
    cout <<"\nNhap a: ";
    cin >>a;
    cout <<"\nNhap b: ";
    cin >>b;
    thuong = float(a)/b;
    cout <<"\nTong cua a va b la: "<<a+b;
    cout <<"\nHieu cua a va b la: "<<a-b;
    cout <<"\nTich cua a va b la: "<<a*b;
    cout <<"\nThuong cua a va b la: "<<thuong;
    system("pause");
    system("cls");
    return 0;
}