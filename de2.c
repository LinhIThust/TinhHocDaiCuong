
#include<conio.h>
#include<stdio.h>


int main ()
{
    int mang[100];
    int i =-1;
    int n,doi,j;
    do{
        i++;
        printf("nhap so thu %d :",i+1);
        scanf("%d",&mang[i]);
    }while (mang[i] != 7 && mang[i] != 0 );
    n=i;
    printf("mang vua nhap la: ");
    for(i=0;i<n;i++)
        printf("%d  ",mang[i]);

    for(i=0;i<n;i++){
        for (j = i+1;j<n;j++){
            if(mang [j]<mang[i]){
                doi = mang[j];
                mang[j]=mang [i];
                mang[i]=doi;
            }
        }
    }
    printf("\n");
    printf("day duoc sap xep la: ");
    for(i=0;i<n;i++)
        printf("%d  ",mang[i]);
}
