/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Mint                                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/2/15 15:06:52 by Mint               #+#    #+#             */
/*                                                    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> 


int main(void) {
    float value1 , value2; 
    char operator; 
    printf("Type your experssion. \n"); 
    scanf("%f %c %f", &value1 , &operator, &value2); 
    switch (operator)
    {
    case '+':
        printf("%2f  \n  ", value1 + value2);
        break;

        case '-' : 
        printf("%2f \n", value1 - value2); 
        break;

        case '*': 
        printf("%2f \n", value1 * value2); 
        break;

        case '/' :
        
        if(value2 == 0) printf("division by zero is not allowed \n");
        else 
        printf("%2f \n", value1 / value2); 
        break;
    
    default:
     printf("unknown operator \n"); 
        break;
    }

    return 0; 
} 