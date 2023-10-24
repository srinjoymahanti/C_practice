#include<stdio.h>
int main(){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    //Ternary operator
    //Expression 1?Expression 2:Expression 3:
    n % 2 == 0?printf("Even"):printf("Odd");
    return 0;
}