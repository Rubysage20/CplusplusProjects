#ifndef TRANSACTION_H
#define TRANSACTION_H

#include "Book.h"
#include "Member.h"
#include <string>

class Transaction {
private:
    Book* book;
    Member* member;
    std::string dueDate;

public:
    Transaction(Book* _book, Member* _member, std::string _dueDate);
    void displayTransactionDetails();
};

#endif
