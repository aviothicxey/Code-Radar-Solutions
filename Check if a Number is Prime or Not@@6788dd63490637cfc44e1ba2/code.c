#include <stdio.h>
int main(){
    int a,i;
    scanf("%d",&a);
    for(i = 0;i>0; i++ ;){
        if (a % i == 0){
            printf("Not Prime");
        }
        else{
            printf("Prime");
        }
    }

    return 0;
}