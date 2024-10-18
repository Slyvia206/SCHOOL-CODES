/* SLYVIA NJERI MURIITHI 
    CT102/G/22110/24
    */
#include<stdio.h>
int main(){
	int p;
	float r;
	int n;
	int t;
    double fa;
    
	printf("Enter principal: ");
    	scanf("%d" ,&p);
	
	printf("Enter rate: ");
        scanf("%f" ,&r);
    
	printf("Enter n: ");
	     scanf("%d" ,&n); 
	 
	 printf("Enter time: ");
	      scanf("%d" ,t);
	      
	 r = r / 100;
	 fa = p *pow((1 + r/n), n * t);
	 
	 printf("FINAL AMOUNT %lf\n", fa); 
	 return 0;
}