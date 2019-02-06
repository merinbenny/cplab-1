/* Programe to find greatest of three numbers
Author:Jiya Mathai
Date: 06/02/2019
*/

#include<stdio.h>
void main(){
	int number1,number2,number3;
	printf("enter three integer numbers:");
	scanf("%d%d%d",&number1,&number2,&number3);
	/*to find which number is greatest*/
	if(number1>number2 && number1>number3)
		{ 
		printf("the greatest number %d",number1);
	}
	if(number2>number1 && number2>number3)
		{
		printf("the greatest number %d",number2);
	}
	if(number3>number1 && number3>number2)
		{
		printf("the greatest number %d",number3);
	}
}
