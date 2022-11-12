#include <iostream>
#include <cmath>
using namespace std;

struct Toado {
    float x;
    float y;
};
typedef struct Toado TOADO;

void Nhaptoado (TOADO &td) {
    cout <<"\nNhap toa do x: ";
    cin >> td.x;
    cout <<"Nhap toa do y: ";
    cin >> td.y;
}

void XuatToado (TOADO td) {
    cout <<"("<<td.x<<", "<<td.y<<")";
}

struct Tamgiac {
    TOADO A;
    TOADO B;
    TOADO C;
};
typedef struct Tamgiac TAMGIAC;

void Nhap_tam_giac (TAMGIAC &tg) {
    cout <<"\n\n\t\t=====NHAP TOA DO 3 DINH TAM GIAC=====";
    cout <<"\n\t\t=====NHAP TOA DO DIEM A=====\n";
    Nhaptoado(tg.A);
    cout <<"\n\t\t=====NHAP TOA DO DIEM B=====\n";
    Nhaptoado(tg.B);
    cout <<"\n\t\t=====NHAP TOA DO DIEM C=====\n";
    Nhaptoado(tg.C);
}

void Xuat_tam_giac (TAMGIAC tg) {
    cout <<"\n\n\t\t=====TOA DO 3 DIEM CUA TAM GIAC ABC=====\n";
    cout <<"\nToa do diem A";
    XuatToado(tg.A);
    cout <<"\nToa do diem B";
    XuatToado(tg.B);
    cout <<"\nToa do diem C";
    XuatToado(tg.C);
}

float Tinh_do_dai_cac_canh (TOADO A, TOADO B) {
    return sqrt(pow((B.x-A.x),2)+pow((B.y-A.y),2));
}

float Tinh_dien_tich_tam_giac (TOADO A, TOADO B, TOADO C) {
    return 0.5*sqrt(pow(((B.x-A.x)*(C.y-A.y)-(C.x-A.x)*(B.y-A.y)),2));
}

float Tinh_chu_vi_tam_giac (TOADO A, TOADO B, TOADO C) {
    return Tinh_do_dai_cac_canh(A,B)+Tinh_do_dai_cac_canh(A,C)+Tinh_do_dai_cac_canh(B,C);
}

void Menu (TAMGIAC tg) {
    Nhap_tam_giac(tg);
    while (true) {
        system ("cls");
        cout <<"\n\n\t\t=====MENU=====\n";
        cout <<"1. Xuat toa do cac dinh trong tam giac ABC\n";
        cout <<"2. Tinh do dai cac canh trong tam giac ABC\n";
        cout <<"3. Tinh dien tich tam giac ABC\n";
        cout <<"4. Tinh chu vi tam giac ABC\n";
        cout <<"0. Ket thuc\n";
        cout <<"\n\n\t\t=====END=====\n";
        int a;
        cout <<"\nNhap lua chon: ";
        cin >>a;
        if (a==0) {
            cout <<"Ket thuc";
            break;
        } else if (a==1) {
            Xuat_tam_giac(tg);
            system("pause");
        } else if (a==2) {
            cout <<"\n\nDo dai canh AB: "<< Tinh_do_dai_cac_canh(tg.A,tg.B);
            cout <<"\nDo dai canh AC: "<< Tinh_do_dai_cac_canh(tg.A,tg.C);
            cout <<"\nDo dai canh BC: "<< Tinh_do_dai_cac_canh(tg.B,tg.C);
            system("pause");
        } else if (a==3) {
            cout <<"\n\nDien tich tam giac ABC la: "<< Tinh_dien_tich_tam_giac(tg.A, tg.B, tg.C);
            system("pause");
        } else if (a==4) {
            cout <<"\n\nChu vi tam giac ABC la: "<< Tinh_chu_vi_tam_giac(tg.A, tg.B, tg.C);
            system("pause");
        }
    }
}

int main () {
    TAMGIAC tg;
    Menu(tg);
    system ("pause");
    system("cls");
    return 0;
}
