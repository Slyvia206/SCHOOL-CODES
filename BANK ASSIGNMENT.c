#include<stdio.h>
int main(){
	int age;
	float salary;
	
	printf("Enter age : ");
	scanf("%d", &age);
     	
	if (age <=0 ) {printf("invalid\n");
		return 1;
    }
		
	printf("Enter salary : ");
	scanf("%f", &salary);
	
	if (salary <=0) {
	    printf("error processing\n");
		return 1;
     }

	if (age >= 21 && salary >=21000) {
		printf("Congratulations you qualify for a loan.\n");

	 } else {
	   printf("Unfortunately,we are unable to offer you a loan at this time.\n");
	}
 if(age < 21)  {
	 printf("unable to process command\n");
 }
 if(salary < 21000) {
     printf("unable to process request\n");
   return 1;
 }

	 return 0;
 }
	
	 
   
	
	 
	
	
	
	
