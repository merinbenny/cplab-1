/*Program to find efficiency of workers
Author:Jiya Mathai
Date:21/02/2019
*/

#include<stdio.h>
void main()
{
	float time;
	printf("enter the time of worker:");
	scanf("%f",&time);
	if(time>=2 && time<3)
		printf("The worker is said to be highly efficient");
	if(time>=3 && time<4)
		printf("The worker is ordered to improve speed");
	if(time>=4 && time<5)
		printf("The worker is given training to speed");
	if(time>=5)
		printf("the worker is terminated");

}
	
