#include <iostream>
#include <string>
using namespace std;

void tinh_dt_tron (float a) {
    do {
        cout <<"Nhap ban kinh hinh tron: ";
        cin >> a;
        if (a<=0) {
            cout <<"Vui long nhap lai ban kinh!\n";
        }
    }while (a<=0);
    cout <<"Dien tich hinh tron la: " <<3.14*a*a;
}

void tinh_dt_vuong (float a) {
    do {
        cout <<"Nhap canh hinh vuong: ";
        cin >> a;
        if (a<=0) {
            cout <<"Vui long nhap lai canh hinh vuong!";
        }
    } while (a<=0);
    cout <<"Dien tich hinh vuong la: " <<a*a;
}

void menu (int a, int b) {
    while (true) {
        system("cls");
        cout <<"\n\n\t\t=====MENU=====";
        cout <<"\nKet thuc";
        cout <<"\nTinh dien tich hinh tron";
        cout <<"\nTinh dien tich hinh vuong";
        cout <<"\n\n\t\t=====END=====";
        string s;
        do {
            cout <<"\nNhap lua chon: ";
            getline (cin, s);
            if (s!="Ket thuc"&&s!="Tinh dien tich hinh tron"&&s!="Tinh dien tich hinh vuong") {
                cout <<"\nVui long nhap lua chon theo dinh dang tren MENU!";
            } 
        } while (s!="Ket thuc"&&s!="Tinh dien tich hinh tron"&&s!="Tinh dien tich hinh vuong");
        if (s=="Ket thuc") {
            cout <<"Cam on ban da su dung chuong trinh!";
            break;
            system("pause");
            system("cls");
        } else if (s=="Tinh dien tich hinh tron") {
            tinh_dt_tron(a);
            system("pause");
            system("cls");
            cin.ignore();
        } else if (s=="Tinh dien tich hinh vuong") {
            tinh_dt_vuong(b);
            system("pause");
            system("cls");
            cin.ignore();
        }

    }
}

int main () {
    float a,b;
    menu(a,b);
    system("pause");
    system("cls");
    return 0;
}