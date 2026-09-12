#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    if (n % 3 == 0 && n % 5 == 0) // && and statement works for 3 4 or multiple conditions.
    {
        printf("The number is divisible by 3 and 5");
    }
    else
    {
        printf("The number is not divisible by 3 and 5");
    }
    return 0;
}