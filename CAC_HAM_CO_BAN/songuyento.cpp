#include <iostream> 
#include <cmath>
using namespace std;

bool KTSNT(int n)
{
    if (n < 2)    
        return false;

    for (int i = 2; i <= sqrt(n); i ++)
    {
        if (n%i==0)
        {
            return false;
        }
    }
    return true;
}

int main () {
    int n;
    cout << "Nhap n: " ;
    cin >> n;
    bool KT = KTSNT (n);
    if (KT==true) {
        cout << n << " la so nguyen to";
    } else {
        cout << n << " khong la so nguyen to";
    }

    return 0;
}