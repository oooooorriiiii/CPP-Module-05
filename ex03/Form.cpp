//
// Created by yuumo on 2022/08/03.
//

#include "Form.hpp"

Form::Form() : _name("no"), _signed(false), _signGrade(1), _executeGrade(1) {
//	std::cout << "<Default constructor is called in Form>" << std::endl;
}


Form::Form(const std::string &name, unsigned int signGrade,
		   unsigned int executeGrade) : _name(name), _signed(false),
										_signGrade(signGrade),
										_executeGrade(executeGrade) {
//	std::cout << "<Constructor is called in Form>" << std::endl;
	if (signGrade > 150 || executeGrade > 150)
	{
		throw GradeTooLowException();
	} else if (signGrade < 1 || executeGrade < 1)
	{
		throw GradeTooHighException();
	}
}

Form::Form(const Form &form) : _signed(), _signGrade(form.getSignGrade()),
							   _executeGrade(form.getExecuteGrade()) {
//	std::cout << "<Copy constructor is called in Form>" << std::endl;
	*this = form;
}

Form::~Form() {
//	std::cout << "<Destructor is called in Form>" << std::endl;
}

Form &Form::operator=(const Form &form) {
	const_cast<std::string &>(_name) = form.getName();
	_signed = form.getSigned();
	const_cast<unsigned int &>(_signGrade) = form.getSignGrade();
	const_cast<unsigned int &>(_executeGrade) = form.getExecuteGrade();
	return *this;
}


/*
 * Getters
 */
const std::string &Form::getName() const {
	return _name;
}

bool Form::getSigned() const {
	return _signed;
}

unsigned int Form::getSignGrade() const {
	return _signGrade;
}

unsigned int Form::getExecuteGrade() const {
	return _executeGrade;
}


/*
 * Function
 */

void Form::beSighed(const Bureaucrat &bureaucrat) {
	if (bureaucrat.getGrade() > _signGrade)
		throw GradeTooLowException();
	if (_signed)
		std::cout << "This form is already signed" << std::endl;
	_signed = true;
}

void Form::execute(const Bureaucrat &executor) const {
	try
	{
//		Debug
//		std::cout << "required: " << getExecuteGrade() << "   executor:" << executor.getGrade() << std::endl;
		if (!_signed)
			throw NotSignedException();
		if (getExecuteGrade() < executor.getGrade())
			throw GradeTooLowException();
	}
	catch (std::exception &e)
	{
		std::cout << executor.getName() << " can't execute " << getName()
				  << " because " << e.what() << std::endl;
		throw;
	}
}


/*
 * GradeTooHighException
 */

Form::GradeTooHighException::GradeTooHighException() : _errorMessage(
		"Grade is too high") {
//	std::cout
//			<< "<Default constructor is called in GradeTooHighException in Form>"
//			<< std::endl;
}

Form::GradeTooHighException::~GradeTooHighException() throw() {
//	std::cout << "<Destructor is called in GradeTooHighException in Form>"
//			  << std::endl;
}

const char *Form::GradeTooHighException::what() const throw() {
	return _errorMessage.c_str();
}


/*
 * GradeTooLowException
 */

Form::GradeTooLowException::GradeTooLowException() : _errorMessage(
		"Grade is too low") {
//	std::cout << "<Default constructor is called in GradeTooLowException in Form>"
//			  << std::endl;
}

Form::GradeTooLowException::~GradeTooLowException() throw() {
//	std::cout << "<Destructor is called in GradeTooLowException in Form>"
//			  << std::endl;
}

const char *Form::GradeTooLowException::what() const throw() {
	return _errorMessage.c_str();
}


/*
 * NotSignedException
 */

Form::NotSignedException::NotSignedException() : _errorMessage(
		"Form is not signed") {
//	std::cout << "<Default constructor is called in NotSignedException in Form>"
//			  << std::endl;
}

Form::NotSignedException::~NotSignedException() throw() {
	std::cout << "<Destructor is called in NotSignedException in Form>"
			  << std::endl;
}

const char *Form::NotSignedException::what() const throw() {
	return _errorMessage.c_str();
}

/*
 *
 */

std::ostream &operator<<(std::ostream &ostream, const Form &form) {
	return ostream << "Authority to sign application form [" << form.getName()
				   << "] is above grade [" << form.getSignGrade()
				   << "] and authority to execute is above grade ["
				   << form.getExecuteGrade() << "]." << std::endl;
}