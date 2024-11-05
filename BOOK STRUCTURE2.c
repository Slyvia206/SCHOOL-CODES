/*SLYVIA NJERI MURIITHI
CT102/G/22110/24
*/
#include<stdio.h> //scanf(),printf()
#include<string.h> //strcpy()
struct Book {
	char title[30];
	char author[30];
	int publicationyear;
	char ISBN[13];
	float price;
	}; 
int main(){
	struct Book Book1;
	
	strcpy(Book1.title, "Intoduction to C programming");
	strcpy(Book1.author ,"John Smith");
	Book1.publicationyear = 2022;
	strcpy(Book1.ISBN,"9780131103627");
	Book1.price = 49.99;
	
	printf("\nTitle : %s", Book1.title);
	printf("\nauthor : %s",Book1.author);
	printf("\npublicationyear : %d", Book1.publicationyear);
	printf("\nISBN : %s", Book1.ISBN);
	printf("\nprice : %f", Book1.price);
	
	return 0;
}