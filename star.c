/*Program to print inverted half pyramid using *
 * * * * *
 * * * *
 * * *
 * *
 *
Author:Jiya Mathai
Date:27/02/2019
*/

# include<stdio.h>
void main()
{
	int i,j;
	for(i=1;i<=5;i++)
	{
		for(j=5;j>=i;j--)
		{
			printf("*\t");
		}
		printf("\n");
	}
}


