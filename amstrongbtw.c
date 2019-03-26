/*Program to find amstrong numbers between 100 and 500
Author:Jiya Mathai
Date:06/03/2019
*/

#include<stdio.h>
void main()
{
	int number,remainder,sum,temp;
	for(number=100;number<=500;number++)
	{
		temp=number;
		sum = 0;
		while(temp!=0)
		{
			remainder=temp%10;
			temp=temp/10;
			sum=sum+(remainder*remainder*remainder);
		}
	if(sum==number)
	printf("%d ",number);
	}
}
