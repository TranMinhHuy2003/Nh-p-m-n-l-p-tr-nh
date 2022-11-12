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

struct daily {
    string ma;
    string ten;
    unsigned long dienthoai;
    NGAY ngaytiepnhan;
    string diachi;
    string mail;
};
typedef struct daily DAILY;

void Nhap (DAILY &dl, NGAY &n) {
    do {
        cout <<"\nNhap ma dai ly: ";
        getline (cin,dl.ma);
        if (dl.ma.length()>5) {
            cout <<"\nMa dai ly khong hop le, vui long nhap lai!";
        }
    } while (dl.ma.length()>5);

    do {
        cout <<"\nNhap ten dai ly: ";
        getline (cin,dl.ten);
        if (dl.ten.length()>30) {
            cout <<"\nTen dai ly khong hop le, vui long nhap lai!";
        }
    } while (dl.ten.length()>30);

    cout <<"\nNhap so dien thoai: ";
    cin >> dl.dienthoai;

    cout <<"\nNhap ngay tiep nhan: ";
    Nhapngaythangnam(n);

    cin.ignore();
    do {
        cout <<"\nNhap dia chi: ";
        getline (cin,dl.diachi);
        if (dl.diachi.length()>50) {
            cout <<"\nDia chi khong hop le, vui long nhap lai!";
        }
    } while (dl.diachi.length()>50);

    do {
        cout <<"\nNhap e-mail: ";
        getline (cin,dl.mail);
        if (dl.mail.length()>50) {
            cout <<"\nE-mail khong hop le, vui long nhap lai!";
        }
    } while (dl.mail.length()>50);
}

void Xuat (DAILY dl, NGAY n) {
    cout <<"\nMa dai ly: "<<dl.ma;
    cout <<"\nTen dai ly: "<<dl.ten;
    cout <<"\nDien thoai: "<<0<<dl.dienthoai;
    cout <<"\nNgay tiep nhan: "<<n.ngay<<"/"<<n.thang<<"/"<<n.nam;
    cout <<"\nDia chi: "<<dl.diachi;
    cout <<"\nE-mail: "<<dl.mail;
}

int main () {
    DAILY dl;
    NGAY n;
    cout <<"\n\n\t\t=====NHAP THONG TIN DAI LY=====\n";
    Nhap(dl,n);
    cout <<"\n\n\t\t=====XUAT THONG TIN DAI LY=====\n";
    Xuat(dl,n);
    system ("pause");
    system("cls");
    return 0;
}
