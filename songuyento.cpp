
#include<stdio.h>
#include<conio.h>
#include<math.h>


int main()
{

int  ok=0 ,n;
printf("nhap so tu nhien   ");
scanf("%d",&n);
	int i = 3;
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
	if (ok == 1) printf("k") ;else printf("co");
}
