/* Arthor : SLYVIA NJERI MURIITHI
   Reg no : CT102/G/22110/24
   */

//c structures
#include<stdio.h>//scanf(),printf()
#include<string.h> // strcpy()

   struct student{
   	char name[25];
	   char regno[15];
	   char email[25];
	   int phone;
	   float marks;
   } student1, student2;
   int main(){
	  // struct student student1,student2;
	   strcpy(student1.name, "Slyvia");
	   strcpy(student1.email, "slyvia@gmail.com");
	   student1.phone = 071264;
	   strcpy(student1.regno, "CT100-12-123");
	   student1.marks = 80.5;
	   
	   printf("name:%s \n" , student1.name);
	   printf("email %s \n",student1.email);
	   printf("phone %d\n", student1.phone);
	   printf("marks %f \n",student1.marks);
	   printf("regno: %s \n",student1.regno);
	   return 0;
   }
   
