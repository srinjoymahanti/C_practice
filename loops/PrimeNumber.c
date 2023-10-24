#include<stdio.h>
int main(){
    int n;
    printf("Enter number:");
    scanf("%d",&n);  
    for(int i=2;i<=n-1;i++){
        if(n % i==0){//i is a factor of n
        printf("the number is composite");
        break;
        }
        else{printf("The given number is prime");
        break;}
    }
    if(n==1)printf("1 is neither primr nor composite");
    else if(n==2)printf("the given number is prime");   
    return 0;
}