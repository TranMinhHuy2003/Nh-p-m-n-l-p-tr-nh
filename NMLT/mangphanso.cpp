#include <iostream>
using namespace std;

struct phanso {
    int tuso;
    int mauso;
};
typedef struct phanso PHANSO;

void Nhap_phanso (PHANSO &);
void Xuat_phanso (PHANSO );

void Nhap_phanso (PHANSO &x) {
    cout <<"\nNhap tu so: ";
    cin >> x.tuso;
    do {
        cout <<"\nNhap mau so: ";
        cin >> x.mauso;
        if (x.mauso==0) {
            cout <<"\nMau so khong duoc bang 0, vui long nhap lai!";
        }
    } while (x.mauso==0);
}

void Xuat_phanso (PHANSO x) {
    if (x.mauso<0) {
        cout << -x.tuso <<"/"<< -x.mauso;
    } else {
        cout << x.tuso <<"/"<< x.mauso;
    }
}

struct danhsach {
    PHANSO *a;
    int n;
};
typedef struct danhsach DANHSACH;

void Nhap_danhsach (DANHSACH &); //Bai 632
int UCLN (int , int );
void rutgon_phanso (PHANSO &);
void rutgon_danhsach (DANHSACH &);
void Xuat_danhsach (DANHSACH ); //Bai 633
int KT (PHANSO );
int DemDuong (DANHSACH ); //Bai 634
int DemAm (DANHSACH ); //Bai 635
PHANSO TimMax (DANHSACH ); //Bai 636
PHANSO TimMin (DANHSACH ); //Bai 637
PHANSO TimMax (DANHSACH ); //Bai 638
PHANSO DuongDau (DANHSACH ); //Bai 639
int NhoNhat (DANHSACH ); //Bai 640
PHANSO DuongNhoNhat (DANHSACH ); //Bai 641
int VTDuongNhoNhat (DANHSACH ); //Bai 642
void sapxep_tangdan (DANHSACH ); //Bai 643
void sapxep_giamdan (DANHSACH ); //Bai 644

