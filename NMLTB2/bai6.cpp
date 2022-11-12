#include <iostream>
using namespace std;

int main () {
    int gio,phut,giay;
    cout <<"\nNhap gio: ";
    cin >>gio;
    cout <<"\nNhap phut: ";
    cin >>phut;
    cout <<"\nNhap giay: ";
    cin >>giay;
    if(gio<0||phut>60||giay>60||phut<0||giay<0||gio>24) {
        cout<<"\nKhong hop le!";
    }
    else {
        cout<<"\nHop le!"<<endl;
        cout <<gio<<"h"<<phut<<"p"<<giay<<"s";
    }
    system("pause");
    system("cls");
    return 0;
}