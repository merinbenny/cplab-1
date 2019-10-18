/*Program to find youngest of three ages
Author:Jiya Mathai
Date:13/02/2019
*/

#include<stdio.h>
void main()
{
	int age1,shyamage,age3;
	printf("Enter Ram's age, Shyam's age, Ajay's age:");
	scanf("%d%d%d",&age1,&shyamage,&age3);
	if(age1<age2 && age1<age3)
		printf("the youngest one is Ram");
	if(age2<age1 && shyamage<age3)
		printf("the youngest one is Shyam");
	if(age3<age1 && age3<shyamage)
		printf("the youngest one is Ajay");
}


