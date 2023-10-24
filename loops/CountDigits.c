#include<stdio.h>
int main(){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    int a = 0;
    while(n!=0){
        n=n/10;
        a++;
    }
    printf("The number of digits are :%d",a);
    return 0;
}