//
// Created by yuumo on 2022/08/02.
//

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main() {

  std::cout << "TEST 1" << "*******************************************"
            << std::endl;
  try {
    Bureaucrat
        bureaucrat1 = Bureaucrat("ShrubberyCreationForm CASE 1 officer", 149);
    ShrubberyCreationForm form1 = ShrubberyCreationForm("Tree1");
    std::cout << "**INFORMATION**" << std::endl;
    std::cout << bureaucrat1;
    std::cout << form1;
    std::cout << "**SIGN**" << std::endl;
    bureaucrat1.signForm(form1);
    std::cout << "**EXECUTE**" << std::endl;
//		form1.execute(bureaucrat1);
    bureaucrat1.executeForm(form1);
  }
  catch (std::exception &e) {
    std::cerr << "Error: " << e.what() << std::endl;
  }

  std::cout << "TEST 2" << "*******************************************"
            << std::endl;
  try {
    Bureaucrat bureaucrat2 = Bureaucrat("Shurubbery CASE 2 officer", 140);
    ShrubberyCreationForm form2 = ShrubberyCreationForm("Tree2");
    std::cout << "**INFORMATION**" << std::endl;
    std::cout << bureaucrat2;
    std::cout << form2;
    std::cout << "**SIGN**" << std::endl;
    bureaucrat2.signForm(form2);
    std::cout << "**EXECUTE**" << std::endl;
//		form2.execute(bureaucrat2);
    bureaucrat2.executeForm(form2);
  }
  catch (std::exception &e) {
    std::cerr << "Error: " << e.what() << std::endl;
  }

  std::cout << "TEST 3" << "*******************************************"
            << std::endl;
  try {
    Bureaucrat bureaucrat3 = Bureaucrat("Shurubbery CASE 3 officer", 130);
    ShrubberyCreationForm form3 = ShrubberyCreationForm("Tree3");
    std::cout << "**INFORMATION**" << std::endl;
    std::cout << bureaucrat3;
    std::cout << form3;
    std::cout << "**SIGN**" << std::endl;
    bureaucrat3.signForm(form3);
    std::cout << "**EXECUTE**" << std::endl;
//		form3.execute(bureaucrat3);
    bureaucrat3.executeForm(form3);
  }
  catch (std::exception &e) {
    std::cerr << "Error: " << e.what() << std::endl;
  }

  std::cout << "TEST 4" << "*******************************************"
            << std::endl;
  try {
    Bureaucrat caseFour = Bureaucrat("Robotomy CASE 1 officer", 140);
    RobotomyRequestForm formFour = RobotomyRequestForm("Robot1");
    std::cout << "**INFORMATION**" << std::endl;
    std::cout << caseFour;
    std::cout << formFour;
    std::cout << "**SIGN**" << std::endl;
    caseFour.signForm(formFour);
    std::cout << "**EXECUTE**" << std::endl;
//		formFour.execute(caseFour);
    caseFour.executeForm(formFour);
  }
  catch (std::exception &e) {
    std::cerr << "Error: " << e.what() << std::endl;
  }

  std::cout << "TEST 5" << "*******************************************"
            << std::endl;
  try {
    Bureaucrat case5 = Bureaucrat("Robotomy CASE 2 officer", 50);
    RobotomyRequestForm form5 = RobotomyRequestForm("Robot2");
    std::cout << "**INFORMATION**" << std::endl;
    std::cout << case5;
    std::cout << form5;
    std::cout << "**SIGN**" << std::endl;
    case5.signForm(form5);
    std::cout << "**EXECUTE**" << std::endl;
//		form5.execute(case5);
    case5.executeForm(form5);
  }
  catch (std::exception &e) {
    std::cerr << "Error: " << e.what() << std::endl;
  }

  std::cout << "TEST 6" << "*******************************************"
            << std::endl;
  try {
    Bureaucrat case6 = Bureaucrat("Robotomy CASE 2 officer", 40);
    RobotomyRequestForm form6 = RobotomyRequestForm("Robot3");
    std::cout << "**INFORMATION**" << std::endl;
    std::cout << case6;
    std::cout << form6;
    std::cout << "**SIGN**" << std::endl;
    case6.signForm(form6);
    std::cout << "**EXECUTE**" << std::endl;
//		form6.execute(case6);
    case6.executeForm(form6);
  }
  catch (std::exception &e) {
    std::cerr << "Error: " << e.what() << std::endl;
  }

  std::cout << "TEST 7" << "*******************************************"
            << std::endl;
  try {
    Bureaucrat case7 = Bureaucrat("Pardon CASE 1 officer", 30);
    PresidentialPardonForm form7 = PresidentialPardonForm("ymori01");
    std::cout << "**INFORMATION**" << std::endl;
    std::cout << case7;
    std::cout << form7;
    std::cout << "**SIGN**" << std::endl;
    case7.signForm(form7);
    std::cout << "**EXECUTE**" << std::endl;
//		form7.execute(case7);
    case7.executeForm(form7);
  }
  catch (std::exception &e) {
    std::cerr << "Error: " << e.what() << std::endl;
  }

  std::cout << "TEST 8" << "*******************************************"
            << std::endl;
  try {
    Bureaucrat case8 = Bureaucrat("Pardon CASE 2 officer", 10);
    PresidentialPardonForm form8 = PresidentialPardonForm("ymori02");
    std::cout << "**INFORMATION**" << std::endl;
    std::cout << case8;
    std::cout << form8;
    std::cout << "**SIGN**" << std::endl;
    case8.signForm(form8);
    std::cout << "**EXECUTE**" << std::endl;
//		form8.execute(case8);
    case8.executeForm(form8);
  }
  catch (std::exception &e) {
    std::cerr << "Error: " << e.what() << std::endl;
  }

  std::cout << "TEST 9" << "*******************************************"
            << std::endl;
  try {
    Bureaucrat case9 = Bureaucrat("Pardon CASE 3 officer", 1);
    PresidentialPardonForm form9 = PresidentialPardonForm("ymori03");
    std::cout << "**INFORMATION**" << std::endl;
    std::cout << case9;
    std::cout << form9;
    std::cout << "**SIGN**" << std::endl;
    case9.signForm(form9);
    std::cout << "**EXECUTE**" << std::endl;
//		form9.execute(case9);
    case9.executeForm(form9);
  }
  catch (std::exception &e) {
    std::cerr << "Error: " << e.what() << std::endl;
  }
  return 0;
}