#include <stdio.h>
 int main(){
    int t;
    scanf("%d",&t);
   if (t == 0 || t ==1 || t % 2 == 0 || t % 3 == 0 || t % 5 ==0){
    printf("0");
   }
   else if (t == 2){
    printf("1");
   }
   else{
    printf("1");
   }
   return 0;
 }