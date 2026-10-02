#include <stdio.h>

struct Book
{
    int id;
    char title[50];
    char author[50];
    float price;
};

int main()
{
    struct Book book;
    FILE *file;

    printf("===== Book Records Using File Handling =====\n");

    file = fopen("books.txt", "a");

    if (file == NULL)
    {
        printf("Unable to open file!\n");
        return 1;
    }

    printf("Enter Book ID: ");
    scanf("%d", &book.id);

    printf("Enter Book Title: ");
    scanf(" %49[^\n]", book.title);

    printf("Enter Author Name: ");
    scanf(" %49[^\n]", book.author);

    printf("Enter Book Price: ");
    scanf("%f", &book.price);

    fprintf(file, "Book ID: %d\n", book.id);
    fprintf(file, "Title: %s\n", book.title);
    fprintf(file, "Author: %s\n", book.author);
    fprintf(file, "Price: %.2f\n", book.price);
    fprintf(file, "-------------------------\n");

    fclose(file);

    printf("\nBook record saved successfully!\n");
    printf("Data is stored in books.txt\n");

    return 0;
}
