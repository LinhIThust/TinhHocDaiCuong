#include<stdio.h>
#include<math.h>

int main(){

float a,b,c;
printf("nhap so a = ");scanf("%f",&a);
printf("nhap so b = ");scanf("%f",&b);
printf("nhap so c = ");scanf("%f",&c);
 if (a == 0)
    if(b==0 )
        if(c != 0) printf("pt vo nghiem");
         else printf("phuong trinh co nghiem vo so nghiem");
     else printf("pt co nghiem x = %f",-c/b);
 else
 {
    float delta = b*b-4*a*c;
      if (delta ==0) printf("pt co nghiem kep x1=x2= %f",-b/(2*a));
      if (delta >0)  printf("pt co 2 nghiem phan biet x1= %f  :x2= %f",(-b-sqrt(delta))/(2*a),(-b+sqrt(delta))/(2*a));
      if (delta <0)  printf("pt co 2 nghiem thuc x1= %f - %fi     ;x2=   %f + %fi  ",-b/(2*a),sqrt(-delta)/(2*a),-b/(2*a),sqrt(-delta)/(2*a));
 }








return 0;

}
