/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Mint                                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/2/14 21:59:52 by Mint               #+#    #+#             */
/*                                                    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Create a programm that converts minuets to days and years; 
#include <stdio.h>
#include <stdlib.h>

int main() { 

    int minuetsEntered = 0; 
    double year = 0.0;
    double days = 0.0; 
    printf("Please enter the number of minuets "); 
    scanf("%d", &minuetsEntered); 

     days = (minuetsEntered / 60 * 24);
     year = days / 365; 
     
     printf("%d minutes is %f days and %f years \n" , minuetsEntered , days , year);



    return 0; 
}