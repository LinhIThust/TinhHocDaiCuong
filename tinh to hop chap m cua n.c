#include<stdio.h>
#include<conio.h>
/* to hop chap M cua N */
int main()

{ int m,n,i;
   float c=1;
   printf("nhap 2 so m va n ="); scanf ("%d %d",&m,&n);
    for( i=1;i<=m;i++)
       c*=(float) (n-i+1)/i;
    printf(" kq la c = %f",c);
    getch();

}
