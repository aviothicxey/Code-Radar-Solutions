// # include <stdio.h>
// void triangle( int height){
//     for(int i = height ; i>0 ; i--){
//         for (int j = 0 ; j < i ; j++){
//             printf("* ");
//         }
//     }
// }
// int main()
// {
//     int height;
//     scanf("%d\n",&height);
//     int n = triangle(height);
//     printf("%d\n", n);
//     return 0;
// }
#include <stdio.h>
int main(){
    int i ;
    scanf("%d\n",&i);
    if (i==1){
        printf("*");
    }
    else if(i == 2){
        printf("* *\n*");
    }
    else if (i == 3){
        printf("* * *\n* * \n *");
    }
    else{
        printf("* * * *\n* * *\n* *\n*");
    }
    return 0;
}