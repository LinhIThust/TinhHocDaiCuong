#include <stdio.h>
#include<math.h>

int main(){
 int x=5,y=6,z=7;
 x= x++ + ++y* ++z- ++x;
 printf("%d   %d   %d",x,y,z);


}