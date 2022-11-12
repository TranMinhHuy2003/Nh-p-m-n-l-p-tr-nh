#include <iostream>
using namespace std;

void Nhap_hcn (int &a, int &b) {
    do {
        cout <<"\nNhap chieu dai hinh chu nhat: ";
        cin >>a;
        if (a<=0) {
            cout <<"\nChieu dai khong hop le, vui long nhap lai!";
        }
    } while (a<=0);
    do {
        cout <<"\nNhap chieu rong hinh chu nhat: ";
        cin >>b;
        if (b<=0) {
            cout <<"\nChieu rong khong hop le, vui long nhap lai!";
        }
    } while (b<=0);
}

int dientich (int a, int b) {
    return a*b;
}

int chuvi (int a, int b) {
    return (a+b)*2;
}

void ve (int a, int b) {
    for (int i=0; i<b; i++) {
        for (int j=0; j<a; j++) {
            cout <<" * "<<"   ";
        }
        cout <<endl;
    }
}

int main () {
    int a,b;
    Nhap_hcn(a,b);  
    cout <<"\nChu vi hinh chu nhat la: "<<chuvi(a,b);
    cout <<"\nDien tich hinh chu nhat la: "<<dientich(a,b)<<endl;
    ve(a,b);
    system("pause");
    system("cls");
    return 0;
}