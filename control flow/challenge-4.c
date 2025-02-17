/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*        print Fahrenheit - celsius table            +:+ +:+         +:+     */
/*   By: Mint                                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/2/17 14:10:52 by Mint               #+#    #+#             */
/*                                                    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main(void){

    int fahr , celsius; 
    int upper , lower , step; 
    lower = 0;  // lower temp scale 
    upper = 300; 
    step = 20; 
    fahr = lower; 

    while (fahr <= upper) {
        celsius = 5 * (fahr - 32)  / 9 ; 
        printf("%d \t %d \n", fahr , celsius); 
        fahr += step; 

    }
    
    return 0;

}