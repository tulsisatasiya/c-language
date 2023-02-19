#include<stdio.h>

main()
{
	float r;
	float area;
    float pi=3.14; 
	
	printf("Enter radius of a circle:");
	scanf("%f",&r);	
	
	area =pi* r * 2;
	printf("Perimeter of circle is:%f",area);
	
}
