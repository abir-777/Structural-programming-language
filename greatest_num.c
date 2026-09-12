#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter three Numbers : ");
    scanf("%d %d %d", &a, &b, &c);
    if (a > b && a > c)
    {
        printf("%d is the greatest number", a);
    }
    if (b > c && b > a)
    {
        printf("%d is the greatest number", b);
    }
    if (c > a && c > b)
    {
        printf("%d is the greatest number", c);
    }

    return 0;
}