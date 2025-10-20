// Game : GUSSE THE NUMBER
#include <stdio.h>
#include <stdlib.h>  // for rand() and srand()
#include <time.h>    // for time()


int main(void) {
    // Seed the random number generator with current time
    srand(time(0));  

    // Generate random number
    int randomNumber = (rand() %100) +1;  
    int gussed_no ; 
    int no_of_gusses = 0 ;
    do
    {
        printf("Enter the number to guess: ");
        scanf("%d", &gussed_no);
        if (gussed_no > randomNumber)
        {
            printf("Lower Number please !!\n");
        }
        else if (gussed_no < randomNumber)
        {
            printf("Higher number please\n");
        }
        else{
            printf("\nCongradulations !! You Gusssed right number\n");
        }
        no_of_gusses ++;
        
        
    } while (gussed_no != randomNumber);
    printf("You gussed the number in %d gusses\n", no_of_gusses);
  

    return 0;
}
