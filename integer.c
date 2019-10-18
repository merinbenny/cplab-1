/*Program to receive an integer and find its octal equivalent
Author:Jiya Mathai
Date:06/03/2019
*/

#include<stdio.h>
void main()
{
	int num,octal=0,remainder,i;
	printf("enter the num:");
	scanf("%d",&num);
	i=1;
	while(number>0)
		{
		remainder=num%8;
		num=num/8;
		octal=octal+(remainder*i);
		i=1*10;
		}
	printf("octal is %d",octal);
} 

	

		
		
		
		
		
	
	
