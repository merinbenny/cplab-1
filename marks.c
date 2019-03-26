/*Program using function to receive marks entered by a student in 3 subjects and returns the average and percentage of these marks
Author:Jiya Mathai
Date:20/03/2019
*/

#include<stdio.h>
void marks(float mark1,float mark2,float mark3);
void main()
	{
	float mark1,mark2,mark3;
	printf("Enter the 3 marks of the student:");
	scanf("%f%f%f",&mark1,&mark2,&mark3);
	marks(mark1,mark2,mark3);
	}
void marks(float mark1,float mark2,float mark3)
	{
	float average;
	float percentage;
	average=(mark1+mark2+mark3)/3;
	percentage=(average/50)*100;
	printf("average is %f\n percentage is %f",average,percentage);
	}
	
	

