#include <iostream>
#include <string>
using namespace std;

struct sinhvien {
    string mssv;
    string hoten;
    int namsinh;
    float diem_tb;
};
typedef struct sinhvien SINHVIEN;

struct danhsach {
    SINHVIEN a[100];
    int n;
};
typedef struct danhsach DANHSACH;

void Nhap_sinhvien (SINHVIEN &sv) {
    cin.ignore();
    do {
        cout <<"\nNhap ma so sinh vien: ";
        getline (cin,sv.mssv);
        if (sv.mssv.length()>15) {
            cout <<"Ma so khong hop le";
        }
    } while (sv.mssv.length()>15);

    do {
        cout <<"\nNhap ho ten sinh vien: ";
        getline (cin,sv.hoten);
        if (sv.hoten.length()>30) {
            cout <<"Ho ten khong hop le";
        }
    } while (sv.hoten.length()>30);

    do {
        cout <<"\nNhap nam sinh sinh vien: ";
        cin >> sv.namsinh;
        if (sv.namsinh<1900 || sv.namsinh>2021) {
            cout <<"\nNam sinh khong hop le";
        }
    } while (sv.namsinh<1900 || sv.namsinh>2021);

    do {
        cout <<"\nNhap diem trung binh: ";
        cin >> sv.diem_tb;
        if (sv.diem_tb<0 || sv.diem_tb>10) {
            cout <<"\nDiem khong hop le";
        }
    } while (sv.diem_tb<0 || sv.diem_tb>10);
}

void Xuat_sinhvien (SINHVIEN sv) {
    cout <<"\nMa so sinh vien: " <<sv.mssv;
    cout <<"\nHo ten sinh vien: " <<sv.hoten;
    cout <<"\nNam sinh: " << sv.namsinh;
    cout <<"\nDiem trung binh: " << sv.diem_tb;
}

void Nhap_danhsach (DANHSACH &ds) {
    for (int i=0; i<ds.n; i++) {
        cout <<"\n\n\t\tNHAP THONG TIN SINH VIEN THU "<<i+1<<endl;
        Nhap_sinhvien(ds.a[i]);
    }
}

void Xuat_danhsach (DANHSACH ds) {
    for (int i=0; i<ds.n; i++) {
        cout <<"\n\n\t\tTHONG TIN SINH VIEN THU " <<i+1<<endl;
        Xuat_sinhvien(ds.a[i]);
    }
}

void Timkiem (DANHSACH ds, float diem) {
    for (int i=0; i<ds.n; i++) {
        if (ds.a[i].diem_tb==diem) {
            cout <<"\n\n\t\tTHONG TIN SINH VIEN CAN TIM KIEM ";
            Xuat_sinhvien(ds.a[i]);
        }
    }
}

void Them (DANHSACH &ds, int k, SINHVIEN x) {
    for (int i=ds.n-1; i>=k; i--) {
        ds.a[i+1]=ds.a[i];
    }
    ds.a[k]=x;
    ds.n++;
}

void Xoa (DANHSACH &ds, int k) {
    for (int i=k; i<ds.n; i++) {
        ds.a[i]=ds.a[i+1];
    }
    ds.n--;
}

void Xoa_duoi5 (DANHSACH &ds) {
    for (int i=0; i<ds.n; i++) {
        if (ds.a[i].diem_tb<5) {
            Xoa(ds, i);
            i--;
        }
    }
}

void Sapxep_tangdan (DANHSACH ds) {
    for (int i=0; i<ds.n-1; i++) {
        for (int j=i+1; j<ds.n; j++) {
            if (ds.a[i].diem_tb<ds.a[j].diem_tb) {
                SINHVIEN t=ds.a[i];
                ds.a[i]=ds.a[j];
                ds.a[j]=t;
            }
        }
    }
}

void menu (DANHSACH ds, SINHVIEN x) {
    while (true) {
        system("cls");
        cout <<"\n\n\t\t===== QUAN LY DANH SACH SINH VIEN =====";
        cout <<"\n1. Ket thuc";
        cout <<"\n2. Xuat danh sach sinh vien";
        cout <<"\n3. Tim kiem thong tin sinh vien dua vao diem trung binh";
        cout <<"\n4. Them 1 sinh vien vao vi tri bat ky";
        cout <<"\n5. Xoa cac sinh vien co diem trung binh duoi 5";
        cout <<"\n6. Sap xep sinh vien tang dan theo diem trung binh";
        cout <<"\n\n\t\t================= END =================";

        int luachon;
        do {
            cout <<"\nNhap lua chon: ";
            cin >> luachon;
            if (luachon<0 || luachon>6) {
                cout <<"\nLua chon khon hop le";
            }
        } while (luachon<0 || luachon>6);

        if (luachon==1) {
            cout <<"\nKet thuc";
            break;
        } else if (luachon==2) {
            cout <<"\n\n\t\t===== XUAT DANH SACH SINH VIEN =====";
            Xuat_danhsach(ds);
            system ("pause");
        } else if (luachon==3) {
            int diem;
            do {
                cout <<"\nNhap diem can tim kiem: ";
                cin >> diem;
                if (diem<0 || diem>10) {
                    cout <<"\nDiem khong hop le";
                }
            } while (diem<0 || diem>10);
            Timkiem(ds, diem);
            system ("pause");
        } else if (luachon==4) {
            int k;
            do {
                cout <<"\nNhap vi tri can them: ";
                cin >>k;
                if (k<0 ||k>ds.n) {
                    cout <<"\nVi tri khong hop le";
                }
            } while (k<0 ||k>ds.n);
            cout <<"\n\n\t\tNHAP THONG TIN SINH VIEN CAN THEM" << endl;
            Nhap_sinhvien (x);
            Them(ds, k, x);
            system("cls");
            cout <<"\n\n\t\tDANH SACH SINH VIEN SAU KHI THEM" << endl;
            Xuat_danhsach(ds);
            system ("pause");
        } else if (luachon==5) {
            Xoa_duoi5(ds);
            cout <<"\n\n\t\tDANH SACH SINH VIEN SAU KHI XOA" << endl;
            Xuat_danhsach(ds);
            system ("pause");
        } else if (luachon==6) {
            Sapxep_tangdan(ds);
            cout <<"\n\n\t\tDANH SACH SINH VIEN TANG DAN THEO DIEM TRUNG BINH";
            Xuat_danhsach(ds);
            system ("pause");
        } else {
            break;
        }
    }
}

int main () {
    DANHSACH ds;
    SINHVIEN x;
    do {
        cout <<"\nNhap so luong sinh vien: ";
        cin >> ds.n;
        if (ds.n<0 || ds.n>100) {
            cout <<"\nSo luong sinh vien khong hop le";
        }
    } while (ds.n<0 || ds.n>100);
    cout <<"\n\n\t\t===== NHAP DANH SACH SINH VIEN =====";
    Nhap_danhsach(ds);
    menu(ds, x);
    system ("pause");
    system("cls");
    return 0;
}
