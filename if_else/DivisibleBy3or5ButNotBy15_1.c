#include<stdio.h>
int main(){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    if(n % 3 == 0 || n % 5 == 0){
        if(n % 15 != 0){
            printf("Number is divisible by 3 or 5 but not by 15");

        }
        else{printf("Number is divisible by 15");}
    }
    else{printf("Number is not divisible by 5 or 3");}
    return 0;
}