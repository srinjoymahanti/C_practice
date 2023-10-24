#include<stdio.h>
int main(){
    float x;
    printf("Enter a decimal number:");
    scanf("%f",&x);
    int y = x;
    float z = x - y;
    printf("Fractional part of the number is:%f\n",z);
    return 0;
}