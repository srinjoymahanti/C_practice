#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter the age of Ram:");
    scanf("%d",&a);
    printf("Enter the age of Shyam:");
    scanf("%d",&b);
    printf("Enter the age of Ajay:");
    scanf("%d",&c);
    if(a<b){
        if(a < c){
            printf("Ram is the youngest");
        }
        else{// c < a
            printf("Ajay is the youngest");
        }
    }
    else{// a > b
        if(b > c){// a > b > c
            printf("Ajay is the youngest");
        }
        else{// b < c
            printf("Shyam is the youngest");
        }
    }
    return 0;
}