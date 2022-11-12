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

void doc_file (int x, ifstream &filein) {
    filein >> x;
}

void ghi_file (int x, ofstream &fileout) {
    if (Kiem_tra_so_nguyen_to(x)==true) {
        fileout <<"\nTrue";
    } else {
        fileout <<"\nFalse";
    }
}

int main () {
    ifstream filein ;
    filein.open("INPUT.txt", ios_base::in);
    if (filein.fail()==true) {
        cout <<"\nFile khong ton tai";
        return 0;
    }
    int x;
    doc_file(x, filein);
    filein.close();

    ofstream fileout;
    fileout.open("KETQUA.txt", ios_base::out);
    ghi_file(x, fileout);
    fileout.close();

    system ("pause");
    system ("cls");
    return 0;
}