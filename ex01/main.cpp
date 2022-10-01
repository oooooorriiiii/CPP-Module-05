//
// Created by yuumo on 2022/08/02.
//

#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main() {
  {
    std::cout << "TEST 1" << "*******************************************" << std::endl;
    std::cout << "couldn't sign" << std::endl;
    std::cout << "*************************************************" << std::endl;
    try {
      Bureaucrat Alice("Alice", 42);
      Form form("Raise my salary", 24, 24);
      std::cout << Alice; // print Alice information
      std::cout << form; // print form information
      Alice.signForm(form);
    }
    catch (std::exception &e) {
      std::cerr << "Error: " << e.what() << std::endl;
    }
  }
  {
    std::cout << "TEST 2" << "*******************************************" << std::endl;
    std::cout << "could sign" << std::endl;
    std::cout << "*************************************************" << std::endl;
    try {
      Bureaucrat Alice = Bureaucrat("Alice", 42);
      Form form = Form("Remove the minister's wig", 100, 1);
      std::cout << Alice;
      std::cout << form;
      Alice.signForm(form);
    }
    catch (std::exception &e) {
      std::cerr << "Error: " << e.what() << std::endl;
    }
  }
  {
    std::cout << "TEST 3" << "*******************************************" << std::endl;
    std::cout << "could sign (After promotion)" << std::endl;
    std::cout << "*************************************************" << std::endl;
    try {
      Bureaucrat Alice = Bureaucrat("Alice", 42);
      Form form = Form("Install houseplants in the workplace", 40, 40);
      std::cout << Alice;
      std::cout << form;
      Alice.signForm(form); // first try
      Alice.incrementGrade();
      Alice.incrementGrade();
      std::cout << "Wait until " << Alice.getName() << " get promoted..."
                << std::endl;
      std::cout << Alice;
      Alice.signForm(form); // second try
    }
    catch (std::exception &e) {
      std::cerr << "Error: " << e.what() << std::endl;
    }
  }
}