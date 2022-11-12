#include <iostream> 
#include <math.h>
using namespace std;

void Nhap_mang (int a[], int n) {
    for (int i=0; i<n; i++) {
        cout <<"Nhap phan tu a[" << i << "]: ";
        cin >> a[i];
    }
}

void Xuat_mang (int a[], int n ) {
    for (int i=0; i<n; i++) {
        cout <<a[i]<< " ";
    }
}

void Them (int a[], int &n, int x, int k) {
    for (int i=n-1; i>=k; i--) {
        a[i+1]=a[i];
    }
          a[k]=x;
          n++;  
}

void Xoa( int a[], int &n, int k) {
    for (int i=k; i<=(n-1); i++) {
        a[i]=a[i+1];
    }
    n--;
}

void Sapxeptangdan (int a[], int n) {
    for (int i=0; i<n-1; i++) {
        for (int j=i+1; j<n; j++) {
            if (a[i]>a[j] ){
                int t=a[i];
                    a[i]=a[j];
                    a[j]=t;
            }
        }
    }
}

void Sapxepgiamdan (int a[], int n) {
    for (int i=0; i<n-1; i++) {
        for (int j=i+1; j<n; j++) {
            if (a[i]<a[j] ){
                int t=a[i];
                    a[i]=a[j];
                    a[j]=t;
            }
        }
    }
}

void Lietke (int a[], int n) {
    for (int i=0; i<n; i++) {
        int tam=a[i];
        while (tam>=10) {
            tam/=10;
        }
        if (tam%2==0 && tam!=0) {
            cout << a[i] << " ";
        }
    }
}

int Sochanhangchuc (int n) {
    n=abs(n);
    n/=10;
    n%=10;
    if (n%2==0 && n!=0) {
        return 1;
    }
    return 0;
}

int Tinhtong (int a[], int n) {
    int sum=0;
    for (int i =0; i<n; i++) {
        if (Sochanhangchuc(a[i])==1) {
            sum+=a[i];
        }
    }
    return sum;
}

int Dem (int a[], int n, int y) {
    int count=0;
    for (int i=0; i<n; i++) {
        if (y==a[i]) {
            count ++;
        }
    }
    return count;
}

int Timgiatrichandautien (int a[], int n) {
    for (int i=0; i<n; i++) {
        if (a[i]%2==0 && a[i]!=0) {
            return a[i];
            break;
        }
    }
    return true;
}

int Timgiatrilecuoicung (int a[], int n) {
     for (int i=n-1; i>=0; i--) {
        if (a[i]%2!=0) {
            return a[i];
            break;
        }
    }
    return true;
}

void Menu (int a[], int n, int x, int k, int b, int y) {
     while (true) {
        cout <<"\n\n\t\t ======= MENU =======" <<endl;
        cout <<"1. Them phan tu vao mang" << endl;
        cout <<"2. Xoa phan tu khoi mang" << endl;
        cout <<"3. Sap xep mang tang dan" << endl;
        cout <<"4. Sap xep mang giam dan" << endl;
        cout <<"5. Liet ke cac phan tu co chu so dau tien la so chan" << endl;
        cout <<"6. Tong cac phan tu co chu so hang chuc la chu so chan" << endl;
        cout <<"7. Dem so lan xuat hien cua X trong mang" << endl;
        cout <<"8. So chan dau tien trong mang" << endl;
        cout <<"9. So le cuoi cung trong mang" << endl;
        cout <<"0. Ket thuc"<<endl;
        cout <<"\t\t ======= END ======="<<endl;
     
    cout <<"Nhap lua chon: ";
    cin >> b;
    if (b==0) {
        cout << "Ket thuc" ;
        break;
    } else if (b==1) {
         do {
        cout <<"\nNhap vi tri muon them: " ;
        cin >>k;
        if (k<0 || k>n) {
            cout <<"Vi tri khong hop le";
        }
    } while(k<0 || k>n);
        cout <<"Nhap phan tu muon them: ";
        cin >> x;
        Them (a,n,x,k);
        cout <<"\n\n\tMANG SAU KHI THEM" << endl;
        Xuat_mang(a, n);
        system ("pause");
        system ("cls");
    }else if (b==2) {
        do {
        cout <<"\n\nNhap vi tri muon xoa: " ;
        cin >>k;
        if (k<0 || k>n) {
            cout <<"Vi tri khong hop le";
        }
    }  while (k<0 ||k>n);
        cout <<"\n\n\tMANG SAU KHI XOA\n";
        Xoa (a,n,k);
        Xuat_mang(a,n);
        system ("pause");
        system ("cls");
    }else if (b==3) {
        cout <<"\n\n\t\tMANG SAU KHI SAP XEP TANG DAN\n";
        Sapxeptangdan (a,n);
        Xuat_mang(a,n);
        system ("pause");
        system ("cls");
    } else if (b==4) {
        cout <<"\n\n\t\tMANG SAU KHI SAP XEP GIAM DAN\n";
        Sapxepgiamdan (a,n);
        Xuat_mang(a,n);
        system ("pause");
        system ("cls");
    } else if (b==5) {
        cout <<"\n\n\tCAC PHAN TU CO CHU SO DAU TIEN LA SO CHAN\n";
        Lietke(a, n);
        system ("pause");
        system ("cls");
    } else if (b==6) {
        cout <<"\n\n\tTONG CAC PHAN TU CO CHU SO HANG CHUC LA CHU SO CHAN\n";
        cout << Tinhtong(a, n);
        system ("pause");
        system ("cls");
    } else if (b==7) {
        cout <<"\n\n\tDEM SO LAN XUAT HIEN CUA X TRONG MANG\n";
        cout <<"Nhap x: ";
        cin >>y;
        cout << "So lan xuat hien: " << Dem(a,n,y) << endl;
        system ("pause");
        system ("cls");
    } else if (b==8) {
        cout <<"So chan dau tien trong mang la: " << Timgiatrichandautien (a, n) << endl;
        system ("pause");
        system ("cls");
    } else if (b==9) {
        cout <<"So le cuoi cung trong mang la: " << Timgiatrilecuoicung (a, n);
        system ("pause");
        system ("cls");
    }
  }
}

int main () {
    int a[100];
    int n,k,x,y,b;
    do {
        cout <<"Nhap so luong phan tu: ";
        cin >> n;
        if (n<=0 || n>100) {
            cout << "So luong phan tu khong hop le"<<endl;
        }
    } while (n<=0 || n>100);


    cout <<"\n\n\t\tNHAP MANG"<< endl;
    Nhap_mang(a, n);


    cout <<"\n\n\t\tXUAT MANG"<< endl;
    Xuat_mang(a, n);

    Menu(a, n, x, k, b, y);
    
    system ("pause");
    system ("cls");
    return 0;
}
