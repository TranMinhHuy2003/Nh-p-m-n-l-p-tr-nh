#include <iostream>
using namespace std;

int main() {
    int n;
    do {
        cout <<"\nNhap so nguyen duong n: ";
        cin >> n;
        if (n<=0) {
            cout <<"\nn khong hop le, vui long nhap lai!";
        }
    } while (n<=0);
    float s=0;
    for (int i=1; i<=n; i++) {
        s+=1/float(i);
    }
    cout <<"\nS = "<<s;
    system("pause");
    system("cls");
	return 0;
}