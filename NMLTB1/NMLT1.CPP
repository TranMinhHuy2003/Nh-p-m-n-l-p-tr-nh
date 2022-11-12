#include <iostream>
using namespace std;

int main () {
    int a,b,c,d;
    float tbc;
    cout <<"\nNhap a: ";
    cin >>a;
    cout <<"\nNhap b: ";
    cin >>b;
    cout <<"\nNhap c: ";
    cin >>c;
    cout <<"\nNhap d: ";
    cin >>d;
    tbc=float(a+b+c+d)/4;
    cout << "\nGia tri trung binh cong cua 4 so a,b,c,d la: "<< tbc;
    system("pause");
    system("cls");
    return 0;
}
