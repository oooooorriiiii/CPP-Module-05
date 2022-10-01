//
// Created by yuumo on 2022/08/02.
//

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main() {

  std::cout << "TEST 1" << "*******************************************"
            << std::endl;
  try {
    Bureaucrat caseOne("ERROR CASE 1 officer", 42);
    Form formOne("Raise my salary", 24, 24);
    std::cout << caseOne;
    std::cout << formOne;
    caseOne.signForm(formOne);
  }
  catch (std::exception &e) {
    std::cerr << "Error: " << e.what() << std::endl;
  }

  std::cout << "TEST 2" << "*******************************************"
            << std::endl;
  try {
    Bureaucrat caseTwo = Bureaucrat("NORMAL CASE 1 officer", 42);
    Form formTwo = Form("Remove the minister's wig", 100, 1);
    std::cout << caseTwo;
    std::cout << formTwo;
    caseTwo.signForm(formTwo);
  }
  catch (std::exception &e) {
    std::cerr << "Error: " << e.what() << std::endl;
  }

  std::cout << "TEST 3" << "*******************************************"
            << std::endl;
  try {
    Bureaucrat caseThree = Bureaucrat("NORMAL CASE 2 officer", 42);
    Form formThree = Form("Install houseplants in the workplace", 40, 40);
    std::cout << caseThree;
    std::cout << formThree;
    caseThree.incrementGrade();
    caseThree.incrementGrade();
    std::cout << "Wait until " << caseThree.getName() << " get promoted..."
              << std::endl;
    std::cout << caseThree;
    caseThree.signForm(formThree);
  }
  catch (std::exception &e) {
    std::cerr << "Error: " << e.what() << std::endl;
  }

}