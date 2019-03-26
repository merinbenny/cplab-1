/*Program to print the multiplication table if the number entered by the user
Author:Jiya Mathai
Date:06/03/2019
*/

#include<stdio.h>
void main()
{
	int num,i=1,prod;
	printf("enter the number:");
	scanf("%d",&num);
	for(i=1;i<=10;i++)
		{
		prod=num*i;
		printf("%d*%d=%d\n",num,i,prod);
		}
}
