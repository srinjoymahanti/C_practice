#include<stdio.h>
int main(){
    int n;
    printf("Enter number:");
    scanf("%d",&n);
    float a = 100.0;
    //100 50 25 ....upto n terms
    for(int i=1;i<=n;i++){
        printf("%f ",a);
        a = a / 2;
    }
    return 0;
}