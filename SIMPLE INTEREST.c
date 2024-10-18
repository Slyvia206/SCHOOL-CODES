/* Arthor : Slyvia Njeri Muriithi
   Reg No : CT102/G/22110
*/

#include<stdio.h>
int main (){
	float Pr, T, R, SI
	
	printf("Enter Pr: ");
	scanf("%f", &Pr);
	
	printf("Enter T: ");
	scanf("%f", &T);
	

	printf("Enter R: ");
	scanf("%f", &R);
	

	SI = ((Pr*R*T)/100);
	
printf("Simple Intrest: %f" ,SI);

return 0;
}