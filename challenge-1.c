/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Mint                                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/2/12 22:18:52 by Mint               #+#    #+#             */
/*                                                    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>


int main() {
    double height = 221.1; 
    double width = 23.3; 

    double preimeter; 
    double area; 

    preimeter = 2.0 * (height + width) ; 
    area = width * height; 

    printf("the preimeter of the rectangle is %.3f\n" , preimeter); 
    printf ("the area of the rectangle is %.3f\n" , area); 

    return 0; 
    

}