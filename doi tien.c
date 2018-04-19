#include<stdio.h>
#include<conio.h>
/* doi tien */
int main()
{
int s,dem2,dem3,den=2;
int i,j,k;
printf("so cac cach doi tien la :\n");
for(i=1;i<40;i++)
{
  s=200-5*i;
  dem2=s / 2;
  printf( "%d\n",dem2);
      for (k =1;k<= dem2;k++)
        {  dem3=s;
            dem3 = s- 2*k;
            printf("(%d , %d, %d )\n",i,k,dem3);
            den+=1;
         }
}
printf("(40 , 0 , 0)\n");
printf("tong so cac doi la = %d ",den);

getch();
}
