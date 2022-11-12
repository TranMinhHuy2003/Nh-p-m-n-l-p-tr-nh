#include <iostream>
using namespace std;

void Tinh_tong (int n) {
    int sum=0;
    for (int i=1; i<=n; i++) {
        sum+=i;
    }
    cout <<"Tong tu 1 den n: " << sum;
}

int Timmax (int a, int b, int c) {
    int max=a;
    if (b>max) {
        max=b;
    } if (c>max) {
        max=c;
    }
    return max;
} 

void menu (int n, int a, int b, int c) {
    while (true) {
        system("cls");
        cout <<"\n\n\t\t=====MENU=====\n";
        cout <<"0. Ket thuc\n";
        cout <<"1. Tinh tong tu 1 den n\n";
        cout <<"2. Tim max trong 3 so\n";
        cout <<"\n\n\t\t=====END=====\n";
        int luachon;
        cout <<"Nhap lua chon: ";
        cin >> luachon;
        if (luachon==0) {
            break;
            system("pause");
            system("cls");
        } else if (luachon==1) {
            do {
                cout <<"Nhap n: ";
                cin >> n;
                if (n<1) {
                    cout <<"Vui long nhap so lon hon hoac bang 1!\n";
                }
            } while (n<1);
            Tinh_tong(n);
            system("pause");
            system("cls");
        } else if (luachon==2) {
            cout <<"Nhap a: ";
            cin >> a;
            cout <<"Nhap b: ";
            cin >> b;
            cout <<"Nhap c: ";
            cin >> c;
            cout << "Gia tri lon nhat la: " << Timmax(a,b,c);
            system("pause");
            system("cls");
        }

    }
}

int main () {
    int n,a,b,c;
    menu(n,a,b,c);
    system("pause");
    system("cls");
    return 0;
}




























