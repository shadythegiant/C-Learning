/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Mint                                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/2/15 14:18:52 by Mint               #+#    #+#             */
/*                                                    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int main() {
    int numberToTest, remainder; 
    printf("please enter a number to test whether its odd or even :" ); 
    scanf("%i ", &numberToTest); 
    remainder = numberToTest % 2; 
    if(remainder == 0)   
        printf(" is an even number \n" ) ; 
    
   else 
        printf(" is  an odd number \n  " ) ; 
    

  return 0; 

    
} 