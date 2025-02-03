#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Book {
	char title[20];
	char writer[20];
	int total_pages;
	float cost;
};

int main()
{
	struct Book collection[100];
	char writer_name[30], title_name[30];
	int i, choice, book_count;
	i = choice = book_count = 0;

	while (choice != 5) {

		printf("\n\n******WELCOME TO DIGITAL LIBRARY*******\n");
		printf("\n 1. Add book details\n 2. Display book details\n");
		printf("3. List all books by a given writer\n");
		printf("\n 4. Show the total number of books in the library\n");
		printf("5. Exit");

		printf("\n Enter your choice: ");
		scanf("%d", &choice);

		switch (choice) 
		{
		case 1:
			printf("Enter book title = ");
			scanf("%s", collection[i].title);

			printf("Enter writer name = ");
			scanf("%s", collection[i].writer);

			printf("Enter total pages = ");
			scanf("%d", &collection[i].total_pages);

			printf("Enter cost = ");
			scanf("%f", &collection[i].cost);
			book_count++;

			break;

		case 2:
			printf("You have entered the following details:\n");
			for (i = 0; i < book_count; i++) 
			{
				printf("Title = %s", collection[i].title);
				printf("\t Writer = %s", collection[i].writer);
				printf("\t Pages = %d", collection[i].total_pages);
				printf("\t Cost = %.2f", collection[i].cost);
			}
			break;

		case 3:
			printf("Enter writer name: ");
			scanf("%s", writer_name);
			for (i = 0; i < book_count; i++) 
			{
				if (strcmp(writer_name, collection[i].writer) == 0)
					printf("%s %s %d %.2f", collection[i].title, collection[i].writer, collection[i].total_pages, collection[i].cost);
			}
			break;

		case 4:
			printf("\n Total number of books in library: %d", book_count);
			break;
		case 5:
			exit(0);
		}
	}
	return 0;
}
