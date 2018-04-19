#include<stdio.h>
#include<conio.h>

int main()
{
    int mang[100];
    int n,x,i,sum =0;
    float tb;
    do{
      printf("nhap so phan tu cua mang (0<n<10) = ");
      scanf("%d",&n);
      }
    while(n<=0 || n>= 10);

    for (i = 0;i<n; i++)
    {
        printf ("nhap phan tu thu %d cua mang =",i+1);
        scanf ("%d",&mang[i]);
    }
    printf("cac phan tu cua mang la:");
    for (i = 0;i<n; i++) printf("  %d   ",mang[i]);

    printf("nhap so X = ");scanf("%d",&x);
    if ( x > n)
    {
        for (i = 0;i<n; i++)
            sum += mang[i];
        printf("tong cac phan tu trong mang la : %d",sum);

    }
    else
    {
         for (i = 0;i<x; i++)
          tb+= mang[i];
         tb = (tb/x);
         printf("gia tri trung binh cua %d so dau tien la : %f",x,tb);

    }


    getch();
}
