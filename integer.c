/*Program to receive an integer and find its octal equivalent
Author:Jiya Mathai
Date:06/03/2019
*/

#include<stdio.h>
void main()
{
	int number,octal=0,remainder,i;
	printf("enter the number:");
	scanf("%d",&number);
	i=1;
	while(number>0)
		{
		remainder=number%8;
		number=number/8;
		octal=octal+(remainder*i);
		i=1*10;
		}
	printf("octal is %d",octal);
} 

	

		
		
		
		
		
	
	
