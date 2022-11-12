#include <iostream>
#include <cmath>
using namespace std;

int main () {
    int n;
    do {
        cout <<"\nNhap so nguyen duong n: ";
        cin >> n;
        if (n<=0) {
            cout <<"\nn khong hop le, vui long nhap lai!";
        }
    } while (n<=0);
    int t=sqrt(n);
    if (t*t==n) {
        cout <<n<<" la so chinh phuong";
    } else {
        cout <<n<<" khong la so chinh phuong";
    }
    system("pause");
    system("cls");
    return 0;
}