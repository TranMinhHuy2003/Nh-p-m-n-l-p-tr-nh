#include <iostream>
using namespace std;

void Nhap_mang (int *&a, int &n) {
    for (int i=0; i<n; i++) {
        cout <<"Nhap a["<<i<<"]: ";
        cin >> a[i];
    }
}

void Xuatmang (int *a, int n) {
    for (int i=0; i<n; i++) {
        cout << a[i] << " ";
    }
}

void capphat (int *&a, int moi, int cu) {
    int *b=new int [cu];
    for (int i=0; i<cu; i++) {
        b[i]=a[i];
    }
    delete []a;
    a=new int [moi];
    for (int i=0; i<cu; i++) {
       a[i]=b[i];
    }
    delete []b;
}

void them (int *&a, int &n, int x, int k) {
    capphat (a,n+1,n) ;
    for (int i=n-1; i>=k; i--) {
        a[i+1]=a[i];
    }
    a[k]=x;
    n++;
}

void Xoa (int *&a, int &n, int k) {
    for (int i=k; i<=(n-1); i++) {
        a[i]=a[i+1];
    }
    n--;
    capphat (a,n,n);
}

int main () {
    int n;
    do {
        cout <<"\nNhap so luong phan tu mang: ";
        cin >>n;
        if (n<=0) {
            cout <<"\nSo luong khong hop le";
        }
    } while (n<=0);
    int*a=new int[n];
    cout <<"\n\n\t\tNHAP MANG\n";
    Nhap_mang(a,n);
    cout <<"\n\n\t\tXUAT MANG\n";
    Xuatmang(a,n);
    int k,x;
    do {
        cout <<"\nNhap vi tri muon them: ";
        cin >>k;
        if (k<0||k>(n-1)) {
            cout <<"\nVi tri khong hop le"<<endl;
        }
    } while (k<0||k>(n-1)) ;
    cout <<"\nNhap phan tu muon them: ";
    cin >> x;
    them(a,n,x,k);
    cout <<"\n\n\tMANG SAU KHI THEM\n";
    Xuatmang(a,n);
    do {
        cout <<"\nNhap vi tri muon xoa: ";
        cin >>k;
        if (k<0||k>(n-1)) {
            cout <<"\nVi tri khong hop le";
        }
    } while (k<0||k>(n-1)) ;
    Xoa(a,n,k);
    cout <<"\n\n\tMANG SAU KHI XOA\n";
    Xuatmang(a,n);
    
    delete []a;
    system ("pause");
    system("cls");
    return 0;
}

