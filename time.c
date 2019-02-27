/*Program to print 24 hours of a day with suitable suffixes like AM,PM,NOON and MIDNIGHT
Author:Jiya Mathai
Date:27/02/2019
*/

#include<stdio.h>
void main()
{
	int i,j;
	printf("12 MIDNIGHT\n");
	for(i=1;i<12;i++)
	{
		printf("%d AM\n",i);
	}
	printf("12 NOON\n");
	for(j=1;j<12;j++)
	{
		printf("%d PM\n",j);
	}
}
