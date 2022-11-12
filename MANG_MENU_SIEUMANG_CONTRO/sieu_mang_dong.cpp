#include <iostream>
using namespace std;

void capphat (int *&a, int moi, int cu) {
    int *b=new int [cu];
    for (int i=0; i<cu; i++) {
        b[i]=a[i];
    }
    delete []a;
    a=new int [moi];
    for (int i=0; i<cu; i++) {
       a[i]=b[i];
    }
    delete []b;
}

void Nhap_mang (int *&a, int &n, int x) {
   if (n==0) {
       a=new int ;
   } else {
       capphat (a,n+1,n);
   }
   a[n]=x;
   n++;
}

void Xuat_mang (int *a, int n ) {
    for (int i=0; i<n; i++) {
        cout <<a[i]<< " ";
    }
}

void Menu (int *&a, int n) {
    while (true) {
        system ("cls");
        cout<<"\n\n\t\t======MENU======\n";
        cout<<"1. Nhap phan tu mang\n";
        cout<<"2. Xuat mang\n";
        cout<<"0. Ket thuc\n";
        cout<<"\n\n\t\t======END======\n";
    int l,x;
    cout <<"Nhap lua chon: ";
    cin >> l;
    switch (l) {
        case 0: {
            return;
        } break;
        case 1: {
            cout <<"Nhap phan tu: ";
            cin >> x;
            Nhap_mang(a, n, x);
        } break;
        case 2: {
            cout <<"\n\n\t\tXUAT MANG\n";
            Xuat_mang(a,n);
            system ("pause");
        } break;
    }
  }
}

int main () {
    int *a=NULL;
    int n=0;
    Menu(a, n);
    delete []a;
    system ("pause");
    system ("cls");
    return 0;
}
