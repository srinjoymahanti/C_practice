#include<stdio.h>
int main(){
    // 100 97 94 .....upto even numbers
    int a = 100;
    for(int i=1;a>0;i++){
        printf("%d ",a);
        a = a -3;
    }
    return 0;
}