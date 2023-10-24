#include<stdio.h>
int main(){
    int n,sum;
    printf("Enter a number:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        if(n%2!=0)sum=-(n/2);
        else sum = -(n/2)+n;
    }
    printf("The sum of the series is :%d",sum);
    return 0;
}