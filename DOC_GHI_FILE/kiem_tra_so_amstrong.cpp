#include <iostream>
#include <fstream>
#include <math.h>
using namespace std;

void Doc_file (int a[], int &i, int &dem, ifstream &filein) {
    while (!filein.eof()) {
        filein >> a[i];
        i++;
        dem++;
    }
}

bool Kiem_tra_so_amstrong (int n) {
    int k=0;
    int tam=n;
    while (n!=0) {
        n=n/10;
        k++;
    }
    n=tam;
    int tong=0;
    while (n!=0) {
        tong = tong + pow((n%10), k);
        n=n/10;
    }
    if (tam==tong) {
        return true;
    }
    return false;
}

void Ghi_so_amstrong (int a[], int i, int dem, ofstream &fileout) {
    fileout <<"Cac so Amstrong la: ";
    for (int i=0; i<dem; i++) {
        if (Kiem_tra_so_amstrong(a[i])==true) {
            fileout << a[i] << " ";
        }
    }
}

int main () {

    //       DOC FILE
    ifstream filein;
    int a[100];
    int i=0;
    int dem=0;
    filein.open("DAUVAO.txt", ios_base::in);
    if (filein.fail()==true) {
        cout <<"\nFile khong ton tai";
        return 0;
    }
    Doc_file(a, i, dem, filein);

    //        GHI FILE
    ofstream fileout;
    fileout.open ("XUATRA.txt", ios_base::out);
    Ghi_so_amstrong(a, i, dem, fileout);

    fileout.close();
    filein.close();
    system("pause");
    system("cls");
    return 0;
}