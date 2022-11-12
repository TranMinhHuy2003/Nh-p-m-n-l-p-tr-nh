/*Bài 4. Dữ liệu trong File: INPUT.TXT gồm các thông tin sau:
- Dòng đầu tiên: Số lượng các phân số.
- Các dòng tiếp theo, mỗi dòng lưu thông tin 1 phân số

Yêu cầu:
1. Rút gọn các phân số và lưu vào file RUTGONPHANSO.TXT 
2. Tìm phân số lớn nhất - kết quả ghi ra file: PHANSOLONNHAT.TXT*/
#include <iostream>
#include <fstream>
using namespace std;

struct phanso {
    int tuso; 
    int mauso;
};
typedef struct phanso PHANSO;

struct danhsach {
    PHANSO a[100];
    int n;
};
typedef struct danhsach DANHSACH;

void doc_1_phan_so (PHANSO &x, ifstream &filein) {
    filein >> x.tuso;
    char c;
    filein >>c;
    filein >> x.mauso;
}
void doc_1_danh_sach (DANHSACH &ds, ifstream &filein) {
    filein >> ds.n;
    for (int i=0; i<ds.n; i++) {
        doc_1_phan_so(ds.a[i], filein);
    }
}

int ucln (int x, int y) {
    while (x!=y) {
        if (x>y) {
            x=x-y;
        } else {
            y=y-x;
        }
    }
    return x;
}

void rutgon_1_phanso (PHANSO &x) {
    int uc=ucln(x.tuso, x.mauso);
    x.tuso=x.tuso/uc;
    x.mauso=x.mauso/uc;
}

void rutgon_danhsach (DANHSACH &ds) {
    for (int i=0; i<ds.n; i++) {
        rutgon_1_phanso(ds.a[i]);
    }
}

void ghi_1_phan_so (PHANSO x, ofstream &fileout) {
    fileout << x.tuso <<"/"<<x.mauso<<endl;
}

void ghi_danhsach (DANHSACH ds, ofstream &fileout) {
    for (int i=0; i<ds.n; i++) {
        ghi_1_phan_so(ds.a[i], fileout);
    }
}

PHANSO phanso_max (DANHSACH ds) {
    PHANSO max=ds.a[0];
    int c,b;
    for (int i=0; i<ds.n; i++) {
        c=max.tuso*ds.a[i].mauso;
        b=max.mauso*ds.a[i].tuso;
        if (c<b) {
            max=ds.a[i];
        }
    }
    return max;
}
int main () {
    ifstream filein;
    DANHSACH ds;
    filein.open("INPUT.txt", ios_base::in);
    if (filein.fail()==true) {
        cout <<"\nFile khong ton tai";
        return 0;
    }
    doc_1_danh_sach(ds, filein);
    ofstream fileout;
    fileout.open("RUTGONPHANSO.txt", ios_base::out);
    rutgon_danhsach(ds);
    ghi_danhsach(ds, fileout);
    fileout.close();
    fileout.open("PHANSOLONNHAT.txt", ios_base::out);
    PHANSO x=phanso_max(ds);
    ghi_1_phan_so(x, fileout);
    fileout.close();
    filein.close();
    system("pause");
    system("cls");
    return 0;
}