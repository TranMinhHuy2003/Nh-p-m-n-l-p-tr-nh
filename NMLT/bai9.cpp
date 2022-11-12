#include <iostream>
using namespace std;

int ucln (int a, int b) {
    if (a == 0 || b == 0){
        return a + b;
    }
    while (a != b){
        if (a > b) {
            a -= b; 
        } else {
            b -= a;
        }
    }
    return a;
}

int main () {
    int a,b;
    do {
        cout <<"\nNhap so nguyen duong a: ";
        cin >>a;
        if (a<=0) {
            cout <<"\na khong hop le, vui long nhap lai!";
        }
    } while (a<=0);
    do {
        cout <<"\nNhap so nguyen duong b: ";
        cin >>b;
        if (b<=0) {
            cout <<"\nb khong hop le, vui long nhap lai!";
        }
    } while (b<=0);
    cout <<"\nUoc chung lon nhat cua "<<a<<" va "<<b<<" la: "<<ucln(a,b);
    system("pause");
    system("cls");
    return 0;
}