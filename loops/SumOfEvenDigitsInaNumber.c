#include<stdio.h>
int main(){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    int sum = 0;
    int lastdigit;
    while(n!=0){
        lastdigit = n%10;
        n= n /10;
        if(lastdigit % 2 !=0)continue;
        sum = sum + lastdigit;
    }
    printf("The sum of the even number is :%d",sum);
    return 0;
}