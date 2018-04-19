#include<stdio.h>
#include<conio.h>
#include<math.h>

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
	
		
	}
		
	


int main()
{
	int k = snt(10);
	printf("%d",k);
	
	
	
	getch();
}
