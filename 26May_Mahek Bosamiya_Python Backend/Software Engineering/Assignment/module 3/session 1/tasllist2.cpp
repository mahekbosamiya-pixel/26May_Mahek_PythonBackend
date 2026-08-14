#include <stdio.h>
#include <string.h>

char tasks[5][100];
char status[5][20];

void markTaskDone(int index)
{
    strcpy(status[index], "DONE");
}

int main()
{
    int i;

    for(i = 0; i < 5; i++)
    {
        printf("Enter task %d: ", i + 1);
        scanf(" %[^\n]", tasks[i]);

        strcpy(status[i], "PENDING");
    }

    markTaskDone(1);

    printf("\nUpdated Task List:\n");

    for(i = 0; i < 5; i++)
    {
        printf("%d. %s - %s\n", i + 1, tasks[i], status[i]);
    }

    return 0;
}
