#include <iostream>
using namespace std;

void Nhap (int *&a, int &n) {
    cout <<"\nNhap so luong phan tu mang: ";
    cin >>n;
    a=new int[n];
    cout <<"\n\n\t\t=====NHAP MANG=====\n";
    for (int i=0; i<n; i++) {
        cout <<"\nNhap a["<<i<<"]: ";
        cin >>*(a+i);
    }
}

void Xuat (int *a, int n) {
    for (int i=0; i<n; i++) {
        cout <<*(a+i)<<"   ";
    }
}

int Tong (int *a, int n) {
    int sum=0;
    for (int i=0; i<n; i++) {
        sum+=*(a+i);
    }
    return sum;
}

void sapxepgiamdan (int *a, int n) {
    for (int i=0; i<n; i++) {
        for (int j=i+1; j<n; j++) {
            if (*(a+i)<*(a+j)) {
                int t=*(a+i);
                *(a+i)=*(a+j);
                *(a+j)=t;
            }
        }
    }
}

int main () {
    int *a,n;
    Nhap(a,n);
    cout <<"\n\n\t\t=====XUAT MANG=====\n\n";
    Xuat(a,n);
    cout <<"\n\nTong cua cac phan tu trong mang la: "<<Tong(a,n);
    sapxepgiamdan(a,n);
    cout <<"\n\n\t\t=====MANG SAU KHI SAP XEP=====\n\n";
    Xuat(a,n);
    system("pause");
    system("cls");
    return 0;
}