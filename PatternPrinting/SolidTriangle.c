#include<stdio.h>
int main(){
    int n,m;
    printf("Enter number of rows:");
    scanf("%d",&n);
    printf("Enter number of column:");
    scanf("%d",&m);
    for(int i=1;i<=n;i++){//Outer loop ->No of lines
        for(int i=1;i<=m;i++){//Inner loop ->No of stars in each line
            printf("*");
        }
        printf("\n");
    }
    return 0;
}