#include <stdio.h>
main()
{
    int num;
    printf("Enter the issued amount:", num);
    scanf("%d", &num);
    if (num > 1000)
    {
        printf("Issued in par and reemption in premium:");
        if (num <! 1000)
        {
            printf("Issued in par and redemption in discount");
        }
    }
    else;
    {
    printf("Issued in par and redemption in par:");
    }

    return 0;
}