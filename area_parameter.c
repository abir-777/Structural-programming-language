#include <stdio.h>
int main()
{
    int l;
    printf("Enter length : ");
    scanf("%d", &l);
    int w;
    printf("Enter width : ");
    scanf("%d", &w);
    int a;
    a = l * w;
    int p = 2 * (l + w);
    if (a > p)
    {
        printf("Area is greater than parameter");
    }
    if (a < p)
    {
        printf("Parameter is greater than Area");
    }
    if (a == p)
    {
        printf("Area and Parameter are equal");
    }
    return 0;
}