void Nhap_danhsach (DANHSACH &ds) { 
    do {
        cout <<"\nNhap so luong phan so: ";
        cin >>ds.n;
        if (ds.n<=0) {
            cout <<"\nSo luong phan so khong hop le, vui long nhap lai!";
        }
    } while (ds.n<=0);
    ds.a=new PHANSO [ds.n];
    cout <<"\n\n\t\t=====NHAP DANH SACH PHAN SO=====\n";
    for (int i=0; i<ds.n; i++) {
        cout <<"\n\t\tNhap phan so thu "<< i+1 << endl;
        Nhap_phanso(ds.a[i]);
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
    if (x.tuso==0) {

    } else {
        int ucln = UCLN(x.tuso,x.mauso);
        x.tuso=x.tuso/ucln;
        x.mauso=x.mauso/ucln;
    }
}

void rutgon_danhsach (DANHSACH &ds) {
    for (int i=0; i<ds.n; i++) {
        rutgon_phanso(ds.a[i]);    
    }
}

void Xuat_danhsach (DANHSACH ds) { 
    for (int i=0; i<ds.n; i++) {
        cout <<"\nPhan so thu "<<i+1<<": ";
        Xuat_phanso(ds.a[i]);
    }
}

int KT (PHANSO x) {
    int flag=2;
    if (x.tuso==0) {
        flag=3;
    } else if (x.mauso<0&&x.tuso<0) {
        flag=1;
    } else if (x.mauso<0||x.tuso<0) {
        flag=0;   
    } else if (x.mauso>0||x.tuso>0) {
        flag=1;
    } 
    return flag;
}

int DemDuong (DANHSACH ds) { 
    int dem=0;
    for (int i=0; i<ds.n; i++) {
        if (KT(ds.a[i])==1) {
            dem+=1;
        }
    }
    return dem;
}

int DemAm (DANHSACH ds) { 
    int dem=0;
    for (int i=0; i<ds.n; i++) {
        if (KT(ds.a[i])==0) {
            dem+=1;
        }
    }
    return dem;
}

PHANSO TimMax (DANHSACH ds) {
    PHANSO max=ds.a[0];
    for (int i=1; i<ds.n; i++) {
        if (max.mauso<0&&ds.a[i].mauso<0) {
            if (max.tuso*ds.a[i].mauso<max.mauso*ds.a[i].tuso) {
                max=ds.a[i];
            }
        } else if (max.mauso==ds.a[i].mauso) {
            if (max.tuso<ds.a[i].tuso) {
                max=ds.a[i];
            }
        } else if (max.mauso<0) {
            if (-max.tuso*ds.a[i].mauso<-max.mauso*ds.a[i].tuso) {
                max=ds.a[i];
            }
        } else if (ds.a[i].mauso<0) {
            if (-max.tuso*ds.a[i].mauso<-max.mauso*ds.a[i].tuso) {
                max=ds.a[i];
            }
        } else {
            if (max.tuso*ds.a[i].mauso<max.mauso*ds.a[i].tuso) {
                max=ds.a[i];
            }
        }
    }
    return max;
}

PHANSO TimMin (DANHSACH ds) {
    PHANSO min=ds.a[0];
    for (int i=1; i<ds.n; i++) {
        if (min.mauso<0&&ds.a[i].mauso<0) {
            if (min.tuso*ds.a[i].mauso>min.mauso*ds.a[i].tuso) {
                min=ds.a[i];
            }
        } else if (min.mauso==ds.a[i].mauso) {
            if (min.tuso>ds.a[i].tuso) {
                min=ds.a[i];
            }
        } else if (min.mauso<0) {
            if (-min.tuso*ds.a[i].mauso>-min.mauso*ds.a[i].tuso) {
                min=ds.a[i];
            }
        } else if (ds.a[i].mauso<0) {
            if (-min.tuso*ds.a[i].mauso>-min.mauso*ds.a[i].tuso) {
                min=ds.a[i];
            }
        } else {
            if (min.tuso*ds.a[i].mauso>min.mauso*ds.a[i].tuso) {
                min=ds.a[i];
            }
        }
    }
    return min;
}

PHANSO DuongDau (DANHSACH ds) {
    int flag=0;
    PHANSO k;
    for (int i=0; i<ds.n; i++) {
        if ((ds.a[i].tuso>0&&ds.a[i].mauso>0)||(ds.a[i].tuso<0&&ds.a[i].mauso<0)) {
            k=ds.a[i];
            flag=1;
            break;
        }
    }
    if (flag==0) {
        k.tuso=0;
        k.mauso=1;
        return k;
    } else {
        return k;
    }
}

int NhoNhat (DANHSACH ds) {
    PHANSO min=ds.a[0];
    int vt=0;
    for (int i=1; i<ds.n; i++) {
        if (min.mauso<0&&ds.a[i].mauso<0) {
            if (min.tuso*ds.a[i].mauso>min.mauso*ds.a[i].tuso) {
                min=ds.a[i];
                vt=i;
            }
        } else if (min.mauso==ds.a[i].mauso) {
            if (min.tuso>ds.a[i].tuso) {
                min=ds.a[i];
                vt=i;
            }
        } else if (min.mauso<0) {
            if (-min.tuso*ds.a[i].mauso>-min.mauso*ds.a[i].tuso) {
                min=ds.a[i];
                vt=i;
            }
        } else if (ds.a[i].mauso<0) {
            if (-min.tuso*ds.a[i].mauso>-min.mauso*ds.a[i].tuso) {
                min=ds.a[i];
                vt=i;
            }
        } else {
            if (min.tuso*ds.a[i].mauso>min.mauso*ds.a[i].tuso) {
                min=ds.a[i];
                vt=i;
            }
        }
    }
    return vt+1;
}

PHANSO DuongNhoNhat (DANHSACH ds) {
    int flag=0;
    int k=0;
    PHANSO min;
    for (int i=0; i<ds.n; i++) {
        if (ds.a[i].mauso>0&&ds.a[i].tuso>0) {
            min=ds.a[i];
            flag=1;
            k=1;
            break;
        } else if (ds.a[i].mauso<0&&ds.a[i].tuso<0) {
            min=ds.a[i];
            flag=1;
            k=2;
            break;
        }
    }
    if (k==1) {
        for (int j=0; j<ds.n; j++) {
                if (ds.a[j].mauso>0&&ds.a[j].tuso>0) {
                    if (min.mauso==ds.a[j].mauso) {
                        if (min.tuso>ds.a[j].tuso) {
                            min=ds.a[j];
                        }
                    } else {
                        if (min.tuso*ds.a[j].mauso>min.mauso*ds.a[j].tuso) {
                            min=ds.a[j];
                        }
                    }
                } else if (ds.a[j].mauso<0&&ds.a[j].tuso<0) {
                    if (min.tuso*ds.a[j].mauso<min.mauso*ds.a[j].tuso) {
                        min=ds.a[j];
                    }
                }
            }
    } else if (k==2) {
        for (int j=0; j<ds.n; j++) {
                if (ds.a[j].mauso>0&&ds.a[j].tuso>0) {
                    if (-min.tuso*ds.a[j].mauso>-min.mauso*ds.a[j].tuso) {
                        min=ds.a[j];
                    }        
                } else if (ds.a[j].mauso<0&&ds.a[j].tuso<0) {
                    if (min.mauso==ds.a[j].mauso) {
                        if (min.tuso>ds.a[j].tuso) {
                            min=ds.a[j];
                        }
                    } else {
                        if (min.tuso*ds.a[j].mauso>min.mauso*ds.a[j].tuso) {
                            min=ds.a[j];
                        }
                    }
                }
            }
    }
    if (flag==1) {
        return min;
    } else {
        min.tuso=-1;
        min.mauso=1;
        return min;
    }
}

int VTDuongNhoNhat (DANHSACH ds) {
    int flag=0;
    int vt;
    int k=0;
    PHANSO min;
    for (int i=0; i<ds.n; i++) {
        if (ds.a[i].mauso>0&&ds.a[i].tuso>0) {
            min=ds.a[i];
            flag=1;
            k=1;
            vt=i;
            break;
        } else if (ds.a[i].mauso<0&&ds.a[i].tuso<0) {
            min=ds.a[i];
            flag=1;
            k=2;
            vt=i;
            break;
        }
    }
    if (k==1) {
        for (int j=0; j<ds.n; j++) {
                if (ds.a[j].mauso>0&&ds.a[j].tuso>0) {
                    if (min.mauso==ds.a[j].mauso) {
                        if (min.tuso>ds.a[j].tuso) {
                            min=ds.a[j];
                            vt=j;
                        }
                    } else {
                        if (min.tuso*ds.a[j].mauso>min.mauso*ds.a[j].tuso) {
                            min=ds.a[j];
                            vt=j;
                        }
                    }
                } else if (ds.a[j].mauso<0&&ds.a[j].tuso<0) {
                    if (min.tuso*ds.a[j].mauso<min.mauso*ds.a[j].tuso) {
                        min=ds.a[j];
                        vt=j;
                    }
                }
            }
    } else if (k==2) {
        for (int j=0; j<ds.n; j++) {
                if (ds.a[j].mauso>0&&ds.a[j].tuso>0) {
                    if (-min.tuso*ds.a[j].mauso>-min.mauso*ds.a[j].tuso) {
                        min=ds.a[j];
                        vt=j;
                    }        
                } else if (ds.a[j].mauso<0&&ds.a[j].tuso<0) {
                    if (min.mauso==ds.a[j].mauso) {
                        if (min.tuso>ds.a[j].tuso) {
                            min=ds.a[j];
                            vt=j;
                        }
                    } else {
                        if (min.tuso*ds.a[j].mauso>min.mauso*ds.a[j].tuso) {
                            min=ds.a[j];
                            vt=j;
                        }
                    }
                }
            }
    }
    if (flag==1) {
        return vt+1;
    } else {
        return -1;
    }
}

void sapxep_tangdan (DANHSACH ds) {
    float a,b;
    for (int i=0; i<ds.n; i++) {
        for (int j=i+1; j<ds.n; j++) {
            a=float(ds.a[i].tuso)/float(ds.a[i].mauso);
            b=float(ds.a[j].tuso)/float(ds.a[j].mauso);
            if (a>b) {
                PHANSO t=ds.a[i];
                ds.a[i]=ds.a[j];
                ds.a[j]=t;
            }
        }
    }
} 

void sapxep_giamdan (DANHSACH ds) {
    float a,b;
    for (int i=0; i<ds.n; i++) {
        for (int j=i+1; j<ds.n; j++) {
            a=float(ds.a[i].tuso)/float(ds.a[i].mauso);
            b=float(ds.a[j].tuso)/float(ds.a[j].mauso);
            if (a<b) {
                PHANSO t=ds.a[i];
                ds.a[i]=ds.a[j];
                ds.a[j]=t;
            }
        }
    }
}

void XuLy (DANHSACH ds) {
    Nhap_danhsach(ds);
    rutgon_danhsach(ds);
    cout <<"\n\n\t\t=====XUAT DANH SACH PHAN SO=====\n";
    Xuat_danhsach(ds);
    cout <<"\n\nCo "<<DemDuong(ds)<<" phan so duong trong mang";
    cout <<"\nCo "<<DemAm(ds)<<" phan so am trong mang";
    cout <<"\nPhan so lon nhat trong mang la: ";
    PHANSO k=TimMax(ds);
    Xuat_phanso(k);
    cout <<"\nPhan so nho nhat trong mang la: ";
    PHANSO j=TimMin(ds);
    Xuat_phanso(j);
    cout <<"\nGia tri lon nhat trong mang la: ";
    Xuat_phanso(k);
    PHANSO i=DuongDau(ds);
    cout <<"\nGia tri duong dau tien trong mang: ";
    Xuat_phanso(i);
    cout <<"\nGia tri nho nhat trong mang nam o vi tri thu "<<NhoNhat(ds);
    PHANSO l=DuongNhoNhat(ds);
    cout <<"\nGia tri duong nho nhat trong mang la: ";
    Xuat_phanso(l);
    cout <<"\nGia tri duong nho nhat trong mang nam o vi tri thu "<<VTDuongNhoNhat(ds);
    sapxep_tangdan(ds);
    cout <<"\n\n\t\t=====DANH SACH PHAN SO TANG DAN=====\n";
    Xuat_danhsach(ds);
    sapxep_giamdan(ds);
    cout <<"\n\n\t\t=====DANH SACH PHAN SO GIAM DAN=====\n";
    Xuat_danhsach(ds);
}

int main () {
    DANHSACH ds;
    XuLy(ds);
    system("pause");
    system("cls");
    return 0;
}