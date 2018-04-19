#include<stdio.h>
#include<math.h>

int main()
{
    float es,pi=0;
    int i=0;
    do
    { printf("Nhap so epsilon :");
      scanf("%f",&es);

    } while ( es <= 0 || es>=1);

     while (1.0/(2*i+1)>= es)
     {
         pi += 4* pow(-1,i)*1.0/(2*i+1);
         i++;
     }
      printf("Gia tri cua pi laf = %f",pi);
    return 0;
}
