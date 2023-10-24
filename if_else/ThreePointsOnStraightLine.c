#include<stdio.h>
int main(){
    double x1,x2,x3,y1,y2,y3;
    printf("Enter first point:");
    scanf("%d %d",&x1,&y1);
    printf("Enter second point:");
    scanf("%d %d",&x2,&y2);
    printf("Enter third number:");
    scanf("%d %d",&x3,&y3);
    double m1,m2;
    m1 = (y2 - y1)/(x2 - x1);
    m2 = (y2 - y3)/(x2 - x3);
    if(m1 = m2){
        printf("Points fall on one straight line");
    }
    else {
        printf("Points are not in a straight line");
    }

    return 0;
}