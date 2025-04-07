// Your code here...
#include<stdio.h>
int main(){
    int n ; 
    int i, int j;
    int arr[n];
    scanf("%d",&n);
    for (i = 0; i<= n; i++){
        scanf("%d",arr[i]);
    }
    for(i = 0; i <=n ; i++){
        if (arr[i] = n/2 ){
            printf("%d",arr[i]);
        }
        else{
            printf(-1);
        }
    }
}