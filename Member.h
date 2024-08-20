#ifndef MEMBER_H
#define MEMBER_H

#include <string>

class Member {
private:
    std::string name;
    std::string contact;

public:
    Member(std::string _name, std::string _contact);
    void displayMemberDetails();
};

#endif