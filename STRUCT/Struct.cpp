#include <iostream>
#include <string>
using namespace std;

struct Sinhvien {
    string Hoten;
    string mssv;
    float diem;
};
typedef struct Sinhvien SV

void Nhapthongtin1sv (SV &sv) {
    cout <<"Nhap ho va ten sinh vien: ";
    getline(cin, sv.Hoten);
    cout <<"Nhap MSSV: ";
    getline(cin, sv.mssv);
    cout <<"Nhap diem: ";
    cin >> sv.diem;
    cin.ignore();
}

void Xuatthongtin1sv (SV &sv) {
    cout <<"Ho ten sinh vien: "<<sv.Hoten<<endl;
    cout <<"MSSV la: "<<sv.mssv<<endl;
    cout <<"Diem cua sinh vien " <<sv.Hoten<<" la: "<<sv.diem<<endl;
}

int main () {
    Sinhvien x1;
    Sinhvien x2;

    cout <<"\n\n\t\tNHAP THONG TIN SINH VIEN 1\n";
    Nhapthongtin1sv(x1);
    cout <<"\n\n\t\tNHAP THONG TIN SINH VIEN 2\n";
    Nhapthongtin1sv(x2);
    cout <<"\n\n\t\tTHONG TIN SINH VIEN 1\n";
    Xuatthongtin1sv(x1);
    cout <<"\n\n\t\tTHONG TIN SINH VIEN 2\n";
    Xuatthongtin1sv(x2);

    system("pause");
    system("cls");
    return 0;
}
