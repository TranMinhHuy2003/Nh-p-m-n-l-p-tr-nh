#include <iostream>
using namespace std;

struct phanso {
    int tuso;
    int mauso;
};
typedef struct phanso PHANSO;

void Nhap_phanso (PHANSO &x) {
    cout <<"\nNhap tu so: ";
    cin >> x.tuso;
    cout <<"\nNhap mau so: ";
    cin >> x.mauso;
}

void Xuat_phanso (PHANSO x) {
    cout << x.tuso <<"/"<< x.mauso;
}

struct danhsach {
    PHANSO *a;
    int n;
};
typedef struct danhsach DANHSACH;

void Nhap_danhsach (DANHSACH &ds) {
    cout <<"\n\n\t\tNHAP DANH SACH PHAN SO\n";
    for (int i=0; i<ds.n; i++) {
        cout <<"\n\t\tNhap phan so thu "<< i+1 << endl;
        Nhap_phanso(ds.a[i]);
    }
}

void Xuat_danhsach (DANHSACH ds) {
    for (int i=0; i<ds.n; i++) {
        cout <<"\nPhan so thu "<<i+1<<": ";
        Xuat_phanso(ds.a[i]);
    }
}

int UCLN (int x, int y) {
    if (x<0) {
        x*=-1;
    }
    if (y<0) {
        y*=-1;
    }
    while (x != y) {
        if (x>y) {
            x=x-y;
        } else {
            y=y-x;
        }
    }
    return x;
}

void rutgon_phanso (PHANSO &x) {
    int ucln = UCLN(x.tuso,x.mauso);
    x.tuso=x.tuso/ucln;
    x.mauso=x.mauso/ucln;
}

void rutgon_danhsach (DANHSACH &ds) {
    for (int i=0; i<ds.n; i++) {
        rutgon_phanso(ds.a[i]);
    }
}

PHANSO phanso_max (DANHSACH ds) {
    PHANSO max = ds.a[0];
    int c,b;
    for (int i=1; i<ds.n; i++) {
       c=max.tuso*ds.a[i].mauso;
       b=max.mauso*ds.a[i].tuso;
       if (c<b) {
           max=ds.a[i];
       }
    }
    return max;
}

PHANSO phanso_min (DANHSACH ds) {
    PHANSO min = ds.a[0];
    int c,b;
    for (int i=1; i<ds.n; i++) {
       c=min.tuso*ds.a[i].mauso;
       b=min.mauso*ds.a[i].tuso;
       if (b<c) {
           min=ds.a[i];
       }
    }
    return min;
}

PHANSO tinhtong_2_phanso (PHANSO x, PHANSO y) {
    PHANSO ketqua;
    if (x.mauso==y.mauso) {
        ketqua.tuso=x.tuso+y.tuso;
        ketqua.mauso=x.mauso;
    } else {
        ketqua.tuso=(x.tuso*y.mauso)+(x.mauso*y.tuso);
        ketqua.mauso=x.mauso*y.mauso;
    }
    return ketqua;
}

PHANSO tinhtong_danhsach (DANHSACH ds) {
    PHANSO ketqua=ds.a[0];
    for (int i=1; i<ds.n; i++) {
        ketqua=tinhtong_2_phanso(ketqua,ds.a[i]);
    }
    return ketqua;
}

void menu (DANHSACH ds) {
    while (true) {
    system("cls");
    cout <<"\n\n\t\t=====CHUONG TRINH QUAN LY PHAN SO=====";
    cout <<"\n0. Ket thuc";
    cout <<"\n1. Xuat danh sach phan so";
    cout <<"\n2. Xuat danh sach phan so sau khi rut gon";
    cout <<"\n3. Tim phan so lon nhat";
    cout <<"\n4. Tim phan so nho nhat";
    cout <<"\n5. Tinh tong tat ca cac phan so";
    cout <<"\n\n\t\t==================END=================";
    int n;
    do {
        cout <<"\nNhap lua chon: ";
        cin >> n;
        if (n<0||n>5) {
            cout <<"Lua chon khong hop le, vui long nhap lai!";
        }
    } while (n<0||n>5);
    if (n==0) {
        cout <<"Ket thuc chuong trinh!";
        break;
        system("pause");
        system("cls");
    } else if (n==1) {
        cout <<"\n\n\t\tDANH SACH PHAN SO\n";
        Xuat_danhsach(ds);
        system("pause");
        system("cls");
    } else if (n==2) {
        cout <<"\n\n\tDANH SACH PHAN SO SAU KHI RUT GON\n";
        rutgon_danhsach(ds);
        Xuat_danhsach(ds);
        system("pause");
        system("cls");
    } else if (n==3) {
        cout <<"\n\n\nPhan so lon nhat la: " ; 
        PHANSO y=phanso_max(ds);
        Xuat_phanso(y);
        system("pause");
        system("cls");
    } else if (n==4) {
        cout <<"\n\nPhan so nho nhat la: ";
        PHANSO z=phanso_min(ds);
        Xuat_phanso(z);
        system("pause");
        system("cls");
    } else if (n==5) {
        cout <<"\n\nTong tat ca cac phan so: ";
        PHANSO ketqua=tinhtong_danhsach(ds);
        Xuat_phanso(ketqua);
        system("pause");
        system("cls");
    }
  }
}

int main () {
    DANHSACH ds;
    cout <<"\nNhap so luong phan so: ";
    cin >>ds.n;
    ds.a=new PHANSO [ds.n];
    Nhap_danhsach(ds);
    menu(ds);
    delete [] ds.a;
    system("pause");
    system("cls");
    return 0;
}