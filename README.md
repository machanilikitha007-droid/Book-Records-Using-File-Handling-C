# Book Records Using File Handling in C

## Project Description

A simple C program that demonstrates file handling by storing book information in a text file. The program accepts the book ID, title, author name, and price and saves the details in `books.txt`.

## Features

- Enter book details
- Store book ID and title
- Store author name and price
- Create the file automatically
- Append multiple book records
- Write data using `fprintf()`
- Close the file using `fclose()`

## Technologies Used

- C
- File Handling
- Structures
- `FILE`
- `fopen()`
- `fprintf()`
- `fclose()`

## How to Run

1. Create a file named `book_records_file.c`.
2. Compile the program using a C compiler.
3. Run the compiled program.
4. The `books.txt` file will be created in the project folder.

Example using GCC:

```bash
gcc book_records_file.c -o book_records_file
./book_records_file

===== Book Records Using File Handling =====
Enter Book ID: 101
Enter Book Title: C Programming
Enter Author Name: Dennis Ritchie
Enter Book Price: 450

Book record saved successfully!
Data is stored in books.txt

Book ID: 101
Title: C Programming
Author: Dennis Ritchie
Price: 450.00
-------------------------

Author

M.Likitha
