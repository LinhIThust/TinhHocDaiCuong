#include <stdio.h>
#include <conio.h>

int main()
{
    int n,i,s=1;
    float mang[100];
    float max;
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

       max = mang[0];
        for ( i=1;i<n;i++)
        {
           if ( mang[i] == max) s++;
           if (mang [i] > max) { max = mang[i];
                                           s=1;
                                          }
         }
         printf("\n");
         printf("so lon nhat trong mang la : %.2f\n",max);
         printf ("so so lon nhat la : %d",s);


    getch();
}

