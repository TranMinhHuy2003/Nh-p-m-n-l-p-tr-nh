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

PHANSO rutgon_phanso (PHANSO &x) {
    PHANSO t;
    int ucln = UCLN(x.tuso,x.mauso);
    t.tuso=x.tuso/ucln;
    t.mauso=x.mauso/ucln;
    return t;
}

PHANSO tinhtong_2_phanso (PHANSO a, PHANSO b) {
    PHANSO ketqua;
    if (a.mauso==b.mauso) {
        ketqua.tuso=a.tuso+b.tuso;
        ketqua.mauso=a.mauso;
    } else {
        ketqua.tuso=(a.tuso*b.mauso)+(a.mauso*b.tuso);
        ketqua.mauso=a.mauso*b.mauso;
    }
    return ketqua;
}

PHANSO tinhhieu_2_phanso (PHANSO a, PHANSO b) {
    PHANSO ketqua;
    if (a.mauso==b.mauso) {
        ketqua.tuso=a.tuso-b.tuso;
        ketqua.mauso=a.mauso;
    } else {
        ketqua.tuso=(a.tuso*b.mauso)-(a.mauso*b.tuso);
        ketqua.mauso=a.mauso*b.mauso;
    }
    return ketqua;
}

PHANSO tinhtich_2_phanso (PHANSO a, PHANSO b) {
    PHANSO ketqua;
    ketqua.tuso=a.tuso*b.tuso;
    ketqua.mauso=a.mauso*b.mauso;
    return ketqua;
}

PHANSO tinhthuong_2_phanso (PHANSO a, PHANSO b) {
    PHANSO ketqua;
    ketqua.tuso=a.tuso*b.mauso;
    ketqua.mauso=a.mauso*b.tuso;
    return ketqua;
}

int SoSanh (PHANSO a, PHANSO b) {
    if (a.mauso==b.mauso) {
        if (a.tuso>b.tuso) {
            return 1;
        } else if (a.tuso==b.tuso) {
            return 2;
        } else {
            return 3;
        }
    } else {
        if (a.tuso*b.mauso>a.mauso*b.tuso) {
            return 1;
        } else if (a.tuso*b.mauso==a.mauso*b.tuso) {
            return 2;
        } else {
            return 3;
        }
    }
}

void XuLy (PHANSO &x, PHANSO &a, PHANSO &b) {
    Nhap_phanso(x);
    cout <<"\nXuat phan so: ";
    Xuat_phanso(x);
    PHANSO k=rutgon_phanso(x);
    cout <<"\nPhan so sau khi rut gon: ";
    Xuat_phanso(k);
    cout <<"\n\t\tNhap phan so thu 1";
    Nhap_phanso(a);
    cout <<"\n\t\tNhap phan so thu 2";
    Nhap_phanso(b);
    PHANSO n=tinhtong_2_phanso(a,b);
    if (n.tuso==0) {
        cout <<"\nTong 2 phan so: "<<0;;
    } else if (n.mauso==1) {
        cout <<"\nTong 2 phan so: "<<n.tuso;
    } else {
        PHANSO m=rutgon_phanso(n);
        if (m.mauso==1) {
            cout <<"\nTong 2 phan so: "<<m.tuso;
        } else {
            cout <<"\nTong 2 phan so: ";
            Xuat_phanso(m);
        }
    }
    PHANSO o=tinhhieu_2_phanso(a,b);
    if (o.tuso==0) {
        cout <<"\nHieu 2 phan so: "<<0;
    } else if (o.mauso==1) {
        cout <<"\nHieu 2 phan so: "<<o.tuso;
    } else {
        PHANSO p=rutgon_phanso(o);
        if (p.mauso==1) {
            cout <<"\nHieu 2 phan so: "<<p.tuso;
        } else {
            cout <<"\nHieu 2 phan so: ";
            Xuat_phanso(p);
        }
    }
    PHANSO q=tinhtich_2_phanso(a,b);
    if (q.tuso==0) {
        cout <<"\nTich 2 phan so: "<<0;
    } else if (q.mauso==1) {
        cout <<"\nTich 2 phan so: "<<q.tuso;
    } else {
        PHANSO w=rutgon_phanso(q);
        if (w.mauso==1) {
            cout <<"\nTich 2 phan so: "<<w.tuso;
        } else {
            cout <<"\nTich 2 phan so: ";
            Xuat_phanso(w);
        }
    }
    PHANSO c=tinhthuong_2_phanso(a,b);
    if (c.tuso==0) {
        cout <<"\nThuong 2 phan so: "<<0;
    } else if (c.mauso==1) {
        cout <<"\nThuong 2 phan so: "<<c.tuso;
    } else {
        PHANSO d=rutgon_phanso(c);
        if (d.mauso==1) {
            cout <<"\nThuong 2 phan so: "<<d.tuso;
        } else {
            cout <<"\nThuong 2 phan so: ";
            Xuat_phanso(d);
        }
    }
    if (SoSanh(a,b)==1) {
        cout <<"\nPhan so thu 1 lon hon phan so thu 2";
    } else if (SoSanh(a,b)==2) {
        cout <<"\nPhan so thu 1 bang phan so thu 2";
    } else {
        cout <<"\nPhan so thu 1 nho hon phan so thu 2";
    }
}

int main () {
    PHANSO x,a,b;
    XuLy(x,a,b);
    system("pause");
    system("cls");
    return 0;
}