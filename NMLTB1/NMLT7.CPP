#include <iostream>
using namespace std;

int main () {
    float r;
    do {
        cout <<"\nNhap ban kinh hinh tron: ";
        cin >>r;
        if (r<=0) {
            cout <<"\nGia tri r khong hop le, vui long nhap lai!";
        }   
    } while (r<=0);
    cout <<"\nChu vi hinh tron la: "<<2*3.14*r;
    cout <<"\nDien tich hinh tron la: "<<3.14*r*r;
    system("pause");
    system("cls");
    return 0;
}