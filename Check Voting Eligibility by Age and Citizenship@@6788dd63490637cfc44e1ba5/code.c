#include <stdio.h>

int main() {
   int age , votingage = 18;
   
   scanf("%d",&age);
   if(age> votingage){
       printf("Eligible");
   }
   else {
    printf("Not Eligible");
   }
    return 0;
}