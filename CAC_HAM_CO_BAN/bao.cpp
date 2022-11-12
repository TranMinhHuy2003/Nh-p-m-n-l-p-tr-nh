#include <iostream>
#include <string.h>
using namespace std;

int main () {
    char s1[100];
    char s2[100];
    cout <<"\nNhap s1: ";
    gets (s1);
    char t[100]=s1[100];
    for (int i=0; i<strlen(s1); i+=2) {
        if (s1[i]>='a'&&s1[i]<='z') {
            s1[i]-=32;
        }
    }
    for (int i=1; i<strlen(s1); i+=2) {
        if (s1[i]>='A'&&s1[i]<='Z') {
            s1[i]+=32;
        }
    }
    for (int i=0; i<strlen(s1); i++) {
        s2[i]=s1[i];
    }
    cout <<"\ns1="<<t;
    cout <<"\ns2="<<s2;
    system("pause");
    system("cls");
    return 0;
}