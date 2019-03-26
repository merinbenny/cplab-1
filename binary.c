/*Program using function to find the binary equivalent of a given decimal number
Author:Jiya Mathai
Date:20/03/2019
*/

#include<stdio.h>
void binary(int number);
void main()
{
	int number;
	printf("enter the number:");
	scanf("%d",&number);
	binary(number);
}
void binary(int number)
{
	int rem,rev=0;
	while(number!=0)
		{
		rem=number%2;
		rev=(rev*10)+rem;
		number=number/2;		
		}
		printf("the binary value is %d",rev);
}


