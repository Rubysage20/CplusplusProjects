#ifndef BOOK_H
#define BOOK_H

#include <string>

class Book {
private:
    std::string title;
    std::string author;
    std::string isbn;

public:
    Book(std::string _title, std::string _author, std::string _isbn);
    void displayBookDetails();
};

#endif