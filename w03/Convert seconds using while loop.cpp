#include <stdio.h>
#include <math.h>

int main()
{
	float bmi,kg,cm;
	printf("Enter your height and weight:");
	while(scanf("%f %f",&cm,&kg))
	{
		
		cm=cm/100;
		
		cm=cm*cm;
		
		
		bmi=kg/cm;
		printf("Your BMI is %.1f\n",bmi);
		printf("Enter your height and weight:");
	}
}

