#include <iostream>
#include <cmath>
using namespace std;

struct sophuc {
    float phanthuc;
    float phanao;
};
typedef sophuc SOPHUC;

void Nhap (SOPHUC &sp) {
    cout <<"\nNhap phan thuc: ";
    cin>>sp.phanthuc;
    cout <<"\nNhap phan ao: ";
    cin>>sp.phanao;
}

void Xuat (SOPHUC sp) {
    if (sp.phanao>0) {
        cout <<"z = "<<sp.phanthuc<<"+"<<sp.phanao<<"i";
    } else if (sp.phanao==0) {
        cout <<"z = "<<sp.phanthuc;
    } else {
        cout <<"z = "<<sp.phanthuc<<sp.phanao<<"i";
    }
}

SOPHUC Tong (SOPHUC a, SOPHUC b) {
    SOPHUC ketqua;
    ketqua.phanthuc=a.phanthuc+b.phanthuc;
    ketqua.phanao=a.phanao+b.phanao;
    return ketqua;
}

SOPHUC Hieu (SOPHUC a, SOPHUC b) {
    SOPHUC ketqua;
    ketqua.phanthuc=a.phanthuc-b.phanthuc;
    ketqua.phanao=a.phanao-b.phanao;
    return ketqua;
}

SOPHUC Tich (SOPHUC a, SOPHUC b) {
    SOPHUC ketqua;
    ketqua.phanthuc=a.phanthuc*b.phanthuc-a.phanao*b.phanao;
    ketqua.phanao=a.phanthuc*b.phanao-b.phanthuc*a.phanao;
    return ketqua;
}

SOPHUC Thuong (SOPHUC a, SOPHUC b) {
    SOPHUC ketqua;
    ketqua.phanthuc=(a.phanthuc*b.phanthuc+a.phanao*b.phanao)/(a.phanthuc*a.phanthuc+a.phanao*a.phanao);
    ketqua.phanao=(a.phanthuc*b.phanao-b.phanthuc*a.phanao)/(a.phanthuc*a.phanthuc+a.phanao*a.phanao);
    return ketqua;
}

float Module (SOPHUC a) {
    return pow((a.phanthuc*a.phanthuc+a.phanao*a.phanao),0.5);
}

float Argument (SOPHUC a) {
    return atan(a.phanao/a.phanthuc);
}

void XuLy (SOPHUC sp, SOPHUC a, SOPHUC b) {
    Nhap(sp);
    Xuat(sp);
    cout <<"\nNhap so phuc a: ";
    Nhap(a);
    cout <<"\nNhap so phuc b: ";
    Nhap(b);
    SOPHUC k=Tong(a,b);
    SOPHUC m=Hieu(a,b);
    SOPHUC n=Tich(a,b);
    SOPHUC o=Thuong(a,b);
    cout <<"\nTong 2 so phuc a va b la: ";
    Xuat(k);
    cout <<"\nHieu 2 so phuc a va b la: ";
    Xuat(m);
    cout <<"\nTich 2 so phuc a va b la: ";
    Xuat(n);
    cout <<"\nThuong 2 so phuc a va b (b/a) la: ";
    Xuat(o);
    cout <<"\nModule cua a la: |a|="<<Module(a);
    cout <<"\nArgument cua a la: Arg(a)="<<Argument(a)*180/3.141592654<<"(do)";
}

int main () {
    SOPHUC sp,a,b;
    XuLy(sp,a,b);
    system("pause");
    system("cls");
    return 0;
}