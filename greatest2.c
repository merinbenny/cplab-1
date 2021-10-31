/* Programe to find greatest of three numbers
Author:Jiya Mathai
Date: 06/02/2019
*/

#include<stdio.h>
void main(){
	int number,number2,number3;
	printf("enter three numbers:");
	scanf("%d%d%d",&number,&number2,&number3);
	/*to find which number is greatest*/
	if(number>number2 && number>number3)
		{ 
		printf("the greatest number %d",number);
	}
	if(number2>number && number2>number3)
		{
		printf("the greatest number %d",number2);
	}
	if(number3>number && number3>number2)
		{
		printf("the greatest number %d",number3);
	}
}
