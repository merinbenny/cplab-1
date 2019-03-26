/*Program to add first seven terms of the series 1/1!+1/2!+1/3!+.....+1/7!
Author:Jiya Mathai
Date:06/03/2019
*/

#include<stdio.h>
int main()
{
	float i=1,sum=0,fact=1;
	while(i<7)
		{
		fact=fact*i;
		sum=sum+(1/fact);
		i=i+1;
		}
	printf("sum of the series is %f",sum);
}

