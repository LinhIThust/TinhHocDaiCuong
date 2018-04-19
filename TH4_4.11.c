#include<stdio.h>
#include<math.h>


int main()
{ float n,x;
    printf("nhap so thuc x =");scanf("%f",&x);
    do
    {printf("nhap so nguyen duong n (n<100) =");
    scanf("%f",&n);
    } while( n<0||  n != (int)n);//kiem tra tinh nguyen khi nhap
    int i,m,s=1;
    double s1,s2,s3=1;
    m = (int)n;

    for( i =0;i<=m;i++)
         s1+= pow(x,i);
    for(i =0;i<=m;i++)
         s2+=pow(-1,i)*pow(x,i);
    for(i =1;i<=m;i++)
        s3+=pow(x,i)/(s*=i);
     printf("\n gia tri cua tong cau a la : %.0lf",s1);
     printf("\n gia tri cua tong cau b la : %.0lf",s2);
     printf("\n gia tri cua tong cau c la : %lf",s3);


     return 0;

}



