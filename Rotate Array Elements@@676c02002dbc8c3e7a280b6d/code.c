#include <stdio.h>
void reverse(int arr[],int start,int end){
    while (start< end){
        int temp = arr [start];
        arr[start] = arr[end];
        arr[end]= temp;
        start++;
        end--;
    }
}
void rotatearray(int arr[],int n,int k){
    k = k%n ;
    reverse(arr,0,n-1);
    reverse(arr,0,k-1);
    reverse(arr,k,n-1);
}
void printarray(int arr[],int n){
    for (int i = 0; i<n; i++){
        printf("%d",&arr[i]);
    }
}
int main(){
  int n , k;
  scanf("%d",&n);
    int arr[n];
    for(int i = 0; i<n ;i++){
         scanf("%d", &arr[i]);
    }

    scanf("%d", &k);
    rotatearray(arr, n, k);

    printarray(arr, n);

return 0;
}