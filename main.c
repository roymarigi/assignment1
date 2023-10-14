#include <stdio.h>
int main(void){
    int a, b, c, d;
    printf("Enter the first number:");
    scanf("%d",&a);
    printf("Enter the second number:");
    scanf("%d",&b);
    printf("Enter the third number:");
    scanf("%d",&c);
    d=a+b+c;
    printf("%d+%d+%d=%d\n",a,b,c,d);
    return 0;
}
