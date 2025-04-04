// #include <stdio.h>

// int findFirstPeak(int arr[], int n) {
//     if (n == 0) return -1;

//     for (int i = 0; i < n; i++) {
//         if ((i == 0 && arr[i] > arr[i + 1]) ||
//             (i == n - 1 && arr[i] > arr[i - 1]) ||
//             (i > 0 && i < n - 1 && arr[i] > arr[i - 1] && arr[i] > arr[i + 1])) {
//             return arr[i];
//         }
//     }

//     return -1; // No peak found
// }

// int main() {
//     int arr[100], n;
//     scanf("%d", &n); // Number of elements

//     for (int i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }

//     int peak = findFirstPeak(arr, n);
//     printf("%d\n", peak);

//     return 0;
// }



#include <stdio.h>
int findFirstPeak(int arr[],int n){
if (n==0) return -1;
for(int i = 0;i<n; i++){
    if((i ==0 ; && arr[i]>arr[i+1])
    || (i==n - 1 && arr[i]> arr[i-1])
    ||(i> 0 && i <n-1 && arr[i]>arr[i-1]&& arr[i]>arr[i+1]  )){
        return arr[i];
    }
}
return -1;
}
int main(){
    int arr[100],n;
    scanf("%d",&n);
    for(int i = 0; i <n ; i++){
        scanf("%d",&arr[i]);

    }
    int peak = findFirstPeak(arr,n):
    printf("%d\n",peak);
    return 0;
}
