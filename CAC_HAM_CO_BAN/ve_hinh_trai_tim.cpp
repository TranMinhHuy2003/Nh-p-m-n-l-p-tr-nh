#include <iostream>
using namespace std;

void draw (int n, int m) {
    for (int i=1; i<=8; i++) {
        for (int j=1; j<=9; j++) {
            if (!((i==1&&(j==1||j==5||j==9))||(i==5&&(j==1||j==9))||(i==6&&(j<=2||j>=8))||(i==7&&(j<=3||j>=7))||(i==8&&(j<=4||j>=6)))) {
                cout <<" * ";
            } else {
               cout<< "   ";
            }
        }
        cout <<endl;
    }
}

int main () {
    int n=8;
    int m=9;
    draw(n, m);
    
    system("pause");
    system("cls");
    return 0;
}