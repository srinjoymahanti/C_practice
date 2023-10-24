#include<stdio.h>
int main(){
    int a,b;
    printf("Enter a and b:");
    scanf("%d %d",&a,&b);
    int quotient=a/b;
    int remainder=a-(b*quotient);//DIvisor * Quotient + Remainder = Divident
    printf("The Remainder when %d is divided by %d is:%d",a,b,remainder);
    return 0;
}