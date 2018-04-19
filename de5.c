#include <stdio.h>
#include <conio.h>
#include <math.h>
int snt(int n)
{
	int i = 3,ok = 0;
	if (n<2) ok = 1 ;
	if ( n >3)
       { if (n %2 == 0) ok = 1;
             else 
             {
             	while( ok == 0 && i <= sqrt(n))
             	
             	   { if ( n % i == 0) ok = 1;
					 i = i+2; 
				   }
			 }
             
               
		   }
	if (ok == 0)
	 return n;
	 else return 0;	   
}
int main ()
{   
    int n,i,dem;
    int mang[10];
	 do
    {printf("nhap so nguyen N(0<N<10) : ");
    scanf("%d",&n);
    }
    while (n<0||n>10);
    for ( i=0;i<n;i++)
    {
       printf ("nhap so thu %d: ",i+1);
       scanf("%d",&mang[i]);
    }
    printf ("mang vua nhap la: ");
     for ( i=0;i<n;i++)
       printf("%d ",mang[i]);
       
       dem=0;
         for ( i=0;i<n;i++)
          if( mang[ i] == snt(mang[i]) && mang[i] != 0) dem++;
       printf("so so nguyen to la :%d ",dem);
       
	
	
	getch();
}
