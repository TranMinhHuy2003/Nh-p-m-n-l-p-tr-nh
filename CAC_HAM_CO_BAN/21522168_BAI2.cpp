#include <iostream>
using namespace std;

int main () {
    int d;
    long n,k;
    do {
        cout <<"\nNhap N: ";
        cin >>n;
        if (n<1) {
            cout <<"\nN phai lon hon hoac bang 1, vui long nhap lai!";
        }
    } while (n<1);
    do {
        cout <<"\nNhap K: ";
        cin >>k;
        if (k<1 || k>n) {
            cout <<"\nK phai lon hon hoac bang 1 va nho hon hoac bang N, vui long nhap lai!";
        }
    } while (k<1 || k>n);
    do {
        cout <<"\nNhap D: ";
        cin >>d;
        if (d<1 || d>6) {
            cout <<"\nD phai lon hon hoac bang 1 va nho hon hoac bang 6, vui long nhap lai!";
        }
    } while (d<1 || d>6);
    int dem=0;
    for (int i=1; i<=n; i++) {
        if ((i*k)%d==0) {
            dem++;
        }
    }
    cout << dem;
    system("pause");
    system("cls");
    return 0;
}