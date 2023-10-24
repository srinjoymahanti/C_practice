#include<stdio.h>
int main(){
    float p,r,t,si;
    printf("Enter p:");
   scanf("%f",&p);
   printf("enter r:");
   scanf("%f",&r);
    printf("enter time:");
    scanf("%f",&t);
    si=(p*r*t)/100; 
    printf("%f",si);
    return 0;
}