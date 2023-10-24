#include<stdio.h>
int main(){
    int x,y;
    printf("Enter the coordinate:");
    scanf("%d %d",&x,&y);
    if(x == 0 && y == 0){
        printf("The point is on origin");
    }
    else if(x == 0){
        printf("The point lies on y axis");
    }
    else if(y == 0){
        printf("The point lies on x axis");
    }
    else{
        printf("Point does not lies on x or y axis");
    }
    return 0;
}