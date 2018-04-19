#include<stdio.h>
#include<math.h>

//#define
 int main(){
int N,n,T,i,j,k;
  do {printf("Nhap vao so nguyen 0<N<10000 :");
      scanf("%d",&N);}
  while(N<=0||N>=100000);
  printf("cac cach doi la la \n");
  for(i=0;i<=N/500;i++){
    for(j=0;j <=N/200;j++){
      k=(N-500*i-200*j)/100;
       if(k>=0)
        printf("%5d%5d%5d\n",i,j,k);
  }
  }
    return 0;
 }
