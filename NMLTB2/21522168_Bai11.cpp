#include <iostream>
using namespace std;

int main () {
    float km;
    int tien=0;
    do {
        cout <<"\nNhap so km da di: ";
        cin >>km;
        if (km<0) {
            cout <<"So km khong hop le, vui long nhap lai!";
        }
    } while (km<0);
    if (km<=1) {
        tien=km*15000;
    } else if (1<km&&km<=5) {
        tien=(km-1)*13500+15000;
    } else if (5<km&&km<=120) {
        tien=69000+(km-5)*11000;
    } else if (km>120) {
        tien=(69000+(km-5)*11000)*90/100;
    }
    cout <<"\nTien cuoc taxi: " <<tien<<" dong";

    system("pause");
    system("cls");
    return 0;
}