#include <iostream>
#include <string>
using namespace std;

struct luanvan {
    string ma_luan_van;
    string ten_luan_van;
    string hoten_sinhvien;
    string hoten_giaovien;
    int nam;
};
typedef struct luanvan LUANVAN;

void Nhap (LUANVAN &lv) {
    do {
        cout <<"\nNhap ma luan van: ";
        getline (cin,lv.ma_luan_van);
        if (lv.ma_luan_van.length()>10) {
            cout <<"\nMa luan van khong hop le, vui long nhap lai!";
        }
    } while (lv.ma_luan_van.length()>10);

    do {
        cout <<"\nNhap ten luan van: ";
        getline (cin,lv.ten_luan_van);
        if (lv.ten_luan_van.length()>100) {
            cout <<"\nTen luan van khong hop le, vui long nhap lai!";
        }
    } while (lv.ten_luan_van.length()>100);

    do {
        cout <<"\nNhap ho va ten sinh vien thuc hien: ";
        getline (cin,lv.hoten_sinhvien);
        if (lv.hoten_sinhvien.length()>30) {
            cout <<"\nHo ten sinh vien khong hop le, vui long nhap lai!";
        }
    } while (lv.hoten_sinhvien.length()>30);

    do {
        cout <<"\nNhap ho va ten giao vien huong dan: ";
        getline (cin,lv.hoten_giaovien);
        if (lv.hoten_giaovien.length()>30) {
            cout <<"\nHo ten giao vien khong hop le, vui long nhap lai!";
        }
    } while (lv.hoten_giaovien.length()>30);

    do {
        cout <<"\nNhap nam thuc hien: ";
        cin>>lv.nam;
        if (lv.nam<1900||lv.nam>2022) {
            cout <<"\nNam thuc hien khong hop le, vui long nhap lai!";
        }
    } while (lv.nam<1900||lv.nam>2022);
}

void Xuat (LUANVAN lv) {
    cout <<"\nMa luan van: " <<lv.ma_luan_van;
    cout <<"\nTen luan van: " <<lv.ten_luan_van;
    cout <<"\nHo ten sinh vien thuc hien: " << lv.hoten_sinhvien;
    cout <<"\nHo ten giao vien huong dan: " << lv.hoten_giaovien;
    cout <<"\nNam thuc hien: "<<lv.nam;
}

int main () {
    LUANVAN lv;
    cout <<"\n\n\t\t=====NHAP THONG TIN BAI LUAN VAN=====\n";
    Nhap(lv);
    cout <<"\n\n\t\t=====XUAT THONG TIN BAI LUAN VAN=====\n";
    Xuat(lv);
    system ("pause");
    system("cls");
    return 0;
}
