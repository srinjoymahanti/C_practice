#include<stdio.h>
int main(){
    int cp;
    printf("Enter cost price:");
    scanf("%d",&cp);
    int sp;
    printf("Enter selling price:");
    scanf("%d",&sp);
    if(cp > sp){
        printf("Loss");
    }
    if(cp < sp){
        printf("Profit");
    }
    if(sp == cp){
    printf("No loss,no profit");
    }
    return 0;
}