#include<stdio.h>
int main(){
    for(int i=1;i<=100;i++){//Even numbers
        if(i%2!=0){
            continue;
        }
         printf("%d ",i);
    }
    return 0;
}