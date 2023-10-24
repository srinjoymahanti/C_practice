#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter the age of Ram:");
    scanf("%d",&a);
    printf("Enter the age of Shyam:");
    scanf("%d",&b);
    printf("Enter the age of Ajay:");
    scanf("%d",&c);
    if(a < b && a < c){
        printf("Ram is younger");
    }
    if(b < a && b < c){
        printf("Shyam is younger");
    }
    if(c < a && c < b){
        printf("Ajay is younger");
    }
    return 0;
}