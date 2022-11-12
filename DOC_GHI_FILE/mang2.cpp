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

void doc_file (int a[], int &i, int &dem, ifstream &filein) {
    while (!filein.eof()) {
        filein >>a[i];
        i++;
        dem++;
    }
}

void ghi_file (int a[], int i, int dem, ofstream &fileout) {
    for (int i=0; i<dem; i++) {
        if (Kiem_tra_so_nguyen_to(a[i])==true) {
            fileout << a[i] <<" ";
        }
    }
}

int main () {
    ifstream filein;
    filein.open("INPUT.txt", ios_base::in);
    if (filein.fail()==true) {
        cout <<"\nFile khong ton tai";
        return 0;
    }
    int a[100];
    int i=0;
    int dem=0;
    doc_file(a, i, dem, filein);

    ofstream fileout;
    fileout.open("DAURA.txt", ios_base::out);
    ghi_file(a, i, dem, fileout);
    fileout.close();
    filein.close();
    system("pause");
    system("cls");
    return 0;
}
