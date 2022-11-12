#include <iostream>
using namespace std;

int main () {
    int gio,phut,giay;
    cout <<"\nNhap gio: ";
    cin >>gio;
    cout <<"\nNhap phut: ";
    cin >>phut;
    cout <<"\nNhap giay: ";
    cin >>giay;
    cout <<"\nTong so giay la: "<<gio*3600+phut*60+giay;
    system("pause");
    system("cls");
    return 0;
}