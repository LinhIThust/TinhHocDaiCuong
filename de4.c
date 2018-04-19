
#include <stdio.h>
#include <conio.h>

int main()
{
   float mang[100];
   int n,i;
   float s;
    do
    {printf("nhap so nguyen N(0<N<10) : ");
    scanf("%d",&n);
    }
    while (n<0||n>10);
    for ( i=0;i<n;i++)
    {
       printf ("nhap so thu %d: ",i+1);
       scanf("%f",&mang[i]);
    }
    printf ("mang vua nhap la: ");
    for ( i=0;i<n;i++)
       printf("%.2f  ",mang[i]);

      for ( i=1;i<n-1;i++)
        {if ( mang[i]> mang[i-1] & mang[i] > mang [i+1])
                  s=s+mang[i];
        }
        printf("\n");
       printf("tong phan tu cuc dai la: %f",s);


   getch();
}
