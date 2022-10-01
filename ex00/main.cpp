//
// Created by yuumo on 2022/08/02.
//

#include "Bureaucrat.hpp"

int main() {

  {
    std::cout << "**********" << std::endl;
    std::cout << "TEST 1" << std::endl;
    std::cout << "**********" << std::endl;
    try {
      Bureaucrat caseOne("error case 1", 0);
      std::cout << caseOne;
    }
    catch (std::exception &e) {
      std::cerr << "Error: " << e.what() << std::endl;
    }
  }
  {
    std::cout << "**********" << std::endl;
    std::cout << "TEST 2" << std::endl;
    std::cout << "**********" << std::endl;
    try {
      Bureaucrat caseTwo = Bureaucrat("error case 2", 1000);
      std::cout << caseTwo;
    }
    catch (std::exception &e) {
      std::cerr << "Error: " << e.what() << std::endl;
    }
  }
  {
    std::cout << "**********" << std::endl;
    std::cout << "TEST 3" << std::endl;
    std::cout << "**********" << std::endl;
    try {
      Bureaucrat caseThree = Bureaucrat("normal case 1", 42);
      std::cout << caseThree;
    }
    catch (std::exception &e) {
      std::cerr << "Error: " << e.what() << std::endl;
    }
  }
  {
    std::cout << "**********" << std::endl;
    std::cout << "TEST 4" << std::endl;
    std::cout << "**********" << std::endl;
    try {
      Bureaucrat caseFour = Bureaucrat("increment case", 2);
      std::cout << caseFour;
      caseFour.incrementGrade();
      std::cout << caseFour;
      caseFour.incrementGrade();
    }
    catch (std::exception &e) {
      std::cerr << "Error: " << e.what() << std::endl;
    }
  }
  {
    std::cout << "**********" << std::endl;
    std::cout << "TEST 5" << std::endl;
    std::cout << "**********" << std::endl;
    try {
      Bureaucrat caseFive = Bureaucrat("decrement case", 149);
      std::cout << caseFive;
      caseFive.decrementGrade();
      std::cout << caseFive;
      caseFive.decrementGrade();
    }
    catch (std::exception &e) {
      std::cerr << "Error: " << e.what() << std::endl;
    }
  }
}