//
// Created by yuumo on 2022/08/03.
//

#ifndef EX02_FORM_HPP
#define EX02_FORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
 public:
  Form();

  Form(const std::string &name, unsigned int signGrade,
       unsigned int executeGrade);

  Form(const Form &form);

  Form &operator=(const Form &form);

  virtual ~Form();

  /*
   * Getters
   */

  const std::string &getName() const;

  bool getSigned() const;

  unsigned int getSignGrade() const;

  unsigned int getExecuteGrade() const;

  /*
   * Member functions
   */

  void beSighed(const Bureaucrat &bureaucrat);

  virtual void
  execute(Bureaucrat const &executor) const throw(Form::GradeTooLowException, Form::GradeTooHighException, Form::NotSignedException);

  /*
   *
   */

  class GradeTooHighException : public std::exception {
   public:
    GradeTooHighException();

    virtual ~GradeTooHighException() throw();

    virtual const char *what() const throw();

   private:
    std::string _errorMessage;
  };

  class GradeTooLowException : public std::exception {
   public:
    GradeTooLowException();

    virtual ~GradeTooLowException() throw();

    virtual const char *what() const throw();

   private:
    std::string _errorMessage;
  };

  /*
   * Other exception
   */

  class NotSignedException : public std::exception {
   public:
    NotSignedException();

    virtual ~NotSignedException() throw();

    virtual const char *what() const throw();

   private:
    std::string _errorMessage;
  };

 private:
  const std::string _name;
  bool _signed;
  const unsigned int _signGrade;
  const unsigned int _executeGrade;
};

std::ostream &operator<<(std::ostream &ostream, const Form &form);

#endif //EX02_FORM_HPP
