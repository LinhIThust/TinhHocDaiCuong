#include <stdio.h>
#include<conio.h>
#include<math.h>
/* tinh sin(x) */


int main()
{     float s=0,t=0;
       int x,n=0;
  printf("nhap x=") ;scanf("%d",&x);
  t= x;
  s=0;
     do
     { if ((n+1) % 2 == 0) s=s-t;
           else s=s+t;
         printf("%f\n",s);
        n++;
        t*=(float) (x*x)/(2*n*(2*n+1));

     }
   while(t>=0.0001);
   printf("%f \n",t);
      printf("kq = %5f",s);
   getch();
}
