#include "Transaction.h"
#include <iostream>

Transaction::Transaction(Book* _book, Member* _member, std::string _dueDate) {
    book = _book;
    member = _member;
    dueDate = _dueDate;
}

void Transaction::displayTransactionDetails() {
    std::cout << "Book Details:" << std::endl;
    book->displayBookDetails();
    std::cout << "Member Details:" << std::endl;
    member->displayMemberDetails();
    std::cout << "Due Date: " << dueDate << std::endl;
}