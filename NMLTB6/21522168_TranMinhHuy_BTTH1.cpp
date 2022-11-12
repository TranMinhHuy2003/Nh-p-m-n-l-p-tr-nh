#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <cmath>
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
        a[i] = rand()%11+10;
    }
}

void Xuat (int a[], int n) {
    for (int i=0; i<n; i++) {
        cout <<a[i]<<"   ";
    }
}

int MAX (int a[], int n) {
    int max=a[0];
    for (int i=1; i<n; i++) {
        if (a[i]>max) {
            max=a[i];
        }
    }
    return max;
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

bool kiemtratangdan (int a[], int n) {
    for (int i=0; i<n; i++) {
        for (int j=i+1; j<n; j++) {
            if (a[i]>a[j]) {
                return false;
            }
        }
    }
    return true;
}

bool KTSNT(int n)
{
    if (n < 2)    
        return false;

    for (int i = 2; i <= sqrt((float)n); i ++)
    {
        if (n%i==0)
        {
            return 0;
        }
    }
    return true;
}

int Timsonguyento (int a[], int n) {
    int snt;
    int flag=0;
    for (int i=0; i<n; i++) {
        if (KTSNT(a[i])) {
            snt=a[i];
            flag=1;
        } 
    }
    if (flag==0) {
        return -1;
    } else {
        return snt;
    }
}

void menu (int a[], int n) {
    while (true) {
        system("cls");
        cout <<"\n\n\t\t=====MENU=====\n";
        cout <<"0. Ket thuc\n";
        cout <<"1. Tim gia tri lon nhat trong mang va xuat ra man hinh\n";
        cout <<"2. Tim vi tri phan tu nho nhat trong mang\n";
        cout <<"3. Kiem tra xem mang co phai la mang tang dan hay khong?\n";
        cout <<"4. Tim so nguyen to cuoi cung trong mang, neu mang khong co so nguyen to thi tra ve -1\n";
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
            cout <<"\nGia tri lon nhat trong mang la: "<<MAX(a,n);
            system("pause");
        } else if (luachon==2) {
            cout <<"\nVi tri phan tu nho nhat trong mang la: "<<TimViTriMin(a,n);
            system("pause");
        } else if (luachon==3) {
            if (kiemtratangdan(a,n)) {
                cout <<"\nMang tren tang dan";
            } else {
                cout <<"\nMang tren khong tang dan";
            }
            system("pause");
        } else if (luachon==4) {
            cout <<Timsonguyento(a,n);
            system("pause");
        }
    }
}

int main () {
    int a[Max];
    int n;
    PhatSinh(a,n);
    menu(a,n);
    system("pause");
    system("cls");
    return 0;
}