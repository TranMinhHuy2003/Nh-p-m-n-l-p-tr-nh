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
    int s=0;
    for (int i=13; i<=(n*10+3); i+=10) {
        s+=i;
    }
    cout <<"\nS = "<<s;
    system("pause");
    system("cls");
	return 0;
}