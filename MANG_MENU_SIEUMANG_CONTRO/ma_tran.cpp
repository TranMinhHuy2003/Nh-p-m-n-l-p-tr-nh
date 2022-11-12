#include <iostream>
using namespace std;

void Nhap_mang_2_chieu(int a[][100], int n, int m) {
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            cout <<"Nhap phan tu a["<<i<<"]["<<j<<"]: ";
            cin >>a[i][j];
        }
    }
}

void Xuat_mang_2_chieu (int a[][100], int n, int m) {
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            cout <<a[i][j] <<" ";
        }
        cout <<endl;
    }
}

bool Kiemtrasonguyento (int n) {
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
                    }
                }
            }
        }
    }
    return true;
}

int Tinh_tong_cac_so_nguyen_to (int a[][100], int n, int m) {
    int sum=0;
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            if (Kiemtrasonguyento(a[i][j])==true) {
                sum+=a[i][j];
            }
        }
    }
    return sum;
}

void Tongtungdong (int a[][100], int n, int m) {
    for (int i=0; i<n; i++) {
        int sum=0;
        for (int j=0; j<m; j++) {
            sum+=a[i][j];
        }
        cout <<"\n\nTONG CUA DONG THU "<<i<<": "<<sum;
    }
}

void Tongtungcot (int a[][100], int n, int m) {
    for (int j=0; j<m; j++) {
        int sum=0;
        for (int i=0; i<n; i++) {
            sum+=a[i][j];
        }
        cout <<"\n\nTONG CUA COT THU "<<j<<": "<<sum;
    }
}

void Xuat_phan_tu_duong_cheo_chinh (int a[][100], int n, int m) {
    for (int i=0; i<n; i++) {
        cout <<a[i][i]<<" ";
    }
}

void Xuat_phan_tu_duong_cheo_phu (int a[][100], int n, int m) {
    for (int i=0; i<n; i++) {
       cout <<a[i][n-i-1]<<" ";
    }
}

void Ma_tran_bth(int a[][100], int n, int m) {
     do {
        cout <<"Nhap so dong: ";
        cin >> n;
        if (n<=0||n>100) {
            cout <<"\nSo dong khong hop le"<<endl;
        }
    } while (n<=0||n>100);
    do {
        cout <<"Nhap so cot: ";
        cin >> m;
        if (m<=0||m>100) {
            cout <<"\nSo cot khong hop le"<<endl;
        }
    } while (m<=0||m>100);

    cout <<"\n\n\t\tNHAP MA TRAN\n";
    Nhap_mang_2_chieu(a,n,m);
    cout <<"\n\n\t\tXUAT MA TRAN\n";
    Xuat_mang_2_chieu(a, n, m);


    while (true) {
        system("pause");
        system("cls");
        cout <<"\n\n\t\t=====MENU=====\n";
        cout <<"1. Tinh tong cac so nguyen to trong ma tran\n";
        cout <<"2. Tinh tong cac phan tu cua tung dong\n";
        cout <<"3. Tinh tong cac phan tu cua tung cot\n";
        cout <<"0. Ket thuc\n";
        cout <<"\n\n\t\t=====END=====\n";
        int luachon;
        cout <<"Nhap lua chon: ";
        cin>> luachon;
        if (luachon==0) {
            cout <<"Ket thuc";
            break;
        } else if (luachon==1) {
            cout <<"\n\n\tTONG CAC SO NGUYEN TO TRONG MA TRAN\n";
            cout << Tinh_tong_cac_so_nguyen_to(a, n, m);
        } else if (luachon==2) {
            Tongtungdong(a, n, m);
        } else if (luachon==3) {
            Tongtungcot(a, n, m);
        } else {
            break;
        }
    }
}

void Ma_tran_vuong(int a[][100], int n, int m) {
     do {
        cout <<"Nhap so dong: ";
        cin >> n;
        if (n<=0||n>100) {
            cout <<"\nSo dong khong hop le"<<endl;
        }
        cout <<"Nhap so cot: ";
        cin >> m;
        if (m<=0||m>100) {
            cout <<"\nSo cot khong hop le"<<endl;
        }
        if (n!=m) {
            cout <<"So dong va cot khong hop le"<<endl;
        }
    } while (n<=0||n>100||m<=0||m>100||n!=m);

    cout <<"\n\n\t\tNHAP MA TRAN\n";
    Nhap_mang_2_chieu(a,n,m);
    cout <<"\n\n\t\tXUAT MA TRAN\n";
    Xuat_mang_2_chieu(a, n, m);


    while (true) {
        system("pause");
        system("cls");
        cout <<"\n\n\t\t=====MENU=====\n";
        cout <<"1. Tinh tong cac so nguyen to trong ma tran\n";
        cout <<"2. Tinh tong cac phan tu cua tung dong\n";
        cout <<"3. Tinh tong cac phan tu cua tung cot\n";
        cout <<"4. Xuat cac phan tu cua duong cheo chinh\n";
        cout <<"5. Xuat cac phan tu cua duong cheo phu\n";
        cout <<"0. Ket thuc\n";
        cout <<"\n\n\t\t=====END=====\n";
        int luachon;
        cout <<"Nhap lua chon: ";
        cin>> luachon;
        if (luachon==0) {
            cout <<"Ket thuc";
            break;
        } else if (luachon==1) {
            cout <<"\n\n\tTONG CAC SO NGUYEN TO TRONG MA TRAN\n";
            cout << Tinh_tong_cac_so_nguyen_to(a, n, m);
        } else if (luachon==2) {
            Tongtungdong(a, n, m);
        } else if (luachon==3) {
            Tongtungcot(a, n, m);
        } else if (luachon==4) {
             cout <<"\n\n\tPHAN TU DUONG CHEO CHINH\n";
            Xuat_phan_tu_duong_cheo_chinh(a, n, m);
        } else if (luachon==5) {
             cout <<"\n\n\tPHAN TU DUONG CHEO PHU\n";
            Xuat_phan_tu_duong_cheo_phu(a, n, m);
        } else {
            break;
        }
    }
}

void MENU(int a[][100], int n, int m) {
    while (true) {
        system("cls");
        cout <<"\n\n\t\t=====LUA CHON=====\n";
        cout <<"1. MA TRAN BINH THUONG\n";
        cout <<"2. MA TRAN VUONG\n";
        cout <<"0. Ket thuc\n";
        cout <<"\n\n\t\t=====END=====\n";
        int luachon;
        cout <<"Nhap lua chon: ";
        cin>> luachon;
        if (luachon==0) {
            cout <<"Ket thuc";
            break; 
        } else if (luachon==1) {
            Ma_tran_bth(a, n, m);
        } else if (luachon==2) {
            Ma_tran_vuong(a, n, m);
        } else {
            break;
        }
    }
}

int main () {

    int a[100][100];
    int n, m;

    MENU(a, n, m);

    system("pause");
    system("cls");
    return 0;
}
                