#include<stdio.h>

int minutes[7];
int i;

void logMusic()
{
    FILE *fp;

    fp = fopen("music_log.txt","w");

    for(i=0; i<7; i++)
    {
        printf("Enter listening minutes for Day %d: ", i+1);
        scanf("%d",&minutes[i]);

        fprintf(fp,"%d\n",minutes[i]);
    }

    fclose(fp);

    printf("Data Saved Successfully!\n");
}

void viewSummary()
{
    printf("\nWeekly Listening Minutes\n");

    for(i=0; i<7; i++)
    {
        printf("Day %d = %d Minutes\n",i+1,minutes[i]);
    }
}

void weeklyReport()
{
    FILE *fp;
    int total=0, highest=0, average, value;

    fp = fopen("music_log.txt","r");

    if(fp==NULL)
    {
        printf("No Data Found.\n");
        return;
    }

    highest=0;

    for(i=0; i<7; i++)
    {
        fscanf(fp,"%d",&value);

        total = total + value;

        if(value>highest)
        {
            highest=value;
        }
    }

    average = total/7;

    printf("\nTotal Minutes = %d\n",total);
    printf("Average Minutes = %d\n",average);
    printf("Highest Minutes = %d\n",highest);

    fclose(fp);
}

void resetData()
{
    char ch;
    FILE *fp;

    printf("Are you sure? (y/n): ");
    scanf(" %c",&ch);

    if(ch=='y' || ch=='Y')
    {
        for(i=0; i<7; i++)
        {
            minutes[i]=0;
        }

        fp=fopen("music_log.txt","w");
        fclose(fp);

        printf("Data Reset Successfully!\n");
    }
    else
    {
        printf("Reset Cancelled.\n");
    }
}

int main()
{
    int choice=0;

    while(choice!=5)
    {
        printf("\n===== Music Listening Logger =====\n");
        printf("1. Log Music Minutes\n");
        printf("2. View Weekly Summary\n");
        printf("3. Weekly Report\n");
        printf("4. Reset Data\n");
        printf("5. Exit\n");

        printf("Enter Choice: ");
        scanf("%d",&choice);

        if(choice==1)
        {
            logMusic();
        }
        else if(choice==2)
        {
            viewSummary();
        }
        else if(choice==3)
        {
            weeklyReport();
        }
        else if(choice==4)
        {
            resetData();
        }
        else if(choice==5)
        {
            printf("Thank You!\n");
        }
        else
        {
            printf("Invalid Choice\n");
        }
    }

    return 0;
}
