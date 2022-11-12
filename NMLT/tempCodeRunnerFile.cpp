#include <iostream>
#include <string>
using namespace std;
#define Max 50

struct Hocsinh {
    string ten;
};
typedef struct Hocsinh HOCSINH;

struct Lophoc {
    string tenlop;
    HOCSINH a[Max];
    int siso;
};
typedef struct Lophoc LOPHOC;

void Nhap (HOCSINH &hs) {
    do {
        getline (cin,hs.ten);
        if (hs.ten.length()>30) {
            cout <<"\nTen hoc sinh khong hop le, vui long nhap lai!";
        }
    } while (hs.ten.length()>30);
}

void Xuat (HOCSINH hs) {
    cout <<hs.ten;
}

void NhapLopHoc (LOPHOC &lh) {
    do {
        cout <<"\nNhap ten lop hoc: ";
        getline (cin,lh.tenlop);
        if (lh.tenlop.length()>30) {
            cout <<"\nTen lop hoc khong hop le, vui long nhap lai!";
        }
    } while (lh.tenlop.length()>30);

    do {
        cout <<"\nNhap si so: ";
        cin >>lh.siso;
        if (lh.siso<=0||lh.siso>Max) {
            cout <<"\nSi so lop hoc khong hop le, vui long nhap lai!";
        }
    } while (lh.siso<=0||lh.siso>Max);
    cin.ignore();

    cout <<"\n\n\t\t=====NHAP DANH SACH CAC HOC SINH=====\n";
    for (int i=0; i<lh.siso; i++) {
        cout <<"\nNhap ten hoc sinh thu "<<i+1<<": ";Nhap(lh.a[i]);
    }
}

void XuatLopHoc (LOPHOC lh) {
    cout <<"\nTen lop hoc: "<<lh.tenlop;
    cout <<"\nSi so: "<<lh.siso;
    cout <<"\n\n\t\t=====DANH SACH HOC SINH TRONG LOP=====\n";
    for (int i=0; i<lh.siso; i++) {
        cout <<i+1<<". ";
        Xuat(lh.a[i]);
        cout <<endl;
    }
}

int main () {
    HOCSINH hs;
    LOPHOC lh;
    cout <<"\n\n\t\t=====NHAP THONG TIN LOP HOC=====\n";
    NhapLopHoc(lh);
    cout <<"\n\n\t\t=====XUAT THONG TIN LOP HOC=====\n";
    XuatLopHoc(lh);
    system ("pause");
    system("cls");
    return 0;
}
