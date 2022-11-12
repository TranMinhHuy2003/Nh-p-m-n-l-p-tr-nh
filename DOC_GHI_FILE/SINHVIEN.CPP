#include <iostream>
#include <string.h>
#include <vector>
#include <fstream>
using namespace std;

struct monhoc {
    string monhoc;
    float diem;
};
typedef struct monhoc MONHOC;

struct sinhvien {
    string hoten;
    string mssv;
    string namsinh;
    vector <MONHOC> a;
};
typedef struct sinhvien SINHVIEN;

void Doc_sinhvien (ifstream &filein, SINHVIEN &sv) {
    getline (filein, sv.hoten, ',');
    getline (filein, sv.mssv, ',');
    getline (filein, sv.namsinh);
}

void Doc_monhoc (ifstream &filein, MONHOC &mh) {
    getline (filein, mh.monhoc, '-');
    filein >> mh.diem;
}

void Doc_thongtin (ifstream &filein, vector <SINHVIEN> &ds) {
    while (!filein.eof()) {
        SINHVIEN sv;
        Doc_sinhvien(filein, sv);
        int n;
        filein >> n;
        string temp;
        getline (filein, temp);
        for (int i=1; i<=n; i++) {
            MONHOC mh;
            Doc_monhoc (filein, mh);
            getline (filein, temp);
            sv.a.push_back(mh);
        }
        ds.push_back(sv);
    }
}

void  Xuatsinhvien (SINHVIEN sv) {
    cout <<"\nHo va ten sinh vien: " <<sv.hoten;
    cout <<"\nMa so sinh vien: " << sv.mssv;
    cout <<"\nNgay thang nam sinh cua sinh vien: " << sv.namsinh;
}

void Xuat_mon (MONHOC mh) {
    cout <<"\nMon: " << mh.monhoc;
    cout <<"\nDiem: " << mh.diem;
}

void test (vector <SINHVIEN> ds) {
    for (int i=0; i<ds.size(); i++) {
        cout <<"\n\n\t\tTHONG TIN SINH VIEN THU " <<i+1;
        Xuatsinhvien(ds[i]);
        cout <<"\n\n\t\tDANH SACH MON HOC";
        for (int j=0; j<ds[i].a.size(); j++) {
            cout <<"\n\n\t\tMON THU " << j+1;
            Xuat_mon (ds[i].a[j]);
        }
    }
}

void Tim_kiem_sv (vector <SINHVIEN> ds, string hoten) {
    int dem=1;
    for (int i=0; i<ds.size(); i++) {
        if (stricmp (ds[i].hoten.c_str(), hoten.c_str())==0) {
            cout <<"\n\n\t\tTHONG TIN SINH VIEN CAN TIM KIEM";
            cout <<"\n\n\t\tSINH VIEN THU "<< dem++;
            Xuatsinhvien (ds[i]);
        }
    }
}

string tach_namsinh (string namsinh) {
    string temp;
    for (int i=namsinh.length()-1; i>=0; i--) {
        if (namsinh[i]>='0'&&namsinh[i]<='9') {
            temp.insert(temp.begin()+0, namsinh[i]);
        } else {
            break;
        }
    }
    return temp;
}

void ghi_thong_tin_monhoc (ofstream &fileout, MONHOC mh) {
    fileout <<mh.monhoc<<"-"<<mh.diem;
}

void ghi_thong_tin_sv (ofstream &fileout, SINHVIEN sv) {
    fileout << sv.hoten<<","<<sv.mssv<<","<<sv.namsinh<<endl;
    fileout <<sv.a.size()<<endl;
    for (int i=0; i<sv.a.size(); i++) {
        ghi_thong_tin_monhoc(fileout, sv.a[i]);
        fileout << endl;
    }
}

void ghi_file_nam_sinh (ofstream &fileout, string namsinh, vector <SINHVIEN> ds) {
    for (int i=0; i<ds.size(); i++) {
        string temp=tach_namsinh(ds[i].namsinh);
        if (stricmp(temp.c_str(), namsinh.c_str())==0) {
            ghi_thong_tin_sv(fileout, ds[i]);
        }
    }
}

int main () {
    ifstream filein;
    filein.open("SINHVIEN.txt", ios_base::in);
    if (filein.fail()==true) {
        cout <<"\nFile khong ton tai!";
    }
    vector <SINHVIEN> ds;
    Doc_thongtin (filein, ds);
    string hoten;
    cout <<"\nNhap vao ten sinh vien can tim kiem: ";
    getline (cin, hoten);
    Tim_kiem_sv (ds, hoten);
    ofstream fileout;
    fileout.open("NAMSINH.TXT", ios_base::out);
    string namsinh;
    cout <<"\n\nNhap vao nam sinh can tim kiem: ";
    getline (cin, namsinh);
    ghi_file_nam_sinh(fileout, namsinh, ds);     
    fileout.close();
    filein.close();
    system("pause");
    system("cls");
    return 0;
}
