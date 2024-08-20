#include <iostream>
#include <vector>
#include <string>
#include "Book.h"
#include "Member.h"
#include "Transaction.h"

using namespace std;

class Library {
private:
    vector<Book*> books;
    vector<Member*> members;
    vector<Transaction*> transactions;

public:
    void addBook(string title, string author, string isbn);
    void displayAllBooks();
    void registerMember(string name, string contact);
    void displayAllMembers();
    void borrowBook(int bookIndex, int memberIndex, string dueDate);
    void displayAllTransactions();
};

void Library::addBook(string title, string author, string isbn) {
    Book* newBook = new Book(title, author, isbn);
    books.push_back(newBook);
}

void Library::displayAllBooks() {
    for (Book* book : books) {
        book->displayBookDetails();
        cout << endl;
    }
}

void Library::registerMember(string name, string contact) {
    Member* newMember = new Member(name, contact);
    members.push_back(newMember);
}

void Library::displayAllMembers() {
    for (Member* member : members) {
        member->displayMemberDetails();
        cout << endl;
    }
}

void Library::borrowBook(int bookIndex, int memberIndex, string dueDate) {
    if (bookIndex >= 0 && memberIndex >= 0 && bookIndex < books.size() && memberIndex < members.size()) {
        Transaction* newTransaction = new Transaction(books[bookIndex], members[memberIndex], dueDate);
        transactions.push_back(newTransaction);
        cout << "Book borrowed successfully!" << endl;
    }
    else {
        cout << "Invalid book index or member index." << endl;
    }
}

void Library::displayAllTransactions() {
    for (Transaction* transaction : transactions) {
        transaction->displayTransactionDetails();
        cout << endl;
    }
}

int main() {
    Library library;

    // Adding books to the library
    library.addBook("Book 1", "Author 1", "ISBN 1");
    library.addBook("Book 2", "Author 2", "ISBN 2");
    library.addBook("Book 3", "Author 3", "ISBN 3");

    // Displaying all books
    cout << "All Books:" << endl;
    library.displayAllBooks();
    cout << endl;

    // Registering members
    library.registerMember("Member 1", "Contact 1");
    library.registerMember("Member 2", "Contact 2");

    // Displaying all members
    cout << "All Members:" << endl;
    library.displayAllMembers();
    cout << endl;

    // Borrowing a book
    library.borrowBook(0, 0, "2023-01-01");

    // Displaying all transactions
    cout << "All Transactions:" << endl;
    library.displayAllTransactions();

    return 0;
}
