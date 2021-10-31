/*Program to receive an integer and find its octal equivalent
Author:Jiya Mathai
Date:06/03/2019
*/

#include<stdio.h>
void main()
{
	int rem,oct=0,num,i=1;
	printf("enter a number:");
	scanf("%d",&num);
	while(num>0)
		{
		rem=num%8;
		num=num/8;
		oct=oct+(rem*i);
		i=i*10;
		}
	printf("octal equivalent is %d",oct);
}
		
