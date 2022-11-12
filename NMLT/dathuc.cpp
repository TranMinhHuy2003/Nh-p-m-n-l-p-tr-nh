#include <iostream>
#include<conio.h>
#include<math.h>
using namespace std;
struct DATHUC
{
	float HeSo[50];
	int Bac;
};
void KhoiTaoDaThucRong(DATHUC& dt);
void NhapDaThuc(DATHUC &dt);
void XuatDaThuc(DATHUC dt);
DATHUC Hieu(DATHUC, DATHUC);//Bai 493
DATHUC Tong(DATHUC, DATHUC);//Bai 494
DATHUC Tich(DATHUC, DATHUC);//Bai 495
DATHUC Thuong(DATHUC, DATHUC);//Bai 496
void Du(DATHUC, DATHUC);//Bai 497
DATHUC DaoHamCap1(DATHUC);//Bai 498
DATHUC DaoHamCapk(DATHUC, int);//Bai 499
float TinhGiaTri(DATHUC, int);//Bai 500
DATHUC operator + (DATHUC a, DATHUC b);//Bai 501
DATHUC operator - (DATHUC a, DATHUC b);//Bai 502
DATHUC operator * (DATHUC a, DATHUC b);//Bai 503
DATHUC operator / (DATHUC a, DATHUC b);//Bai 504
int main()
{
	DATHUC a, b;
	int k, x;
	cout << "\n\n\t\t=====NHAP DA THUC A=====\n" << endl;
	NhapDaThuc(a);
	cout << "\n\n\t\t=====NHAP DA THUC B=====\n" << endl;
	NhapDaThuc(b);
	cout << endl << "Da thuc A la: ";
	XuatDaThuc(a);
	cout << endl << "Da thuc B la: ";
	XuatDaThuc(b);
	cout << endl << endl << "Tong 2 da thuc la: ";
	Tong(a, b);
	cout << endl << endl << "Hieu 2 da thuc la: " << endl;
	cout << "A-B =  ";
	XuatDaThuc(Hieu(a, b));
	cout << endl << "B-A =  ";
	XuatDaThuc(Hieu(b, a));
	cout << endl << endl << "Tich 2 da thuc la: ";
	XuatDaThuc(Tich(a, b));
	cout << endl << endl << "Thuong 2 da thuc la: ";
	XuatDaThuc(Thuong(a, b));
	cout << endl << endl << "Phan du thuong 2 da thuc la: ";
	Du(a, b);
	cout << endl << endl << "Dao ham cap 1 2 da thuc la: A' = ";
	XuatDaThuc(DaoHamCap1(a));
	cout << endl << "                             B' = ";
	XuatDaThuc(DaoHamCap1(b));
	cout << endl << endl << "nhap so lan dao ham: ";
	cin >> k;
	cout << "Dao ham cap k 2 don thuc la: A'k = ";
	XuatDaThuc(DaoHamCapk(a, k));
	cout << endl << "                            B'k = ";
	XuatDaThuc(DaoHamCapk(b, k));
	cout << endl << endl << "nhap x: ";
	cin >> x;
	cout << "A(" << x << ") = " << TinhGiaTri(a, x);
	cout << endl << "B(" << x << ") = " << TinhGiaTri(b, x);
	DATHUC c = a + b;    cout << endl << " a + b = ";    XuatDaThuc(c);
	DATHUC d = a - b;    cout << endl << " a - b = ";    XuatDaThuc(d);
	DATHUC e = a * b;    cout << endl << " a * b = ";    XuatDaThuc(e);
	DATHUC f = a / b;    cout << endl << " a / b = ";    XuatDaThuc(f);
    system("pause");
    system("cls");
    return 0;
}  
void KhoiTaoDaThucRong(DATHUC& dt)
{
	dt.Bac = 0;
	for (int i = 0; i < 50; i++)
		dt.HeSo[i] = 0;
}
void NhapDaThuc(DATHUC &dt)
{
	KhoiTaoDaThucRong(dt);
	cout << "nhap bac da thuc: ";
	cin >> dt.Bac;
	for (int i = dt.Bac; i >= 0; i--)
	{
		float hs;
		cout << "nhap he so bac " << i << ": ";
		cin >> hs;
		dt.HeSo[i] = hs;
	}
}
void XuatDaThuc(DATHUC dt)
{
	for (int i = dt.Bac; i >= 0; i--)
	{
		if (i == 0) cout << dt.HeSo[i];
		else if (dt.HeSo[i] == 0) cout << "";
		else {
			if (dt.HeSo[i] == 1 && i != 1) cout << "x^" << i << " + ";
			if (i == 1 && dt.HeSo[i] != 1) cout << dt.HeSo[i] << "x" << " + ";
			if (dt.HeSo[i] == 1 && i == 1) cout << "x" << " + ";
			if (dt.HeSo[i] != 1 && i != 1) cout << dt.HeSo[i] << "x^" << i << " + ";
		}
	}
}
DATHUC Tong(DATHUC a, DATHUC b)
{
	DATHUC c;
	KhoiTaoDaThucRong(c);
	if (a.Bac > b.Bac)
		c.Bac = a.Bac; 
	else
		c.Bac = b.Bac;
	for (int i = 0; i <= c.Bac; i++)
		c.HeSo[i] = a.HeSo[i] + b.HeSo[i];
	XuatDaThuc(c);
	return c;
}
DATHUC Hieu(DATHUC a, DATHUC b)
{
	DATHUC c;
	KhoiTaoDaThucRong(c);
	if (a.Bac > b.Bac)
		c.Bac = a.Bac;
	else
		c.Bac = b.Bac;
	for (int i = 0; i <= c.Bac; i++)
		c.HeSo[i] = a.HeSo[i] - b.HeSo[i];
	return c;
}
DATHUC Tich(DATHUC a, DATHUC b)
{
	DATHUC c;
	KhoiTaoDaThucRong(c);
	c.Bac = a.Bac + b.Bac;
	int i, j;
	for (i = 0; i <= a.Bac; i++)
	{
		for (j = 0; j <= b.Bac; j++)
		{
			c.HeSo[i+j] += a.HeSo[i] * b.HeSo[j];
		}
	}
	return c;
}
DATHUC Thuong(DATHUC a, DATHUC b)
{
	DATHUC x, t, c;
	KhoiTaoDaThucRong(x);
	KhoiTaoDaThucRong(t);
	KhoiTaoDaThucRong(c);
	c.Bac = a.Bac - b.Bac;
	while (a.Bac >= b.Bac)
	{
		x.Bac = a.Bac - b.Bac;
		x.HeSo[x.Bac] = a.HeSo[a.Bac] / b.HeSo[b.Bac];
		c.HeSo[x.Bac] = x.HeSo[x.Bac];
		t = Tich(x, b);
		a = Hieu(a, t);
		a.Bac--;
	}
	return c;
}
void Du(DATHUC a, DATHUC b)
{
	XuatDaThuc(Hieu(a, Tich(b, Thuong(a, b))));
}
DATHUC DaoHamCap1(DATHUC x)
{
	DATHUC c;
	KhoiTaoDaThucRong(c);
	c.Bac = x.Bac - 1;
	for (int i = x.Bac; i >= 1; i--)
	{
		c.HeSo[i - 1] = x.HeSo[i] * i;

	}
	return c;
}
DATHUC DaoHamCapk(DATHUC x, int k)
{
	DATHUC c = x;
    if (k<=c.Bac) {
        for (int i = 0; i < k; i++)
	    {
		    c = DaoHamCap1(c);
	    }
    } else {
        for (int j=c.Bac; j>=0; j--) {
            c.Bac=0;
            c.HeSo[j]=0;
        }
    }
    return c;
}
float TinhGiaTri(DATHUC dt, int x)
{
	float kq = 0;
	for (int i = dt.Bac; i >= 0; i--)
		kq = kq + dt.HeSo[i] * pow(x, i);
	return kq;
}
DATHUC operator + (DATHUC a, DATHUC b)
{
	DATHUC c;
	KhoiTaoDaThucRong(c);
	if (a.Bac > b.Bac)
		c.Bac = a.Bac;
	else
		c.Bac = b.Bac;
	for (int i = 0; i <= c.Bac; i++)
		c.HeSo[i] = a.HeSo[i] + b.HeSo[i];
	return c;
}
DATHUC operator - (DATHUC a, DATHUC b)
{
	DATHUC c;
	KhoiTaoDaThucRong(c);
	if (a.Bac > b.Bac)
		c.Bac = a.Bac;
	else
		c.Bac = b.Bac;
	for (int i = 0; i <= c.Bac; i++)
		c.HeSo[i] = a.HeSo[i] - b.HeSo[i];
	return c;
}
DATHUC operator * (DATHUC a, DATHUC b)
{
	DATHUC c;
	KhoiTaoDaThucRong(c);
	c.Bac = a.Bac + b.Bac;
	int i, j;
	for (i = 0; i <= a.Bac; i++)
	{
		for (j = 0; j <= b.Bac; j++)
		{
			c.HeSo[i + j] += a.HeSo[i] * b.HeSo[j];
		}
	}
	return c;
}
DATHUC operator / (DATHUC a, DATHUC b)
{
	DATHUC x, t, c;
	KhoiTaoDaThucRong(x);
	KhoiTaoDaThucRong(t);
	KhoiTaoDaThucRong(c);
	c.Bac = a.Bac - b.Bac;
	while (a.Bac >= b.Bac)
	{
		x.Bac = a.Bac - b.Bac;
		x.HeSo[x.Bac] = a.HeSo[a.Bac] / b.HeSo[b.Bac];
		c.HeSo[x.Bac] = x.HeSo[x.Bac];
		t = Tich(x, b);
		a = Hieu(a, t);
		a.Bac--;
	}
	return c;
}