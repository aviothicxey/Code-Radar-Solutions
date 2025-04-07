// Your code here...
#include <stdio.h>
int main(){
    int n , j ,i;
    scanf("%d",&n);
    int arr[n];
    int freq[n];
    for (i =0 ; i<n ; i++){
        scanf("%d",&arr[i]);
        freq[i]= -1;
    }
    for(i = 0 ; i <n ; i++){
       if (freq[i]== -1){
         int count = 1;
         
        for (j = 1+i ; j<n ; j++){
            if(arr[i]== arr[j]){
                count++;
                freq[j]= 0;
            }
        }
        freq[i] = count;
        }
    }
    for( i = 0; i<n ; i++){
        if(freq[i]!= 0){
            printf("%d %d\n",arr[i], freq[i]);
        }
    }
    return 0;
}