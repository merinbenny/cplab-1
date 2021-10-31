/*Program to find greatest of two numbers
Author:Jiya Mathai
Date:13/02/2019
*/

#include<stdio.h>
void main()
{
	int number1,number2;
	printf("enter two numbers:");
	scanf("%d%d",&number1,&number2);
	/*to find which number is greatest*/
	if(number1>number2)
		printf("%d greater",number1);
	else
		printf("%d greater",number2);
}



