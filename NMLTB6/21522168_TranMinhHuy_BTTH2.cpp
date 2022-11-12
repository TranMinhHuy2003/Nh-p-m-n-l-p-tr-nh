#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
#define Max 100

void PhatSinh (int a[][Max], int &m, int &n) {
    do {
        cout <<"\nNhap so dong ma tran: ";
        cin>>m;
        if (m<=0||m>Max) {
            cout <<"\nSo dong khong hop le, vui long nhap lai!";
        }
    } while (m<=0||m>Max);
    do {
        cout <<"\nNhap so cot ma tran: ";
        cin>>n;
        if (n<=0||n>Max) {
            cout <<"\nSo cot khong hop le, vui long nhap lai!";
        }
    } while (n<=0||n>Max);
    srand(time(NULL));
    for (int i=0; i<m; i++) {
        for (int j=0; i<n; j++) {
            a[i][j] = rand()%11+10;
        }
    }
}

void Xuat (int a[][Max], int m, int n) {
    for (int i=0; i<m; i++) {
        for (int j=0; j<n; j++) {
            cout <<a[i][j]<<"   ";
        }
        cout<<endl;
    }
}

int TongDuongCheoChinh (int a[][Max], int m, int n) {
    int sum=0;
    for (int i=0; i<m; i++) {
        for (int j=0; j<n; j++) {
            if (i==j) {
                sum+=a[i][j];
            }
        }
    }
    return sum;
}

int TongNuaTrenDuongCheoChinh (int a[][Max], int m, int n) {
    int sum=0;
    for (int i=0; i<m; i++) {
        for (int j=0; j<n; j++) {
            if (i<j) {
                sum+=a[i][j];
            }
        }
    }
    return sum;
}

void menu (int a[][Max], int m, int n) {
    while (true) {
        system("cls");
        cout <<"\n\n\t\t=====MENU=====\n";
        cout <<"0. Ket thuc\n";
        cout <<"1. Tinh tong cac phan tu tren duong cheo chinh\n";
        cout <<"2. Tinh tong cac phan tu nua tren duong cheo chinh\n";
        cout <<"\n\n\t\t=====END=====\n";
        cout <<"\n\n\t\t=====XUAT MANG=====\n";
        Xuat(a,m,n);
        int luachon;
        cout <<"\nNhap lua chon: ";
        cin >> luachon;
        if (luachon==0) {
            break;
            system("pause");
            system("cls");
        } else if (luachon==1) {
            cout <<"\nTong cac phan tu tren duong cheo chinh: "<<TongDuongCheoChinh(a,m,n);
            system("pause");
        } else if (luachon==2) {
            cout <<"\nTong cac phan tu nua tren duong cheo chinh: "<<TongNuaTrenDuongCheoChinh(a,m,n);
            system("pause");
        } 
    }
}

int main () {
    int a[Max][Max];
    int m,n;
    PhatSinh(a,m,n);
    menu(a,m,n);
    system("pause");
    system("cls");
    return 0;
}