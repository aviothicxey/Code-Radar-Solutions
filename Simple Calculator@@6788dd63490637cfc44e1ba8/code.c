#include <stdio.h>

int main() {
    int a , b;
    char c;
    int d = a+b;
    int e = a * b;
    int f = a -b ;
    int g = a/b;
    scanf("%d%d%c",&a,&b,&c);
    if (c == +){
        printf("%d",d);
    }
    else if ( c == -){
        printf("%d",f);
    }
    else if( c == *){
        printf("%d",e);
    }
    else{
        printf("%d",g);
    }
    // printf("Hello, World!\n");
    
    return 0;
}