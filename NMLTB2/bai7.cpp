#include <iostream>
using namespace std;

int main () {
    char c;
    cout <<"\nNhap chu can doi: ";
    cin >>c;
    int chu=int(c);
    if (chu>=65&&chu<=90) {
        c=c+32;
        cout <<"\nChu hoa doi sang chu thuong: "<<char(c);
    } else if (chu>=97&&chu<=122) {
        c=c-32;
        cout <<"\nChu thuong doi sang chu hoa: "<<char(c);
    } else {
        cout <<"\nKhong doi duoc!";
    }
    system("pause");
    system("cls");
    return 0;
}