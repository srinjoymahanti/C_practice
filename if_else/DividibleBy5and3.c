#include<stdio.h>
int main(){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    if(n % 5 == 0 && n % 3 == 0){
        printf("Divisible by 3 and 5");
    }
    else{printf("Not divisible by 3 and 5");}
    return 0;
}