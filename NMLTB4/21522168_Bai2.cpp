#include <iostream>
using namespace std;

void Nhap (int &n) {
    do {
        cout <<"\nNhap vao so nguyen duong n: ";
        cin>>n;
        if (n<=0) {
            cout <<"\nn khong hop le, vui long nhap lai!";
        } 
    } while (n<=0);
}

int cau1 (int n) {
    int s=0;
    for (int i=1; i<=n; i++) {
        s+=i;
    }
    return s;
}

int cau2 (int n) {
    int s=0;
    for (int i=12; i<=n*10+2; i=i+10) {
        s+=i;
    }
    return s;
}

float cau3 (int n) {
    float s=0;
    for (int i=1; i<=n; i++) {
        s+=1.0/i;
    }
    return s;
}

int cau4 (int n) {
    int p=1;
    for (int i=1; i<=n; i++) {
        p*=i;
    }
    return p;
}

long giaithua (int n) {
    if (n==0 || n==1) {
        return 1;
    } else {
        return n*giaithua (n-1);
    }
}

int cau5 (int n) {
    int s=0;
    for (int i=1; i<=n; i++) {
        s+=giaithua(i);
    }
    return s;
}

void menu (int n) {
    Nhap(n);
    while (true) {
        system("cls");
        cout <<"\n\n\t\t=====MENU=====\n";
        cout <<"0. Ket thuc\n";
        cout <<"1. S = 1 + 2 + 3 + ... + n\n";
        cout <<"2. S = 12 + 22 + 32 + ... + n2\n";
        cout <<"3. S = 1 + 1/2 + 1/3 + ... + 1/n\n";
        cout <<"4. S = 1 * 2 * 3 * ... * n\n";
        cout <<"5. S = 1! + 2! + 3! + ... + n!\n";
        cout <<"\n\n\t\t=====END=====\n";
        int luachon;
        cout <<"Nhap lua chon: ";
        cin >> luachon;
        if (luachon==0) {
            break;
            system("pause");
            system("cls");
        } else if (luachon==1) {
            cout <<"\nS = "<<cau1(n);
            system("pause");
            system("cls");
        } else if (luachon==2) {
            cout <<"\nS = "<<cau2(n);
            system("pause");
            system("cls");
        } else if (luachon==3) {
            cout <<"\nS = "<<cau3(n);
            system("pause");
            system("cls");
        } else if (luachon==4) {
            cout <<"\nS = "<<cau4(n);
            system("pause");
            system("cls");
        } else if (luachon==5) {
            cout <<"\nS = "<<cau5(n);
            system("pause");
            system("cls");
        }
    }
}

int main () {
    int n;
    menu(n);
    system("pause");
    system("cls");
    return 0;
}