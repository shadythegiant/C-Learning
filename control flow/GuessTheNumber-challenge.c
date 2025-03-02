
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*  Guess the number challenge                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*                                                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/3/2 8:16         #    #+#             */
/*                                                    ###   ########.fr       */
/*                                                                            */



#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(void) {
    int randomNum = 0; 
    int guess = 0; 
    int maxNumOfGuess = 5; 
    time_t t; 

    // intialize the random number generator 

    srand((unsigned) time(&t)); 

    // get the random num 

    randomNum = rand() % 21; 

    for (int i = 1 ; i <= maxNumOfGuess ; i++)  {
        int count = maxNumOfGuess - i; 
        printf("Enter a number between 0 and 20 \n");
        scanf("%d" , &guess); 
        // if guess num is bigger than random num 

        if(guess <= 20&& guess > randomNum) {
          if( count == 0) {
            printf("/n you no longer have any attempts ")
          } else {
            printf(" the number is less than the number you entered you still have %d attempts " , count);
          }
        } else if (guess >= 0 && guess < randomNum) {
            if(count == 0) {
                printf("/n you no longer have any attempts ");
            } else {
                printf(" the number is bigger the number you entered you still have %d attempts " , count);
            }
        } else if  ( guess == randomNum) {
            printf ( " you guessed the right number\n"); 
            break;
        } else if ( guess > 20 || guess < 0 ) {
            printf( " the number should be between 0 and 20\n"); 
        }


    }


    return 0; 
}


