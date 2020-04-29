/* File   : CGPA.c
   Author : Brian Lembuss Kirwa <2127850>
   Date   : 31/5/2016
   Subject: Program accepts course and grade data from the user and calculates the user's grade point average for that semester. 
   
*/

#include <stdio.h>
#include <string.h>
#define SIZE 10 




int main()
{
	int courseload, i;
	float gpa( int );
	
	printf("This program calculates the grade point average for METU Students .\n");
	
	printf("How many credit courses have you taken?\n");
	scanf("%d",&courseload);
	
	
	
	printf("Your GPA for this semester is %.2f", gpa(courseload));
	return 0;
}

float gpa(int x)
{
	float credit; /* credits a course has */
	float coefficient; /* coefficient value of a letter grade, i.e AA= 4.0 */
	float creditscore; /* product of credits and coefficient of letter grade attained */
	float totalcredits=0.0 ,totalcreditscore=0.0;
	int i;
	float gpa;
	char grade[]="oo";
	int course[SIZE];

	
	
	
	for( i=1 ; i<=x ;i++)
	{
		printf("\nEnter the course code (numeric) of your %d-course: ",i);
		scanf("%d", &course[i]);
		
		printf("Enter the amount of credits %d has: ", course[i]);
		scanf("%f", &credit);
		
		totalcredits+=credit;
		
		printf("Enter your grade in %d:", course[i]);
		scanf ("%s", grade);
			if(strcasecmp(grade,"aa") ==0)
				coefficient=4.0; 
					
			if(strcasecmp(grade,"ba") ==0)
				coefficient=3.5; 
			
			if(strcasecmp(grade,"bb") ==0)
				coefficient=3.0; 
					
			if(strcasecmp(grade,"cb") ==0)
				coefficient=2.5; 
		
			if(strcasecmp(grade,"cc") ==0)
				coefficient=2.0; 
				
			if(strcasecmp(grade,"dc") ==0)
				coefficient=1.5; 
					
			if(strcasecmp(grade,"dd") ==0)
				coefficient=1.0; 
					
			if(strcasecmp(grade,"fd") ==0)
				coefficient=0.5; 
					
			if(strcasecmp(grade,"ff") ==0)
				coefficient=0.0; 
					
		creditscore= coefficient*credit;
		
		totalcreditscore+=creditscore;
	}
	
	
	gpa= totalcreditscore/totalcredits;
	
	return (gpa);
}




