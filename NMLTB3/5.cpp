#include <iostream>

using namespace std;

int main() {
    int a,b;
    do {
        cout <<"\nNhap so nguyen duong a: ";
        cin >> a;
        if (a<=0) {
            cout <<"\na khong hop le, vui long nhap lai!";
        }
    } while (a<=0);
    do {
        cout <<"\nNhap so nguyen duong b: ";
        cin >> b;
        if (b<=0) {
            cout <<"\nb khong hop le, vui long nhap lai!";
        }
    } while (b<=0);
    int t=b;
    int n=a;
    while (a!=b) {
        if (a>b) {
            a = a - b;
        } else {
            b = b - a;
        }
    }
    cout <<"\nUCLN cua "<<n<<" va "<<t<<" la: "<<a;
    cout <<"\nBCNN cua "<<n<<" va "<<t<<" la: "<<(n*t)/a;
    system("pause");
    system("cls");
	return 0;
}