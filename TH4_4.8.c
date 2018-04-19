#include<stdio.h>
#include<math.h>

int main()
{ int a,b,temp;
//nhap 2 so nguyen duong
 do{
    printf("nhap 2 so nguyen duong a va b : ");
    scanf("%d %d",&a,&b);

 }while(a<=0 || b<=0);
 int x1=a;
 int x2=b;
 //tim uoc chung lon nhat
   while (b != 0)
      {
          temp = a % b;
          a = b;
          b = temp;
      }
     printf("UCLN  cua 2 so la %d",a);
     printf("\n");
     printf("BCLN  cua 2 so la %d",x1*x2/a);



    return 0;


}
