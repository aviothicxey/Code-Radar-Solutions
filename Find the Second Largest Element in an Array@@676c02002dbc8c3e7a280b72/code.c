// Your code here...
#include <stdio.h>
int main(){
    int i , n;
    scanf("%d ",&n);
    if (n<2){
        return 0;
    }
    int arr[n];
    for (i = 0; i<=n ; i++){
        scanf("%d ",&arr[i]);
    }
    int first = arr[0], second = -1;
    for (i = 1 ; i<n ; i++){
        if(arr[i] > first){
            second = first;
            first = arr[i];
        }
        else if (arr[i]<first && (second == -1 || arr[i] >second )){
            second = arr[i];
        }
    }
    if (second == -1){
        printf("-1");
    }
    else if{
        printf("%d",second);
    }
    else{
        printf("-1");
    }
    return 0;
}