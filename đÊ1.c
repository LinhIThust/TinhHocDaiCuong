#include<stdio.h>
#include<conio.h>

int main()
{
    int mang[100];
    int n,x,i;
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



    getch();
}
