//
// Created by yuumo on 2022/08/06.
//

#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern() {
  std::cout << "<Default constructor is called in Intern>" << std::endl;
}

Intern::Intern(const Intern &intern) {
  std::cout << "<Copy constructor is called in Intern>" << std::endl;
  *this = intern;
}

Intern &Intern::operator=(const Intern &intern) {
  (void) intern;
  return *this;
}

Intern::~Intern() {
  std::cout << "<Destructor is called in Intern>" << std::endl;
}

/*
 * Member functions
 */

Form *Intern::makeForm(const std::string &name,
                       const std::string &target) {

  std::string forms[3] =
      {"shrubbery creation", "robotomy request", "presidential pardon"};

  int i;
  for (i = 0; i < 3; i++) {
    if (forms[i] == name)
      break;
  }

  switch (i) {
    case 0: return new ShrubberyCreationForm(target);
    case 1: return new RobotomyRequestForm(target);
    case 2: return new PresidentialPardonForm(target);
    default:
      std::cout
          << "My head is broken... There was no such application item... ERROR"
          << std::endl;
      return NULL; // C++98
  }

}