/*Program to print multiplication table of the number entered by the user 
Author:Jiya Mathai
Date:06/03/2019
*/

#include<stdio.h>
void main()
{
	int digit,number,product;
	printf("Enter the digit:");
	scanf("%d",&digit);
	for(number=1;number<digit;number++)
		{
		product=digit*number;
		}
	printf("%d*%d=%d",
