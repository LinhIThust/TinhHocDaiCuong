#include <stdio.h>
#include<conio.h>
#include<math.h>
/* tinh e mu x */


int main()
{     float s=0,t=1;
       int x,n=0;
  printf("nhap x=") ;scanf("%d",&x);
     do
     { s+=t;
        n+=1;
        t*=(float) x/n;
     }
   while(t>=0.00001);
      printf("kq = %5f",s);
   getch();
}

