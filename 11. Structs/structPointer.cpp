#include <iostream>
#include <cstring>

struct Book {
  char title[50];
  char author[50];
  char subject[50];
  int book_id;
};

void printBook(struct Book *book);

int main() {
  struct Book book1;
  strcpy(book1.title, "Learn JavaScript");
  strcpy(book1.author, "Zonayed Ahmed");
  strcpy(book1.subject, "Programming");
  book1.book_id = 10;
  printBook(&book1);
  return 0;
}

void printBook(struct Book *book) {
  std::cout << "Book ID: " << book->book_id << '\n';
  std::cout << "Title: " << book->title << '\n';
  std::cout << "Author: " << book->author << '\n';
  std::cout << "Subject: " << book->subject << '\n';
}
