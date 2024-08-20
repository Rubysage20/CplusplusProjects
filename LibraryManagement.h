#ifndef LIBRARYMANAGEMENT_H
#define LIBRARYMANAGEMENT_H

#include "Book.h"
#include "Member.h"
#include "Transaction.h"
#include <vector>

class LibraryManagement {
private:
	std::vector<Book> books;
	std::vector<Member> members;
	std::vector<Transaction> transactions;

public:
	// Book Management
	void addBook(const Book& book);
	void updateBookInfo(const std::string& ISBN, const std::string& author);
	void displayAvailableBooks() const;

	// Member Registration
	void registerMember(const Member& member);
	void updateMemberInfo(int memberID, const std::string& contactInfo);
	void displayRegisteredMembers() const;

	// Borrowing and returning functions
	void borrowBook(const Book& book, const Member& member, const std::string& dueDate);
	void returnBook(const Book& book, const Member& member);
	void displayBorrowedBooks() const;
	void displayOverdueBooks() const;

	//Search and Reporting
	void searchBooksByTitle(const std::string& title) const;
	void searchBooksByAuthor(const std::string& author) const;
	void searchBooksByISBN(const std::string& ISBN) const;
	void generateReport() const;

};
#endif
