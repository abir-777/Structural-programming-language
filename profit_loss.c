#include <stdio.h>
int main()
{
    int bp;
    printf("Enter buying Price : ");
    scanf("%d", &bp);
    int sp;
    printf("Enter selling Price : ");
    scanf("%d", &sp);
    if (sp > bp)
    {
        printf("PROFIT");
    }
    if (bp > sp)
    {
        printf("LOSS");
    }
    if (bp == sp)
    {
        printf("NO PROFIT , NO LOSS");
    }
    return 0;
}