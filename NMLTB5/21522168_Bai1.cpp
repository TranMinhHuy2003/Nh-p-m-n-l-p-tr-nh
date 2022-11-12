#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
#define Max 100

void PhatSinh (int a[], int &n) {
    do {
        cout <<"\nNhap so luong phan tu mang: ";
        cin>>n;
        if (n<=0||n>Max) {
            cout <<"\nSo luong phan tu khong hop le, vui long nhap lai!";
        }
    } while (n<=0||n>Max);
    srand(time(NULL));
    for (int i=0; i<n; i++) {
        a[i] = rand()%50+1;
    }
}

void Xuat (int a[], int n) {
    for (int i=0; i<n; i++) {
        cout <<a[i]<<"   ";
    }
}

int Tong (int a[], int n) {
    int s=0;
    for (int i=0; i<n; i++) {
        s+=a[i];
    }
    return s;
}

void dem (int a[], int n) {
    int x;
    int dem=0;
    cout <<"\nNhap phan tu x can dem: ";
    cin >>x;
    for (int i=0; i<n; i++) {
        if (a[i]==x) {
            dem++;
        }
    }
    cout <<"\nPhan tu x xuat hien "<<dem<<" lan";
}

void XuatChannhohon20 (int a[], int n) {
    int flag=0;
    for (int i=0; i<n; i++) {
        if (a[i]%2==0&&a[i]<20) {
            cout <<a[i]<<"   ";
            flag=1;
        }
    }
    if (flag==0) {
        cout <<"\nKhong co so nao!";
    }
}

int TimViTriMin (int a[], int n) {
    int min=a[0];
    int vitrimin=0;
    for (int i=1; i<n; i++) {
        if (a[i]<min) {
            min=a[i];
            vitrimin=i;
        }
    }
    return vitrimin;
}

void XuatDayDaoNguoc (int a[], int b[], int n) {
    for (int i=0; i<n; i++) {
        b[n-1-i]=a[i];
    }
    Xuat(b,n);
}

void menu (int a[], int b[], int n) {
    while (true) {
        system("cls");
        cout <<"\n\n\t\t=====MENU=====\n";
        cout <<"0. Ket thuc\n";
        cout <<"1. Tinh tong cac phan tu trong mang\n";
        cout <<"2. Dem so lan xuat hien 1 phan tu x bat ky\n";
        cout <<"3. Xuat cac phan tu chan nho hon 20\n";
        cout <<"4. Tim vi tri phan tu nho nhat trong mang\n";
        cout <<"5. Xuat ra day dao nguoc\n";
        cout <<"\n\n\t\t=====END=====\n";
        cout <<"\n\n\t\t=====XUAT MANG=====\n";
        Xuat(a,n);
        int luachon;
        cout <<"\nNhap lua chon: ";
        cin >> luachon;
        if (luachon==0) {
            break;
            system("pause");
            system("cls");
        } else if (luachon==1) {
            cout <<"\nTong cac phan tu trong mang: "<<Tong(a,n);
            system("pause");
            system("cls");
        } else if (luachon==2) {
            dem(a,n);
            system("pause");
            system("cls");
        } else if (luachon==3) {
            XuatChannhohon20(a,n);
            system("pause");
            system("cls");
        } else if (luachon==4) {
            cout <<"\nPhan tu nho nhat trong mang nam o vi tri thu "<<TimViTriMin(a,n);
            system("pause");
            system("cls");
        } else if (luachon==5) {
            cout <<"\n\n\t\t=====XUAT MANG DAO NGUOC=====\n";
            XuatDayDaoNguoc(a,b,n);
            system("pause");
            system("cls");
        } 
    }
}

int main () {
    int a[Max],b[Max];
    int n;
    PhatSinh(a,n);
    menu(a,b,n);
    system("pause");
    system("cls");
    return 0;
}