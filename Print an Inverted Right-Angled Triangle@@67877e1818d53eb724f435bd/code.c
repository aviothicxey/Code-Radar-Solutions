# include <stdio.h>
void triangle( int height){
    for(int i = height ; i>0 ; i--){
        for (int j = 0 ; j < i ; j++){
            printf("* ");
        }
    }
}
int main()
{
    int height;
    scanf("%d\n",&height);
    int n = triangle( int height);
    printf("%d\n", n);
    return 0;
}