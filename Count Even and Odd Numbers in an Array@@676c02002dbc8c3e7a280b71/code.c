// Your code here...
#include<stdio.h>
int main(){
    int n;
    int even = 0;
    int odd = 0;
    scanf("%d",&n);
    int arr[n];
    for (int i =0 ; i<=n; i++){
        scanf("%d",&arr[i]);
        if(arr[i] % 2 == 0){
            even++;
        }
        else{
            odd++;
        }
    }
    printf("%d ",even);
    printf("%d",odd);
    return 0;
}