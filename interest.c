#include<stdio.h>

main(){
	float p,r,t;
	float area;
	
	printf("Enter Principal of Simple interest:");
	scanf("%f",&p);
	printf("Enter RateofInterest of Simple interest:");
	scanf("%f",&r);
	printf("Enter Timeperiod of Simple interest:");
	scanf("%f",&t);
	
	area =p*r*t;
	printf("Simple interest is:%f",area);
	
}
