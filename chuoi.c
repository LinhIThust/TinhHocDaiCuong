#include<stdio.h>
#include<string.h>

int main(){
char a[100][30]={};
int i;
for(i =0;i<100;i++){
    printf("nhap xau %d:",i+1);
    fflush(stdin);
    gets(a[i]);
  if( strcmp((a[i]),"***") == 0) break;
}
int p=-1,m=0;
for(i=0;i<100;i++){

    if(strlen(a[i])> m ){
        m=strlen(a[i]);
        p=i;
    }
}
    if(p== -1) printf("xau rong");
    else{
        printf("Do dai chuoi dai nhat:%d\n",m);
        puts(a[p]);
    }

return 0;
}
