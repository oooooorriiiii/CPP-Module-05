//
// Created by yuumo on 2022/08/05.
//

#ifndef EX02_SHRUBBERYCREATIONFORM_HPP
#define EX02_SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"

class ShrubberyCreationForm : public Form {
 public:
  ShrubberyCreationForm();

  ShrubberyCreationForm(const std::string &target);

  ShrubberyCreationForm(const ShrubberyCreationForm &scf);

  ShrubberyCreationForm &operator=(const ShrubberyCreationForm &scf);

  virtual ~ShrubberyCreationForm();

  void
  execute(Bureaucrat const &executor) const throw(class Form::GradeTooLowException, class Form::GradeTooHighException, class Form::NotSignedException);

  static const int kGradeRequiredToSign = 145;
  static const int kGradeRequiredToExecute = 137;

  class OpenFileErrorException : public std::exception {
   public:
    OpenFileErrorException();
    virtual ~OpenFileErrorException() throw();
    virtual const char *what() const throw();

   private:
    std::string _errorMessage;
  };

 private:
  std::string _target;
};

#endif //EX02_SHRUBBERYCREATIONFORM_HPP
