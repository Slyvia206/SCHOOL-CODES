/*SLYVIA NJERI MURIITHI
CT102/G/22110/24
*/
#include<stdio.h> //scanf(),printf()
#include <string.h> //strcpy()
struct Book {
	char title[30];
	char author[30];
	int publicationyear;
	char ISBN[13];
	float price;
	}; 
int main(){
	struct Book Book1, Book2;
	
	printf("Enter book title ");
	scanf("%s",Book1.title);
	
	printf("Enter Book author ");
	scanf("%s",Book1.author);
	
	printf("Enter Book publication year ");
	scanf("%d",&Book1.publicationyear);
	
	printf("Enter Book ISBN ");
	scanf("%s",Book1.ISBN);
	
	printf("Enter Book price ");
	scanf("%f",&Book1.price);
	
	printf("title: %s\n", Book1.title);
	printf("author: %s\n", Book1.author);
	printf("publicationyear: %d\n", Book1.publicationyear);
	printf("ISBN: %s\n", Book1.ISBN);
	printf("price: %f\n", Book1.price);
	
	return 0;	
}
 