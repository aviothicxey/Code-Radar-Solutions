#include<stdio.h>
int main(){

int a;
scanf("%d",&a);
if(a==1){
    printf("1");
}
else if(a==2){
    printf(" 1\n121");
}
else if(a==3){
    printf("  1\n 121\n12321");
}
else if(a==4){
    printf("   1\n  121\n 12321 \n1234321");
}
else if (a==5){
    printf("    1\n   121\n  12321\n 1234321\n123454321");
}
return 0;
}