#include<stdio.h>
int main(){
    for(int i=65;i<=90;i++){
        //Typecasting
        char ch = (char)i;
        printf("Ascii value of %c is:",ch);
        printf("%d\n",i);
    }
    return 0;
}