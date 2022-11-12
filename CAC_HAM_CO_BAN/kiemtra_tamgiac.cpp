#include <iostream>
#include <cmath>
using namespace std;

bool kiemtra_tamgiac (float a, float b, float c) {
    if ((a+b)>c && (a+c)>b && (b+c)>a) {
        return true;
    }
    return false;
}

void Dientich (float a, float b, float c) {
    float p=(a+b+c)/2;
    float t=p*(p-a)*(p-b)*(p-c);
    if (t<0) {
        cout <<"\nMath Error!!!";
    } else {
        cout <<"\nDien tich S = "<<sqrt(p*(p-a)*(p-b)*(p-c));
    }
}

float Timmax (float a, float b, float c) {
    float max=a;
    if (b>max) {
        max=b;
    } if (c>max) {
        max=c;
    }
    return max;
} 

bool pytago (float a, float b, float c) {
    if (abs(pow(Timmax(a,b,c),2)-(pow(a,2)+pow(b,2)))<=0.1) {
        return true;
    }
    return false;
}

bool Tamgiac_tu (float a, float b, float c) {
    if (pow(a,2)>(pow(b,2)+pow(c,2)) || pow(b,2)>pow(a,2)+pow(c,2) || pow(c,2)>pow(b,2)+pow(a,2)) {
        return true;
    } 
    return false;
}

void phanloai_tamgiac (float a, float b, float c) {
    bool KT=kiemtra_tamgiac(a,b,c);
    if (KT==true) {
        bool TU=Tamgiac_tu(a,b,c);
        bool PY=pytago(a,b,c);
        if (a==b&&b==c) {
            cout <<"\nTam giac deu";
            Dientich(a,b,c);
        } else if (a==b || a==c || b==c) {
            if (PY==true) {
                cout <<"\nTam giac vuong can";
            } else {
                cout <<"\nTam giac can";
            }
            Dientich(a,b,c);
        } else if (PY==true) {
            cout <<"\nTam giac vuong";
            Dientich(a,b,c);
        } else if (TU==true) {
            cout <<"\nTam giac tu";
            Dientich(a,b,c);
        } else {
            cout <<"\nTam giac nhon";
            Dientich(a,b,c);
        }
    } else {
        cout <<"\nTam giac khong hop le !";
        system("pause");
        system("cls");
    }
}

int main () {
    float a,b,c;
    do {
        cout <<"\nNhap canh a: ";
        cin >>a;
        if (a<=0) {
            cout <<"\nCanh khong hop le, vui long nhap lai !";
        }
    } while (a<=0);
    do {
        cout <<"\nNhap canh b: ";
        cin >>b;
        if (b<=0) {
            cout <<"\nCanh khong hop le, vui long nhap lai !";
        }
    } while (b<=0);
    do {
        cout <<"\nNhap canh c: ";
        cin >>c;
        if (c<=0) {
            cout <<"\nCanh khong hop le, vui long nhap lai !";
        }
    } while (c<=0);
    phanloai_tamgiac(a,b,c);
    system("pause");
    system("cls");
    return 0;
}