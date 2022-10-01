//
// Created by yuumo on 2022/08/06.
//

#ifndef EX02_ROBOTOMYREQUESTFORM_HPP
#define EX02_ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"

class RobotomyRequestForm : public Form {
 public:
  RobotomyRequestForm();

  RobotomyRequestForm(const std::string &target);

  RobotomyRequestForm(const RobotomyRequestForm &rrf);

  RobotomyRequestForm &operator=(const RobotomyRequestForm &rrf);

  virtual ~RobotomyRequestForm();

  void
  execute(Bureaucrat const &executor) const throw(Form::GradeTooLowException, Form::GradeTooHighException, Form::NotSignedException);

  static const int kGradeRequiredToSign = 72;
  static const int kGradeRequiredToExecute = 45;

 private:
  std::string _target;
};

#endif //EX02_ROBOTOMYREQUESTFORM_HPP
