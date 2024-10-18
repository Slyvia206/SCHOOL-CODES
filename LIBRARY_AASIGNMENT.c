/* Arthor : SLYVIA NJERI MURIITHI
   Reg no : CT102/G/22110/24
   */
#include<stdio.h>
   int main () {
       int bookID;
       int dueDate;
       int returnDate;
       int daysOverdue;
       int fineRate;
       int fineAmount;
       
       printf("Book ID :");
       scanf("%d", &bookID);
       
       printf("Due Date: ");
       scanf("%d", &dueDate);
       
       printf("Return Date: ");
       scanf("%d", &returnDate);
       
       if(returnDate > dueDate) {
		   
		   daysOverdue = returnDate - dueDate;
	   } else {
           daysOverdue = 0;
	   }
	     if(daysOverdue > 0 && daysOverdue <= 7) {
		   fineRate = 20;
		   
	   } else if(daysOverdue >= 8 && daysOverdue <= 14){
	       fineRate = 50;
	       
	   } else if(daysOverdue >=15) {
		   fineRate = 100;
	   } 
	     else
		  {
		   fineRate = 0;
	   }
	   fineAmount = daysOverdue * fineRate;
	   
	   printf("Fine Amount = %d\n", fineAmount);
	   
	   return 0;
   } 
	   
   