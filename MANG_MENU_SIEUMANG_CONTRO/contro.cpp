#include <iostream>
using namespace std;

void Nhapmang (int a[], int n) {
    for (int i=0; i<n; i++) {
        cout <<"Nhap a[" <<i<<"]: ";
        cin >>a[i];
    }
}

void xuatmang (int a[], int n) {
    for (int i=0; i<n; i++) {
        cout <<a[i]<< " ";
    }
}

int main () {
    int n;
    do {
        cout << "Nhap so luong phan tu: ";
        cin >> n;
        if (n<=0) {
            cout <<"So luong khong hop le\n";
        }
    } while (n<=0);
    int *a= new int[n] ;
    cout <<"\n\n\t\tNHAP MANG\n";
    Nhapmang(a,n);
    cout <<"\n\n\t\tXUAT MANG\n";
    xuatmang(a,n);
    delete [] a;
    system ("pause");
    system ("cls");
    return 0;
}