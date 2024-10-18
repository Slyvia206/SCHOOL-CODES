/* 
Arthor : SLYVIA NJERI MURIITHI
Registration number : CT102/G/24472/24

*/
#include <stdio.h>

float TotalAmount(int unitconsumed, float chargesperunit) {
    return unitconsumed * chargesperunit;
}

float Bill(float totalAmount, float surcharge) {
    return totalAmount + surcharge; 
}

int main() {
    char customername[60];
    int customerid;
    int unitconsumed; 
    float chargesperunit;
    float bill; 
    float totalAmount; 
    float surcharge = 0; 
    
    printf("Enter customer name: ");
    scanf("%s", customername);  
    
    printf("Enter customer id: ");
    scanf("%d", &customerid);
    
    printf("Enter your units: ");
    scanf("%d", &unitconsumed);  
    
   
    if (unitconsumed < 200) {  
        chargesperunit = 1.20;
    } else if (unitconsumed < 400) {  
        chargesperunit = 1.50;
    } else if (unitconsumed < 600) {  
        chargesperunit = 1.80;
    } else {
        chargesperunit = 2.00;
    }

    totalAmount = TotalAmount(unitconsumed, chargesperunit);

 
    if (totalAmount > 400) {
        surcharge = totalAmount * 0.15; 
    }
    

    bill = Bill(totalAmount, surcharge);

 
    printf("Customer name: %s\n", customername);
    printf("Customer ID: %d\n", customerid);
    printf("Total Amount: %.2f\n", totalAmount);  
    printf("Surcharges: %.2f\n", surcharge);	 
    printf("Bill: %.2f\n", bill);  

    return 0;	 
}