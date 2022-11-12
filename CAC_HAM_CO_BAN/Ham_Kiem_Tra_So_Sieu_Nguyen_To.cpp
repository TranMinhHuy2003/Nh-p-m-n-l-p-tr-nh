#include <iostream>
using namespace std;


void Nhap_Mang (int a[], int );
void Xuat_Mang (int a[], int );
bool Kiem_Tra_So_Nguyen_To (int );
void Xuat_So_Nguyen_To (int a[], int );
void Xuat_So_Sieu_Nguyen_To (int a[], int );


int main() {
    int a[100];
    int n;
    do {
        cout <<"Nhap so luong phan tu mang: ";
        cin  >> n;
        if (n<=0 || n>100) {
            cout <<"So luong phan tu khong hop le"<< endl;
        }

    } while(n<=0 || n>100);

    cout <<"\n\n\t\tNHAP MANG"<< endl;
    Nhap_Mang (a, n);
    cout <<"\n\n\t\tXUAT MANG"<<endl;
    Xuat_Mang (a, n);
    cout <<"\n\n\tCAC SO NGUYEN TO LA: ";
    Xuat_So_Nguyen_To (a, n);
    cout <<"\n\n\tCAC SO SIEU NGUYEN TO LA: ";
    Xuat_So_Sieu_Nguyen_To (a, n);
    
    return 0;
}

void Nhap_Mang (int a[], int n) {
    for (int i=0; i<n; i++) {
        cout << "Nhap a["<< i <<"]: ";
        cin >> a[i];
    }
}

void Xuat_Mang (int a[], int n) {
    for (int i=0; i<n; i++) {
        cout <<a[i]<< " ";
    }
}

bool Kiem_Tra_So_Nguyen_To (int n) {
        bool KT=true ;
        if (n<2) {
            KT=false;
        } else {
            for (int j=2; j<n; j++) {
                if (n%j==0) {
                    KT=false;
                    break;
                }
            }
        }
        return KT;
    }

void Xuat_So_Nguyen_To (int a[], int n) {
    for (int i=0; i<n; i++) {
        if (Kiem_Tra_So_Nguyen_To(a[i])==true) {
            cout << a[i]<< " ";
        }
    }
}

void Xuat_So_Sieu_Nguyen_To(int a[], int n) {
  for (int i=0; i<n; i++) {
      bool KT=true;
      int tam=a[i];
      while (tam!=0) {
          if (Kiem_Tra_So_Nguyen_To(tam)==true) {
              tam=tam/10;
          } else {
              KT=false;
              break;
          }
      }
       if (a[i]==0) {
           KT=false;
       }
       if (KT==true) {
      cout << a[i] << " ";
         } 
    }
 
}

