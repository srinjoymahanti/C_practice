#include<stdio.h>
int main(){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    //no of lines/rows ->i
    //no of columns ->j
    for(int i=1;i<=n;i++){
        //i + j = n+1
        //j=n+1-j
        for(int j=1;j<=n+1-i;j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}