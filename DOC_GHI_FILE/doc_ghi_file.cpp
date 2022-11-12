#include <iostream>
#include <fstream>
using namespace std;

int main () {

    ifstream filein ;
    filein.open("INPUT.txt", ios_base ::in);
    if (filein.fail()==true) {
        cout <<"File khong ton tai ";
        system("pause");
        return 0;
    }
    int x, y;
    filein >> x;
    filein >> y;
    filein.close();
    ofstream fileout;
    fileout.open("OUTPUT.txt", ios_base::out);
    fileout <<"Tong cua 2 so la: " << x+y;
    fileout.close ();
    system("pause");
    system("cls");
    return 0;
}