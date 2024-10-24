#include<stdio.h>
#include<string.h>
struct book{
	char title[30];
	char author[30];
	int publication_year;
	char ISBN[13];
	float price;
}book1;

int main()
{
    book1.title;
	book1.author;
	book1.publication_year;
	book1.ISBN;
	book1.price;
	
	
    printf("enter book1.title:");
    scanf("%s", &book1.title);
    
     printf("enter book1.author:");
    scanf("%s", &book1.author);
    
     printf("enter book1.publication_year:");
    scanf("%s", &book1.publication_year);
    
     printf("enter book1.ISBN:");
    scanf("%s", &book1.ISBN);
    
     printf("enter book1.price:");
    scanf("%s", &book1.price);
    
	return 0;
    
	
}


	