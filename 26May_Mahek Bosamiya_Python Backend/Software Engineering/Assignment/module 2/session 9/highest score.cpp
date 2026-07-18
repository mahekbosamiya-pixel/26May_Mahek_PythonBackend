#include<stdio.h>

int main()
{
    int cricketScores[3][2];
    int i;

    for(i=0; i<3; i++)
    {
        printf("Enter scores of Team 1 and Team 2 for Match %d: ", i+1);
        scanf("%d%d",&cricketScores[i][0],&cricketScores[i][1]);
    }

    printf("\nHighest Score in Each Match:\n");

    for(i=0; i<3; i++)
    {
        if(cricketScores[i][0] > cricketScores[i][1])
        {
            printf("%d\n", cricketScores[i][0]);
        }
        else
        {
            printf("%d\n", cricketScores[i][1]);
        }
    }

    return 0;
}
