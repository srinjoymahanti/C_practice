#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter first number:");
    scanf("%d", &a);
    printf("Enter second nuber:");
    scanf("%d", &b);
    printf("Enter third number:");
    scanf("%d", &c);
    if (a > b && a > c)
    {
        printf("%d is the greatest", a);
    }
    if (b > a && b > c)
    {
        printf("%d is the greatest", b);
    }
    if (c > a && c > b)
    {
        printf("%d is the greatest", c);
    }
    return 0;
}