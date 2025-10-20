#include <stdio.h>
#include <stdlib.h> // for rand() and srand()
#include <time.h>   // for time()
/*
0 = ROCK
1 = PAPER
2 = SCISSORS
*/
int main(void)
{
    // Seed the random number generator with current time
    srand(time(0));
    int player, computer = rand() % 3;
    printf("----- GAME BEGINS-----\n");
    printf(" Enter 0 for ROCK\n Enter 1 for PAPER\n Enter 2 for SCISSORS\n");
    scanf("%d", &player);
    printf("Computer choose:%d\n", computer);

    if (player == 0 && computer == 0)
    {
        printf("Its a Draw\n");
    }
    else if (player == 0 && computer == 1)
    {
        printf("You lose !!\n");
    }
    else if (player == 0 && computer == 2)
    {
        printf("You Win !!\n");
    }
    else if (player == 1 && computer == 0)
    {
        printf("You win !!\n");
    }
    else if (player == 1 && computer == 1)
    {
        printf("Its a Draw\n");
    }
    else if (player == 1 && computer == 2)
    {
        printf("You Lose!!\n");
    }
    else if (player == 2 && computer == 0)
    {
        printf("You lose !!\n");
    }
    else if (player == 2 && computer == 1)
    {
        printf("You Win !!\n");
    }
    else if (player == 2 && computer == 2)
    {
        printf("Its a Draw\n");
    }
    else{
        printf("Something Went Wrong !!\n");
    }

    return 0;
}