#include <stdio.h>
int main(){
    int a ;
    scanf("%d\n", &a);
    for ( i= 0 ; i < a+1 ; i++){
        for ( j =0 ; j < i +1 ; j++){
            int sum = i +j ;
            printf("%d",sum);
        }
    }
}