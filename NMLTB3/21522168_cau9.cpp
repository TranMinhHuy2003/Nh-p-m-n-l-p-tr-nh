#include <iostream>
using namespace std;

float giaithua (int n) {
    float p=1;
    for (int i=1; i<=n; i++) {
        p*=i;
    }
    return p;
}

int main() {
    int n;
    do {
        cout <<"\nNhap so nguyen duong n: ";
        cin >> n;
        if (n<=0) {
            cout <<"\nn khong hop le, vui long nhap lai!";
        }
    } while (n<=0);
    cout <<n<<"! = "<<giaithua(n);
    system("pause");
    system("cls");
	return 0;
}