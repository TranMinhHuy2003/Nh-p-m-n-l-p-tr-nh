#include <iostream>
using namespace std;

int main () {
    float a;
    cout <<"\nNhap a: ";
    cin >> a;
    if (a>=1&&a<=9) {
        cout <<a;
    } else { 
        cout <<"\nKhong doc duoc!";
    }
    system("pause");
    system("cls");
    return 0;
}