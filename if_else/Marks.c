#include<stdio.h>
int main(){
    int n;
    printf("Enter marks:");
    scanf("%d",&n);
    if(n > 90){
        printf("A grade");
    }
    else if(n > 60){
        printf("B grade");
    }
    else if(n > 40){
        printf("C grade");
    }
    else{
        printf("D grade");
    }
    return 0;
}