#include<stdio.h>
int main(){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    int a=1;
    int b=1;
    int sum = 1;
    printf("the 1st fibonacci is:1\n");
    printf("the 2nd fibonacci is:1\n");
    for(int i=1;i<=(n-2);i++){
        sum = a + b;
        a = b;
        b = sum;
        printf("The %dth fibonacci is:%d\n",(i+2),sum);
    }
 
    return 0;
}