#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter first number:");
    scanf("%d",&a);
    printf("Enter second number:");
    scanf("%d",&b);
    printf("Enter third number:");
    scanf("%d",&c);
    if(a > b){
        if(a > c){
            printf("%d is the greatest",a);
        }
        else{// c > a  ->  c>a>b
            printf("%d is the greatest",c);
        }
    }
    else{// b > a
        if(b > c){
            printf("%d is the greatest",b);
        }
        else{// c > b  -> c>b>a
            printf("%d is the greatest",c);
        }
    }
    return 0;
}