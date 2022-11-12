#include <iostream>
#include <cmath>
using namespace std;

int main () {
    int h;
    do {
        cout <<"\nNhap chieu cao tam giac: ";
        cin >>h;
        if (h<=0) {
            cout <<"\nGia tri khong hop le, vui long nhap lai!";
        }
    } while (h<=0);
    for (int i=1; i<h; i++) {
        for (int j=1; j<2*h; j++) {
            if (abs(h-j)<=i-1) {
                cout <<" * ";
            } else {
                cout <<"   ";
            }
        }
        cout <<endl;
    }
    system("pause");
    system("cls");
    return 0;
}