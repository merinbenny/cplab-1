/*Program to check whether a number is palindrome
Author:Jiya Mathai
Date:13/02/2019
*/

#include<stdio.h>
void main()
{
	int number,reverse=0,remainder,a;
	printf("enter the number:");
	scanf("%d",&number);
	a= number;
	while(number>0)
		{
		remainder=number%10;
		reverse=reverse*10+remainder;
		number=number/10;
		}
	if(reverse==a)
		printf("%d is palindrome",a);
	else
		printf("%d is not palindrome",a);
}
	
