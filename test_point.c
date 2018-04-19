#include <stdio.h>
#include<conio.h>
#include<math.h>
 int ptb2(float a, float b,float c, float *x1,float *x2)
   {
      float delta;
      if (a==0) return 0;
      delta = b*b - 4*a*c;
      if ( delta < 0) return -1;
      x1=((-b-sqrt(delta))/(2*a));
      x2= (-b+sqrt(delta))/(2*a);
      return(1);
         }


int main()
{

float a,b,c,x1,x2;
 int s;
 printf("nhap cac tham so :"); scanf("%f %f %f",&a,&b,&c);

s=ptb2(a,b,c,x1,x2);

if (s==0) printf("a=0");
if (s==-1) printf("delta < 0");
if (s==1)
{

   printf(  "x1= %2f\n",x1);
   printf( "x2=%2f\n"  , x2);
}
   getch();
}
