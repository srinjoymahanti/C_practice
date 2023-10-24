#include <stdio.h>
int main(){
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    int r =0;
    int originalnumber=n;
    while(n>0){
        r = r*10+n%10;
        n = n/10;
    }
    int sum=r+originalnumber;
     printf("the reverse is %d \n",r);
     printf("The sum is %d",sum);
    return 0;
}