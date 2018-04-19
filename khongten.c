#include<stdio.h>
#include<conio.h>
/* khong ten */
int main()
{
int mang[100];
int i,n,m;
printf("nhap so n = ");scanf("%d",&n);
for(i=0;i<n;i++)
{
   printf("nhap phan tu mang[%d] =",i+1);
   scanf("%d",&mang[i]);
}
printf("nhap so m = ");scanf("%d",&m);
for(i=0;i<n;i++)
{
   if (i % m ==0 && i !=0) printf ("\n");
   printf("%d   ",mang[i]);
}

getch();
}
