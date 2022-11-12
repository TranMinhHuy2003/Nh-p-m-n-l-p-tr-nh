#include <iostream>
#include <string>
using namespace std;

struct Hocsinh {
    string ten;
    int toan;
    int van;
    float trungbinh;
};
typedef struct Hocsinh HOCSINH;

void Nhap (HOCSINH &hs) {
    do {
        cout <<"\nNhap ten hoc sinh: ";
        getline (cin,hs.ten);
        if (hs.ten.length()>30) {
            cout <<"\nTen hoc sinh khong hop le, vui long nhap lai!";
        }
    } while (hs.ten.length()>30);

    do {
        cout <<"\nNhap diem toan: ";
        cin>>hs.toan;
        if (hs.toan<0||hs.toan>10) {
            cout <<"\nDiem toan khong hop le, vui long nhap lai!";
        }
    } while (hs.toan<0||hs.toan>10);

    do {
        cout <<"\nNhap diem van: ";
        cin>>hs.van;
        if (hs.van<0||hs.van>10) {
            cout <<"\nDiem van khong hop le, vui long nhap lai!";
        }
    } while (hs.van<0||hs.van>10);

    do {
        cout <<"\nNhap diem trung binh: ";
        cin>>hs.trungbinh;
        if (hs.trungbinh<0||hs.trungbinh>10) {
            cout <<"\nDiem trung binh khong hop le, vui long nhap lai!";
        }
    } while (hs.trungbinh<0||hs.trungbinh>10);
}

void Xuat (HOCSINH hs) {
    cout <<"\nTen hoc sinh: " <<hs.ten;
    cout <<"\nDiem toan: " <<hs.toan;
    cout <<"\nDiem van: " << hs.van;
    cout <<"\nDiem trung binh: " << hs.trungbinh;
}

int main () {
    HOCSINH hs;
    cout <<"\n\n\t\t=====NHAP THONG TIN HOC SINH=====\n";
    Nhap(hs);
    cout <<"\n\n\t\t=====XUAT THONG TIN HOC SINH=====\n";
    Xuat(hs);
    system ("pause");
    system("cls");
    return 0;
}
