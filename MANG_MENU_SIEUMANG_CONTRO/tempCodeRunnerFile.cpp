#include <iostream>
#include <cmath>
#include <string>
using namespace std;

void tanso_noitiep (float l, float c) {
    cout <<"\nTan so cong huong cua mach LC khi mac noi tiep: ";
    cout <<"\nf = "<< 1/(2*3.14*sqrt(l*c))<<" (Hz)";
}

void tanso_songsong (float l, float c, float r) {
    float t=(1/(l*c))-((r*r)/(4*l*l));
    if (t<0) {
        cout <<"\nMath Error!!!";
        system("pause");
        system("cls");
    } else {
        cout <<"\nTan so cong huong cua mach LC khi mac song song: ";
        cout <<"\nf = "<< (1/(2*3.14))*(sqrt(t))<<" (Hz)"; 
        system("pause");
        system("cls");
    }
}

void menu (float l, float c, float r) {
    while (true) {
        system("cls");
        cout <<"\n\n\t\t=====CHUONG TRINH=====";
        cout <<"\n1. Tinh tan so cong huong cua mach LC khi mac noi tiep";
        cout <<"\n2. Tinh tan so cong huong cua mach LC khi mac song song";
        cout <<"\n\n\t\t==========END=========";
        string n;
        cout <<"\nNhap lua chon: ";
        getline (cin,n);
        if (n!="1"&&n!="2") {
            cout <<"\nBan muon thoat chuong trinh (y/Y) ?";
            string k;
            getline (cin,k);
            if (k=="y" || k=="Y") {
                continue;
            } else {
                cout <<"\nTam biet va hen gap lai !";
                break;
                system ("pause");
                system("cls");
            }
            cin.ignore();
        } else if (n=="1") {
            do {
                cout <<"\nNhap L: ";
                cin >>l;
                if (l<0) {
                    cout <<"\nGia tri khong hop le, vui long nhap lai !";
                }
            } while (l<0);
            do {
                cout <<"\nNhap C: ";
                cin >>c;
                if (c<0) {
                    cout <<"\nGia tri khong hop le, vui long nhap lai !";
                }
            } while (c<0);
            tanso_noitiep(l,c);
            system("pause");
            system("cls");
            cin.ignore();
        } else if (n=="2") {
            do {
                cout <<"\nNhap L: ";
                cin >>l;
                if (l<0) {
                    cout <<"\nGia tri khong hop le, vui long nhap lai !";
                }
            } while (l<0);
            do {
                cout <<"\nNhap C: ";
                cin >>c;
                if (c<0) {
                    cout <<"\nGia tri khong hop le, vui long nhap lai !";
                }
            } while (c<0);
            do {
                cout <<"\nNhap R: ";
                cin >>r;
                if (r<0) {
                    cout <<"\nGia tri khong hop le, vui long nhap lai !";
                }
            } while (r<0);
            tanso_songsong(l,c,r);
            system("cls");
            cin.ignore();
        }
    }
}

int main () {
    float l,c,r;
    menu(l,c,r);
    system("pause");
    system("cls");
    return 0;
}