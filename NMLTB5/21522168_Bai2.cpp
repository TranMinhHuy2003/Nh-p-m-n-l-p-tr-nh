#include <iostream>
using namespace std;
#define Max 100

void Nhap (int a[][Max], int &n) {
    do {
        cout <<"\nNhap so bac cua ma tran: ";
        cin>>n;
        if (n<=0||n>Max) {
            cout <<"\nBac ma tran khong hop le, vui long nhap lai!";
        }
    } while (n<=0||n>Max);
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            cout <<"\nNhap a["<<i<<"]["<<j<<"]: ";
            cin>>a[i][j];
        }
    }
}

void NhapB (int a[][Max], int n, int &m) {
    do {
        cout <<"\nNhap so bac cua ma tran: ";
        cin>>m;
        if (m!=n) {
            cout <<"\nBac ma tran khong hop le, vui long nhap lai!";
        }
    } while (m!=n);
    for (int i=0; i<m; i++) {
        for (int j=0; j<m; j++) {
            cout <<"\nNhap a["<<i<<"]["<<j<<"]: ";
            cin>>a[i][j];
        }
    }
}

void Xuat (int a[][Max], int n) {
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            cout <<a[i][j]<<"   ";
        }
        cout <<endl;
    }
}

int max (int a[][Max], int n) {
    int max=a[0][0];
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            if (a[i][j]>max) {
                max=a[i][j];
            }
        }
    }
    return max;
}

int min (int a[][Max], int n) {
    int min=a[0][0];
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            if (a[i][j]<min) {
                min=a[i][j];
            }
        }
    }
    return min;
}

void In (int a[][Max], int n) {
    for (int i=0; i<n-1; i++) {
        for (int j=1; j<n; j++) {
            if (i<j) {
                cout <<a[i][j]<<"   ";
            }
        }
    }
}

void Min_tungdong (int a[][Max], int n) {
    for (int i=0; i<n; i++) {
        int min=a[i][0];
        for (int j=0; j<n; j++) {
            if (a[i][j]<min) {
                min=a[i][j];
            }
        }
        cout <<"\nMin tren dong "<<i<<" la: "<<min;
    }
}

void Max_tungcot (int a[][Max], int n) {
    for (int j=0; j<n; j++) {
        int max=a[0][j];
        for (int i=0; i<n; i++) {
            if (a[i][j]>max) {
                max=a[i][j];
            }
        }
        cout <<"\nMax tren cot "<<j<<" la: "<<max;
    }
}

void Tong2matran (int a[][Max], int b[][Max], int c[][Max], int n) {
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            c[i][j]=a[i][j]+b[i][j];
        }
    }
}

void Tich2matran (int a[][Max], int b[][Max], int c[][Max], int n) {
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            c[i][j]=0;
            for (int k=0; k<n; k++) {
                c[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
}

void menu (int a[][Max], int b[][Max], int c[][Max], int n, int m) {
    while (true) {
        system("cls");
        cout <<"\n\n\t\t=====MENU=====\n";
        cout <<"0. Ket thuc\n";
        cout <<"1. Tim phan tu lon nhat cua ma tran\n";
        cout <<"2. Tim phan tu nho nhat cua ma tran\n";
        cout <<"3. In ra cac phan tu nam nua tren duong cheo chinh\n";
        cout <<"4. Tim gia tri nho nhat tren tung dong cua ma tran\n";
        cout <<"5. Tim gia tri lon nhat tren tung cot cua ma tran\n";
        cout <<"6. Tinh tong 2 ma tran\n";
        cout <<"7. Tinh tich 2 ma tran\n";
        cout <<"\n\n\t\t=====END=====\n";
        int luachon;
        cout <<"\n\n\t\t=====XUAT MA TRAN=====\n";
        Xuat(a,n);
        cout <<"\nNhap lua chon: ";
        cin >> luachon;
        if (luachon==0) {
            break;
            system("pause");
        } else if (luachon==1) {
            cout <<"\nPhan tu lon nhat cua ma tran: "<<max(a,n);
            system("pause");
        } else if (luachon==2) {
            cout <<"\nPhan tu nho nhat cua ma tran: "<<min(a,n);
            system("pause");
        } else if (luachon==3) {
            cout <<"\nCac phan tu nam nua tren duong cheo chinh\n";
            In(a,n);
            system("pause");
        } else if (luachon==4) {
            Min_tungdong(a,n);
            system("pause");
        } else if (luachon==5) {
            Max_tungcot(a,n);
            system("pause");
        } else if (luachon==6) {
            cout <<"\n\n\t\t=====NHAP MA TRAN B=====\n";
            NhapB(b,n,m);
            Tong2matran(a,b,c,n);
            cout <<"\n\n\t\t=====TONG 2 MA TRAN=====\n";
            Xuat(c,n);
            system("pause");
        } else if (luachon==7) {
            cout <<"\n\n\t\t=====NHAP MA TRAN B=====\n";
            NhapB(b,n,m);
            Tich2matran(a,b,c,n);
            cout <<"\n\n\t\t=====TICH 2 MA TRAN=====\n";
            Xuat(c,n);
            system("pause");
        } 
    }
}

int main () {
    int a[Max][Max],b[Max][Max],c[Max][Max];
    int n,m;
    cout <<"\n\n\t\t=====NHAP MA TRAN A=====\n";
    Nhap(a,n);
    menu(a,b,c,n,m);
    system("pause");
    system("cls");
    return 0;
}