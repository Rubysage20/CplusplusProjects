#include "Member.h"
#include <iostream>

Member::Member(std::string _name, std::string _contact) {
    name = _name;
    contact = _contact;
}

void Member::displayMemberDetails() {
    std::cout << "Name: " << name << std::endl;
    std::cout << "Contact: " << contact << std::endl;
}
