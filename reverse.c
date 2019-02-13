/*Program to find reverse of a number
Author:Jiya Mathai
Date:13/02/2019
*/

#include<stdio.h>
void main()
{
	int number,reverse=0,remainder,a;
	printf("enter the number:");
	scanf("%d",&number);
	a=number;
	while(number>0)
		{
		remainder=number%10;
		reverse=reverse*10+remainder;
		number=number/10;
		}
	printf("Reverse of %d is %d",a,reverse);
}

		
	
		


