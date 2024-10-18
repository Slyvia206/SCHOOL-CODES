/* Arthor : SLYVIA NJERI MURIITHI
 Reg no : CT102/G/22110/24
*/

#include<stdio.h>
 int main () {
	char customername[50];
	int customerid;
	int unitconsumed;
	float chargesperunit;
	float Bill;
	float totalamount;
	float surcharge; 
	surcharge = 0;
	
	printf("enter customer name: ");
	scanf("%s", &customername);
	
	printf("Enter customer id: ");
	scanf("%d", &customerid);
	
	printf("Enter your units: ");
	scanf("%f", &unitconsumed);
	
	if(unitconsumed <=199) 
	{
		chargesperunit = 1.20;
	}
	else if (unitconsumed >=200 && unitconsumed <=400){
		chargesperunit = 1.50;
	}
	else if (unitconsumed >=400 && unitconsumed <=600)
	{
		chargesperunit = 1.80;
	}
	else {
		chargesperunit = 2.00;
	}
	
	Bill = unitconsumed * chargesperunit;
	
	if (Bill > 400)
	{
		surcharge = Bill * 0.15;
	}

	printf("customer name: %s\n", customername);
	printf("customer id : %d\n", customerid);
	printf("Bill is : %.2f\n", Bill);
	printf("surcharges are : %.2f\n", surcharge);	 
	 

    return 0;	 
 }