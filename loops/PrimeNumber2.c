#include<stdio.h>
int main(){
    int n;
    printf("Enter number:");
    scanf("%d",&n);
    int a = 0;
    for(int i=2;i<=n-1;i++){
        if(n % i==0){//i is a factor of n
        a = 1;
        break;
        }
    }
    if(n==1)printf("1 is not composite nor prime");
    else if(a==0)printf("Given number is prime");
    else printf("Given number is composite");
   
    
    return 0;
}