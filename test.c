#include <stdio.h>
#include<string.h>
#define F(i,a) for(i=0; i< a; i++)
struct{
    char name[130];
    char SBD[40];
    float dienThi;
}student;
int main() {
    int i;
    student ds[100];
        freopen("testin.txt","r",stdin);
        freopen("testout.txt","w",stdout);
        F(i,2){
         gets(ds[i].name);
         gets(ds[i].SBD);

        }
        F(i,2){
        printf("ho ten:%s\n",);
        printf("so bao danh:%s\n",);
        printf("diem thi:%f\n",);
        }

        fclose(stdin); fclose(stdout);
}
