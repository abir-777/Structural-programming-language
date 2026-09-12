#include <stdio.h>
int main()
{
    int year;
    printf("Enter any year : ");
    scanf("%d", &year);
    if (year % 4 == 0)
    {
        printf("It is leap a year");
    }
    else
    {
        printf("It is not a leap year");
    }
    return 0;
}