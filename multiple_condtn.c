#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d", &n); // both statement should be true
    if (n > 99 && n < 1000) // && means and = (2 3 4 condition setting)
    {
        printf("It is a three digit number");
    }
    else
    {
        printf("It is not a three digit number");
    }
    return 0;
}