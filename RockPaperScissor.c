#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <errno.h>

int compare(char a, char b)
{
    if (a == b)
    {
        return -1;
    }
    else if (a == 'r' && b == 's')
    {
        return 1;
    }
    else if (b == 'r' && a == 's')
    {
        return 0;
    }
    else if (a == 'p' && b == 'r')
    {
        return 1;
    }
    else if (b == 'p' && a == 'r')
    {
        return 0;
    }
    else if (a == 's' && b == 'p')
    {
        return 1;
    }
    else if (b == 's' && a == 'p')
    {
        return 0;
    }
}

int main()
{
    int playerScore = 0, cpuScore = 0, input;
    char playerchoice, CPUchoice;
    char dict[] = {'r', 'p', 's'};
    int quit=0, decision;
    while (!quit)
    {
        printf("Choose:\n\t1. Rock\n\t2. Paper\n\t3. Scissors\n\n");
        printf("\tYour turn: ");
        scanf("%d", &input);
        getchar();
        playerchoice = dict[input - 1];
        printf(" -----------------\n");
        printf(">> You chose: %c   ", playerchoice);

        input = rand()%3 + 1;
        CPUchoice = dict[input - 1];
        printf("\n");
        printf(">> CPU chose: %c \n", CPUchoice);
        printf(" --------------------\n\n");
        if (compare(CPUchoice, playerchoice) == 1)
        {
            cpuScore++;
            printf("\tCPU Wins!\n\n");
        }
        else if (compare(CPUchoice, playerchoice) == -1)
        {
            printf("\tIt's a draw.\n\n");
        }
        else
        {
            playerScore++;
            printf("\tYou Win!\n\n");
        }
        printf("\n -------------\n");
        printf(" You: %d      |\n", playerScore);
        printf(" Computer: %d |\n", cpuScore);
        printf(" -------------\n\n");

        printf("press any number to continue; press 0 to finish: ");
        scanf("%d", &decision);
        if (decision==0){
            quit=1;
        }
    }

    printf("\n\n -------------------\n");
    printf(" -------------------");
    printf("\n||  Final Score   \n");
    printf("||  You    %d\t\n", playerScore);
    printf("||  CPU    %d\t\n", cpuScore);
    
    if (playerScore > cpuScore)
    {
        printf("|| You Win! \n");
    }
    else if (playerScore < cpuScore)
    {
            printf("|| CPU Wins!\n");
    }
    else
    {
        printf("|| It's a draw\n");
    }
    printf(" -------------------\n");
    printf(" -------------------\n\n");
 

    return 0;
}
