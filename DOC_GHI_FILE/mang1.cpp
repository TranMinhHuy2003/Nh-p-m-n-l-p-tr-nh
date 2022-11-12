#include <iostream>
#include <fstream>
using namespace std;

bool Kiem_tra_so_nguyen_to (int x) {
    if (x<2) {
        return false;
    } else {
        if (x==2) {
            return true;
        } else {
            if(x%2==0) {
                return false;
            } else {
                for (int i=2; i<x; i++) {
                    if (x%i==0) {
                        return false;
                    }
                }
            }
        }
    }
    return true;
}

int main () {
    // Hàm đọc file
    ifstream filein;
    filein.open("INPUT.txt", ios_base::in);
    if (filein.fail()==true) {
        cout<<"\nFile khong ton tai";
        return 0;
    }
    int a[10];
    int n;
    filein>>n;
    for (int i=0; i<n; i++) {
        filein>>a[i];
    }
    filein.close();
    // Hàm ghi file
    ofstream fileout;
    fileout.open("KETQUA.txt", ios_base::out);
    fileout <<"Cac so nguyen to la: ";
    for (int i=0; i<n; i++) {
        if(Kiem_tra_so_nguyen_to(a[i])==true) {
            fileout <<a[i]<<" ";
        }
    }
    fileout.close();
    // End 
    system("pause");
    system("cls");
    return 0;
}