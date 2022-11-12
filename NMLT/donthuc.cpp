#include<stdio.h>
#include<conio.h>
#include<math.h>
struct DonThuc
{
    float HeSo;
    int SoMu;
};
typedef struct DonThuc DONTHUC;

void NhapDonThuc(DONTHUC &);
void XuatDonThuc(DONTHUC);
DONTHUC TinhTich2DonThuc(DONTHUC, DONTHUC);//Bai 486
DONTHUC TinhDaoHamCap1(DONTHUC);//Bai 487
DONTHUC TinhThuong2DonThuc(DONTHUC, DONTHUC);//Bai 488
DONTHUC TinhDaoHamCapk(DONTHUC, int);//Bai 489
double TinhGiaTriDonThuc(DONTHUC, int);//Bai 490
DONTHUC operator * (DONTHUC, DONTHUC);//Bai 491
DONTHUC operator / (DONTHUC, DONTHUC);//Bai 492
void NhapDonThuc(DONTHUC &dt)
{
    float temp;
    printf("\nNhap he so: ");
    scanf("%f", &temp);
    dt.HeSo = temp;

    printf("\nNhap bac don thuc: ");
    scanf("%d", &dt.SoMu);
}
void XuatDonThuc(DONTHUC dt)
{
    printf("%8.3fx^%d", dt.HeSo, dt.SoMu);
}
DONTHUC TinhTich2DonThuc(DonThuc a, DonThuc b)
{
    DonThuc c;
    c.HeSo = a.HeSo * b.HeSo;
    c.SoMu = a.SoMu + b.SoMu;
    return c;
}
DONTHUC TinhDaoHamCap1(DONTHUC a)
{
    DonThuc c;
    c.HeSo = a.HeSo * a.SoMu;
    c.SoMu = a.SoMu - 1;
    return c; 

}
DONTHUC TinhThuong2DonThuc(DONTHUC a, DONTHUC b)
{
    DonThuc c;
    c.HeSo = a.HeSo / b.HeSo;
    c.SoMu = a.SoMu - b.SoMu;
    return c;
}
DONTHUC TinhDaoHamCapk(DONTHUC a, int k)
{
    while(k != 0)
    {
        a = TinhDaoHamCap1(a);
        k--;
    }
    return a;
}
double TinhGiaTriDonThuc(DONTHUC a, int x)
{
    return a.HeSo * pow((double)x, a.SoMu);
}
DONTHUC operator * (DONTHUC a, DONTHUC b)
{
    DonThuc c;
    c.HeSo = a.HeSo * b.HeSo;
    c.SoMu = a.SoMu + b.SoMu;
    return c;
}
DONTHUC operator / (DONTHUC a, DONTHUC b)
{
    DonThuc c;
    c.HeSo = a.HeSo / b.HeSo;
    c.SoMu = a.SoMu - b.SoMu;
    return c;
}
int main()
{
    int k, x;
    DONTHUC a, b;
    DONTHUC ketqua1, ketqua2, ketqua3, ketqua4;
    NhapDonThuc(a);
    XuatDonThuc(a);

    NhapDonThuc(b);
    XuatDonThuc(b);

    ketqua1 = TinhTich2DonThuc(a, b);
    printf("\nTich 2 don thuc = %8.3fx^%d", ketqua1.HeSo, ketqua1.SoMu);
    ketqua2 = TinhThuong2DonThuc(a, b);
    printf("\nThuong 2 don thuc = %8.3fx^%d", ketqua2.HeSo, ketqua2.SoMu);
    ketqua3 = TinhDaoHamCap1(a);
    printf("\nDao ham cap 1 cua don thuc = %8.3fx^%d", ketqua3.HeSo, ketqua3.SoMu);

    do{
        printf("\nNhap k: ");
        scanf("%d", &k);
        if(k < 0 || k > b.SoMu)
        {
            printf("\nk khong hop le. Xin nhap lai!");
        }
    }while(k < 0 || k > b.SoMu);
    ketqua4 = TinhDaoHamCapk(b, k);
    printf("\nDao ham cap %d cua don thuc = %8.3fx^%d",k , ketqua4.HeSo, ketqua4.SoMu);

    printf("\nNhap x: ");
    scanf("%d", &x);
    double giatri = TinhGiaTriDonThuc(a, x);
    printf("\nGia tri don thuc a khi x = %d la: %.3f", x, giatri);


    DONTHUC c = a * b;
    printf("\nKet qua don thuc a nhan don thuc b = %8.3fx^%d", c.HeSo, c.SoMu);

    DONTHUC d = a / b;
    printf("\nKet qua don thuc a chia don thuc b = %8.3fx^%d", d.HeSo, d.SoMu);
    getch();
    return 0;
}
