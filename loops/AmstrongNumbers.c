#include<stdio.h>
int main(){
    int n;
    int lastdigit;
    int sum =0;
    for(int i=1;i<=500;i++){
        int originalvalue = i;
        int n=i;
    while(n!=0){
        lastdigit=n%10;
         n= n/10;
        sum = sum + (lastdigit*lastdigit*lastdigit);
    } 
    if(originalvalue==sum){
            printf("%d\n",originalvalue);
        }
    }
    return 0;
}