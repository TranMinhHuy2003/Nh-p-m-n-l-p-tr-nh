#include <iostream>
using namespace std;

void Nhap (int a[], int &n) {
    cout <<"\n\n\t\t=====NHAP MANG=====";
    for (int i=0; i<n; i++) {
        cout <<"\nNhap a["<<i<<"]: ";
        cin >>a[i];
    }
}

void Xuat (int a[], int n) {
    cout <<"\n\n\t\t=====XUAT MANG====="<<endl<<endl;
    for (int i=0; i<n; i++) {
        cout <<a[i]<<" ";
    }
}

int timkiem (int a[], int n, int x) {
    for (int i=0; i<n; i++) {
        if (x==a[i]) {
            return i;
        }
    }
    return -1;
}

int main () {
    int a[100],n,x;
    do {
        cout <<"\nNhap so luong phan tu mang: ";
        cin >>n;
        if (n<0||n>100) {
            cout <<"\nSo luong phan tu khong hop le!";
        }
    } while (n<0||n>100);
    Nhap(a,n);
    Xuat(a,n);
    cout <<"\nNhap gia tri can tim: ";
    cin >>x;
    int t=timkiem(a,n,x);
    if (timkiem(a,n,x)!=-1) {
        cout <<x<<" nam trong mang o vi tri dau tien la: "<<t+1;
    } else {
        cout <<x<<" khong nam trong mang";
    }
    system("pause");
    system("cls");
    return 0;
}