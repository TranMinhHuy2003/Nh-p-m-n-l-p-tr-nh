#include <iostream> 
using namespace std;
int main () {
    while (true) {
        cout <<"\n\n\t\t ======= MENU =======" <<endl;
        cout <<"1. Liet ke tat ca cac uoc so cua so nguyen duong n" << endl;
        cout <<"2. Kiem tra xem n co phai la SO DOI XUNG hay khong" << endl;
        cout <<"3. Xuat cac chu so chan cua so nguyen duong n" << endl;
        cout <<"4. Tinh tong cac chu so le cua so nguyen duong n" << endl;
        cout <<"0. Ket thuc" << endl;
        cout <<"\n\n\t\t ======= END ======="<<endl;
    long long a,n ;
    cout <<"Nhap lua chon: ";
    cin >> a;
    if (a==0) {
        cout << "Ket thuc" ;
        break;
    } else if (a==1) {
        do {
           cout <<"Nhap n: " ;
           cin >>n;
           if (n<=5 || (n%2) !=0) {
               cout <<"Gia tri n khong thoa man de bai"<< endl;
           }
        } while  ( n<=5 || (n%2) !=0);
          int i=1;
           while (i<=n) {
               if (n%i==0) {
                   cout << i <<" " ;
               }
               i++;
           }
    }else if (a==2) {
        do {
           cout <<"Nhap n: " ;
           cin >>n;
           if (n<=0) {
               cout <<"Gia tri n khong thoa man de bai"<< endl;
           }
        } while  ( n<=0);
        int s=0;
        int tam=n;
        while (n!=0) {
            s = s*10 + (n%10);
            n=n/10 ;
        }
        if (tam==s) {
            cout << tam <<" la SO DOI XUNG";
        }else {
            cout << tam << " khong la SO DOI XUNG" ;
        }
    }else if (a==3) {
         do {
           cout <<"Nhap n: " ;
           cin >>n;
           if (n<=0) {
               cout <<"Gia tri n khong thoa man de bai"<< endl;
           }
        } while  ( n<=0);
        long long t=n;
        while (t>0) {
            if ((t%10)%2==0 && (t%10)!=0) {
               cout << (t%10) <<" ";
               t=t/10;
            } else if ((t%10)==0){
                t=t/10;
            } else {
                t=t/10;
            }
        }

    } else if (a==4) {
          do {
           cout <<"Nhap n: " ;
           cin >>n;
           if (n<=0) {
               cout <<"Gia tri n khong thoa man de bai"<< endl;
           }
        } while  ( n<=0);
         int sum = 0;
        while (n>0) {
            if((n%10)%2!=0) {
                sum = sum +(n%10);
                n=n/10;
            } else {
                n=n/10;
            }
        }
        cout << "Tong cac chu so le cua so nguyen duong n la: " << sum ;
    }
    }
    system("pause");
    system("cls");
    return 0;
}