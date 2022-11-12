#include <iostream>
using namespace std;

int main () {
    float a,b,c,d;
    do {
        cout <<"\nNhap canh hinh vuong: ";
        cin >>a;
        if (a<0) {
            cout <<"\nCanh khong hop le, vui long nhap lai!";
        }
    } while (a<0);
    cout <<"\nChu vi hinh vuong: "<<a*4;
    cout <<"\nDien tich hinh vuong: "<<a*a;

    do {
        cout <<"\n\n\nNhap chieu rong hinh chu nhat: ";
        cin >>b;
        if (b<0) {
            cout <<"\nCanh khong hop le, vui long nhap lai!";
        }
    } while (b<0);
    do {
        cout <<"\nNhap chieu dai hinh chu nhat: ";
        cin >>c;
        if (c<0) {
            cout <<"\nCanh khong hop le, vui long nhap lai!";
        }
    } while (c<0);
    cout <<"\nChu vi hinh chu nhat: "<<2*(b+c);
    cout <<"\nDien tich hinh chu nhat: "<<b*c;

    do {
        cout <<"\n\n\nNhap ban kinh hinh tron: ";
        cin >>d;
        if (d<0) {
            cout <<"\nBan kinh khong hop le, vui long nhap lai!";
        }
    } while (d<0);
    cout <<"\nChu vi hinh tron: "<<2*3.14*d;
    cout <<"\nDien tich hinh tron: "<<d*d*3.14;
    system("pause");
    system("cls");
    return 0;
}