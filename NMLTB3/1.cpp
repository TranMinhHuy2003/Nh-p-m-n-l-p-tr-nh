#include <iostream>
using namespace std;

int main () {
    int n;
    do {
        cout <<"\nNhap so nguyen duong n: ";
        cin>>n;
        if (n<=0) {
            cout <<"\nn khong hop le, vui long nhap lai!";
        }
    } while (n<=0);
    int k;
    cout <<"\nSo dao nguoc cua "<<n<<" la: ";
    do {
        k=n%10;
        n/=10;
        cout <<k;
    } while (n!=0);
    system("pause");
    system("cls");
    return 0;
}