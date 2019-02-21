/*Program to find whether area of a rectangle is greater than its perimeter
Author:Jiya Mathai
Date:20/02/2019
*/

#include<stdio.h>
void main()
{
	int length,breadth,area,perimeter;
	printf("enter the length and breadth:");
	scanf("%d%d",&length,&breadth);
	area=length*breadth;
	perimeter=2*(length+breadth);
	if(area>perimeter)
		printf("%d area is greater than its perimeter",area);
	else
		printf("%d perimeter is greater than its area",perimeter);
}
	
	
