#include<stdio.h>
int main(){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    // 1 - 2 + 3 - 4 + 5 -6....n terms
    //odd numbers -> add
    //even numbers -> subtract
    int sum =0;
    for(int i=1;i<=n;i++){
        if(n%2!=0)sum = sum + 1;
        else sum = sum - 1;
    }
    printf("The sum is:%d",sum);
    return 0;
}