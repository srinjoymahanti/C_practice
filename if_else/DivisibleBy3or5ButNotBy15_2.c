#include<stdio.h>
int main(){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    if((n % 3 == 0 || n % 5 == 0)&& n % 15 != 0){
        printf("Number is divisible by 3 or 5 but not by 15");
    }
    else{printf("Not matching the required condition");}
    return 0;
}