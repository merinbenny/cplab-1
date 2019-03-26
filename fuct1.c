/*Program to product of a float and an int and returns the product to the main
Author:Jiya Mathai
Date:20/03/2019
*/

#include<stdio.h>
float product(int number1,float number2);
void main()
	{
	int number1;
	float number2,prod;
	printf("enter the integer number:");
	scanf("%d",&number1);
	printf("enter the float number:");
	scanf("%f",&number2);
	prod=product(number1,number2);
	printf("The product is %f",prod);
	}
float product(int number1,float number2)
	{
	float prod;
	prod=number1*number2;
	return prod;
	}


