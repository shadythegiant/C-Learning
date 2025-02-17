/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   a programm that calculate weekly pay               :+:      :+:    :+:   */
/*    basic pay rate : $12 /h                         +:+ +:+         +:+     */
/*   overtime : time and a half                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/2/15 16:18:52 by Mint               #+#    #+#             */
/*                                                    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#define PAYRATE 12.00
#define TAXRATE_300 .15 
#define TAXRATE_150 .20 
#define TAXRATE_REST .25
#define OVERTIME 40 




int main(void) {
   int hours = 0; 
   double grossPay = 0.0; 
   double taxes = 0.0; 
   double netPay = 0.0; 
   
   
   printf("Please Enter Numbers of hours worked : "); 
   scanf("%d ", &hours); 

   // calculate gross pay 

   if(hours <= 40) 
        grossPay = hours * PAYRATE; 
     else {
        grossPay = 40 * PAYRATE; 
        double overTimePay = (hours - 40) * (PAYRATE * 1.5 ); 
        grossPay += overTimePay; 
     }

   // taxes 

   if( grossPay <= 300) 
      {
        taxes = grossPay * TAXRATE_300; 
      }

      else  if (grossPay > 300 && grossPay <= 450 ) ;
       {
        taxes = (300 * TAXRATE_300) + ((grossPay - 300) * TAXRATE_150 );
      }
        if (grossPay > 450 )

       {
        taxes = 300 * TAXRATE_300; 
        taxes += 150 * TAXRATE_150; 
        taxes += (grossPay - 450) * TAXRATE_REST; 
      }
      

      netPay = (grossPay - taxes); 

      printf("$%f grossPay \t $%f taxes  \t $%f netPay \n", grossPay , taxes, netPay);

   return 0; 
}