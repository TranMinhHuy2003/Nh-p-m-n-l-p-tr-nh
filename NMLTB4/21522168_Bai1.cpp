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

void sodao (int n) {
    cout << "So dao nguoc cua " << n << " la: ";
    for (; n ; n = n / 10) {
        cout << n % 10;
    }
}

bool sochinhphuong (int n) {
    int i = 0;
    while(i*i <= n){
        if(i*i == n){
            return true;
            return 0;
        }
        ++i;
    }
    return false;
}

bool KTSNT (int n) {
    if (n<2) {
        return false;
    } else {
        if (n==2) {
            return true;
        } else {
            if (n%2==0) {
                return false;
            } else {
                for (int i=2; i<n; i++) {
                    if (n%i==0) {
                        return false;
                    } else {
                        return true ;
                    }
                }
            }
        }
    }
    return true;
}

int tongsole (int n) {
    int s=0,a;
    while (n!=0) {
        a=n%10;
        n=n/10;
        if (a%2!=0) {
            s+=a;
        }
    }
    return s;
}

int tongsonguyentonhohonn (int n) {
    int s=0;
    for (int i=2; i<n; i++) {
        bool kt=KTSNT(i);
        if (kt==true) {
            s+=i;
        }
    }
    return s;
}

int tongsochinhphuongnhohonn (int n) {
    int s=0;
    for (int i=1; i<n; i++) {
        bool kt=sochinhphuong(i);
        if (kt==true) {
            s+=i;
        }
    }
    return s;
}

void tonguocso (int n) {
    int S=0;
    cout<<"Cac uoc so cua "<<n<<" la: ";
    for(int i = 1; i <= n; i++) {
        if(n % i == 0) {
            cout<< i << " ";
            S = S + i;
        }
    }
  cout<<"\nTong cac uoc so cua "<<n<<" la: "<<S;
}

void menu (int n) {
    Nhap(n);
    while (true) {
        system("cls");
        cout <<"\n\n\t\t=====MENU=====\n";
        cout <<"0. Ket thuc\n";
        cout <<"1. Tra ve so dao cua n\n";
        cout <<"2. n co phai la so chinh phuong hay khong\n";
        cout <<"3. n co phai la so nguyen to hay khong\n";
        cout <<"4. Tong cac chu so le cua n\n";
        cout <<"5. Tong cac so nguyen to nho hon n\n";
        cout <<"6. Tong cac so chinh phuong nho hon n\n";
        cout <<"7. Tong cac uoc so cua n\n";
        cout <<"\n\n\t\t=====END=====\n";
        int luachon;
        cout <<"Nhap lua chon: ";
        cin >> luachon;
        if (luachon==0) {
            break;
            system("pause");
            system("cls");
        } else if (luachon==1) {
            sodao(n);
            system("pause");
            system("cls");
        } else if (luachon==2) {
            bool kt=sochinhphuong(n);
            if (kt==true) {
                cout <<n<<" la so chinh phuong";
            } else {
                cout <<n<<" khong la so chinh phuong";
            }
            system("pause");
            system("cls");
        } else if (luachon==3) {
            bool kt=KTSNT(n);
            if (kt==true) {
                cout <<n<<" la so nguyen to";
            } else {
                cout <<n<<" khong la so nguyen to";
            }
            system("pause");
            system("cls");
        } else if (luachon==4) {
            cout <<"\nTong cac chu so le cua n: "<<tongsole(n);
            system("pause");
            system("cls");
        } else if (luachon==5) {
            cout <<"\nTong cac so nguyen to nho hon n: "<<tongsonguyentonhohonn(n);
            system("pause");
            system("cls");
        } else if (luachon==6) {
            cout <<"\nTong cac so chinh phuong nho hon n: "<<tongsochinhphuongnhohonn(n);
            system("pause");
            system("cls");
        } else if (luachon==7) {
            tonguocso(n);
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