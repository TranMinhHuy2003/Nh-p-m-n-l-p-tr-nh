#include <iostream>
#include <string>
using namespace std;

struct ngay {
    int ngay;
    int thang;
    int nam;
};
typedef struct ngay NGAY;

bool KiemTraNamNhuan(NGAY n)
{
	return (n.nam % 4 == 0 && n.nam % 100 != 0) || (n.nam % 400 == 0);
}

bool KiemTraNamNhuan(int i)
{
	if (i % 4 == 0 && i % 100!=0)
		return true;
	if (i % 400 == 0)
		return true;
	return false;
}

int TimSoNgayTrongThang(NGAY n) {
	int NgayTrongThang;
	switch(n.thang)
	{
	case 1: case 3: case 5: case 7: case 8: case 10: case 12:
		NgayTrongThang = 31;
		break;
	case 4: case 6: case 9 : case 11:
		NgayTrongThang = 30;
		break;
	case 2:
		int Check = KiemTraNamNhuan(n);
		if(Check == 1)
		{
			NgayTrongThang = 29;
		}
		else
		{
			NgayTrongThang = 28;
		}
	}
	return NgayTrongThang;
}

void Nhapngaythangnam (NGAY &n) {
    do {
        cout <<"\nNhap nam: ";
        cin >>n.nam;
        if (n.nam<1800||n.nam>2022) {
            cout <<"\nNam khong hop le, vui long nhap lai!";
        }
    } while (n.nam<1800||n.nam>2022);

    do {
        cout <<"\nNhap thang: ";
        cin >>n.thang;
        if (n.thang<1||n.thang>12) {
            cout <<"\nThang khong hop le, vui long nhap lai!";
        }
    } while (n.thang<1||n.thang>12);

    int ngaytrongthang=TimSoNgayTrongThang(n);
    do {
        cout <<"\nNhap ngay: ";
        cin >>n.ngay;
        if (n.ngay<1||n.ngay>ngaytrongthang) {
            cout <<"\nNgay khong hop le, vui long nhap lai!";
        }
    } while (n.ngay<1||n.ngay>ngaytrongthang);
}

struct sotietkiem {
    string ma;
    string loai;
    string ten;
    unsigned long cmnd;
    NGAY ngaygui;
    long double tien;
};
typedef struct sotietkiem SOTIETKIEM;

void Nhap (SOTIETKIEM &s, NGAY &n, int &luachon) {
    do {
        cout <<"\nNhap ma so: ";
        getline (cin,s.ma);
        if (s.ma.length()>5) {
            cout <<"\nMa so khong hop le, vui long nhap lai!";
        }
    } while (s.ma.length()>5);

    do {
        cout <<"\nNhap loai tiet kiem: ";
        getline (cin,s.loai);
        if (s.loai.length()>10) {
            cout <<"\nLoai tiet kiem khong hop le, vui long nhap lai!";
        }
    } while (s.loai.length()>10);

    do {
        cout <<"\nNhap ho ten khach hang: ";
        getline (cin,s.ten);
        if (s.ten.length()>30) {
            cout <<"\nHo ten khach hang khong hop le, vui long nhap lai!";
        }
    } while (s.ten.length()>30);

    cout <<"\n\t\t-----NHAP CMND-----\n";
    cout <<"\nSo chung minh nhan dan cua ban co so 0 o dau hay khong?";
    cout <<"\n\t1.Co";
    cout <<"\n\t2.Khong";
    do {
        cout <<"\nNhap 1 hoac 2 de tra loi: ";
        cin >> luachon;
        if (luachon!=1&&luachon!=2) {
            cout <<"\nLua chon khong hop le, vui long nhap lai!";
        }
    } while (luachon!=1&&luachon!=2);
    cout <<"\nNhap so chung minh nhan dan: ";
    cin >>s.cmnd;

    cout <<"\n\t\t-----NHAP NGAY MO SO-----\n";
    Nhapngaythangnam(n);

    do {
        cout <<"\nNhap so tien can gui: ";
        cin >>s.tien;
        if (s.tien<0) {
            cout <<"\nSo tien khong hop le, vui long nhap lai!";
        }
    } while (s.tien<0);
}

void XuatCMND (SOTIETKIEM s, int luachon) {
    if (luachon==1) {
        cout <<"\nSo chung minh nhan dan: "<<0<<s.cmnd;
    } else {
        cout <<"\nSo chung minh nhan dan: "<<s.cmnd;
    }
}

void Xuat (SOTIETKIEM s, NGAY n, int luachon) {
    cout <<"\nMa so: "<<s.ma;
    cout <<"\nLoai tiet kiem: "<<s.loai;
    cout <<"\nHo ten khach hang: "<<s.ten;
    XuatCMND(s,luachon);
    cout <<"\nNgay mo so: "<<n.ngay<<"/"<<n.thang<<"/"<<n.nam;
    cout <<"\nSo tien gui: "<<s.tien<<"(dong)";
}

int main () {
    SOTIETKIEM s;
    NGAY n;
    int luachon;
    cout <<"\n\n\t\t=====NHAP THONG TIN SO TIET KIEM=====\n";
    Nhap(s,n,luachon);
    cout <<"\n\n\t\t=====XUAT THONG TIN SO TIET KIEM=====\n";
    Xuat(s,n,luachon);
    system ("pause");
    system("cls");
    return 0;
}
