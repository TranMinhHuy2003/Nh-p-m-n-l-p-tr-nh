#include <iostream>
#include <cstring>
using namespace std;
#define Max 100

void Nhap (char c[]) {
    cout <<"\nNhap chuoi: ";
    gets(c);
}

void Xuat (char c[]) {
    int i=0;
    while (c[i]!='\0') {
        cout <<c[i];
        i++;
    }
}

void XuatInHoa (char c[]) {
    int i=0;
    cout <<"\nXuat cac ki tu in hoa trong chuoi: ";
    while (c[i]!='\0') {
        if ((int)(c[i])>=65&&(int)(c[i])<=90) {
            cout <<c[i]<<"   ";
        }
        i++;
    }
}

void DaoNguocChuoi (char c[]) {
    cout <<"\nChuoi dao nguoc: ";
    for (int i=strlen(c)-1; i>=0; i--) {
        cout <<c[i];
    }
}

void In (char c[]) {
    for (int i=0; i<strlen(c); i++) {
        if (i%2==0) {
            if ((int)(c[i])>=97&&(int)(c[i])<=122) {
                c[i]-=32;
            }
        } else {
            if ((int)(c[i])>=65&&(int)(c[i])<=90) {
                c[i]+=32;
            }
        }
    }
    cout <<"\nChuoi sau khi xu ly: ";
    Xuat(c);
}

void menu (char c[]) {
    while (true) {
        cout <<"\n\n\t\t=====MENU=====\n";
        cout <<"0. Ket thuc\n";
        cout <<"1. Xuat cac ki tu in hoa trong chuoi\n";
        cout <<"2. Dao nguoc cac ki tu trong chuoi\n";
        cout <<"3. In ra chuoi co dang o vi tri chan la ky tu viet hoa va o vi tri le la ky tu viet thuong\n";
        cout <<"\n\n\t\t=====END=====\n";
        int luachon;
        cout <<"\nNhap lua chon: ";
        cin >> luachon;
        if (luachon==0) {
            break;
            system("pause");
            system("cls");
        } else if (luachon==1) {
            XuatInHoa(c);
            system("pause");
            system("cls");
        } else if (luachon==2) {
            DaoNguocChuoi(c);
            system("pause");
            system("cls");
        } else if (luachon==3) {
            In(c);
            system("pause");
            system("cls");
        }
    }
}

int main () {
    char c[Max];
    Nhap(c);
    cout <<"\nXuat chuoi: ";
    Xuat(c);
    menu(c);
    system("pause");
    system("cls");
    return 0;
}