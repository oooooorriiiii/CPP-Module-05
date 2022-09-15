//
// Created by yuumo on 2022/08/03.
//

#ifndef EX01_FORM_HPP
#define EX01_FORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
public:
	Form();
	Form(std::string& name, unsigned int signGrade, unsigned int executeGrade);
	Form(const Form& form);

	Form(const std::string &name, unsigned int signGrade,
		 unsigned int executeGrade);

	Form& operator=(const Form& form);
	virtual ~Form();

	const std::string	&getName() const;
	bool				getSigned() const;
	unsigned int		getSignGrade() const;
	unsigned int		getExecuteGrade() const;

	void beSighed(const Bureaucrat& bureaucrat);

class GradeTooHighException : public std::exception {
public:
	GradeTooHighException();
	virtual ~GradeTooHighException() throw();
	virtual const char* what() const throw();

private:
	std::string _errorMessage;
};

class GradeTooLowException : public std::exception {
public:
	GradeTooLowException();
	virtual ~GradeTooLowException() throw();
	virtual const char* what() const throw();
private:
	std::string _errorMessage;
};

private:
	const std::string	_name;
	bool				_signed;
	const unsigned int	_signGrade;
	const unsigned int	_executeGrade;
};

std::ostream& operator<<(std::ostream& ostream, const Form& form);

#endif //EX01_FORM_HPP
