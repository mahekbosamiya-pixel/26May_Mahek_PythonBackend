#include<stdio.h>

int main()
{
    int i;

    printf("Entry-Controlled Loop (while)\n");

    i = 5;

    while(i < 5)
    {
        printf("%d\n", i);
        i++;
    }

    printf("Loop did not execute because condition was false.\n");

    printf("\nExit-Controlled Loop (do-while)\n");

    i = 5;

    do
    {
        printf("%d\n", i);
        i++;
    }
    while(i < 5);

    printf("Loop executed once even though condition was false.\n");

    return 0;
}
