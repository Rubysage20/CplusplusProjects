#include "Book.h"
#include <iostream>

Book::Book(std::string _title, std::string _author, std::string _isbn) {
    title = _title;
    author = _author;
    isbn = _isbn;
}

void Book::displayBookDetails() {
    std::cout << "Title: " << title << std::endl;
    std::cout << "Author: " << author << std::endl;
    std::cout << "ISBN: " << isbn << std::endl;
}
