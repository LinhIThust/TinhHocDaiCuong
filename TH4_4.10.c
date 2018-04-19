#include<stdio.h>


int main()
{ float n;
    do
    {printf("nhap so nguyen duong n (n<100) :");
    scanf("%f",&n);

    }while( (n<0 || n>999)|| n != (int)n);
    int nn = (int) n;

     int s;
      if( nn<10) s =nn;
       else if (nn<100) s= nn%10+nn/10;
           else s = nn/100+((nn%100)%10)+((nn%100))/10;

     printf("tong cac chu so cua  %d la  %d:",nn,s);


    return 0;
}
