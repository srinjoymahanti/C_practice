#include<stdio.h>
int main(){
    int l;
    printf("Enter length:");
    scanf("%d",&l);
    int b;
    printf("Enter breadth:");
    scanf("%d",&b);
    int A = l * b;
    int P = 2*(l + b);
    if(A > P){
        printf("Area is grater than Perimeter");
    }
    else{printf("Area is not greater than Perimeter");}
    return 0;
}