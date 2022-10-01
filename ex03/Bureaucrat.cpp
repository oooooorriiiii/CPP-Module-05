//
// Created by yuumo on 2022/08/03.
//

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("no"), _grade(150) {
//	std::cout << "<Default constructor is called in Bureaucrat>" << std::endl;
}

// Bureaucrat::Bureaucrat(std::string name, unsigned int grade) : _name(std::move(name)) C++11
Bureaucrat::Bureaucrat(const std::string &name, unsigned int grade) : _name(
		name), _grade(grade) {
//	std::cout << "<Constructor is called in Bureaucrat>" << std::endl;
	if (grade > 150)
	{
		throw GradeTooLowException();
	} else if (grade < 1)
	{
		throw GradeTooHighException();
	}
}

Bureaucrat::Bureaucrat(const Bureaucrat &bureaucrat) : _grade() {
//	std::cout << "<Copy constructor is called in Bureaucrat>" << std::endl;
	*this = bureaucrat;
}

Bureaucrat::~Bureaucrat() {
//	std::cout << "<Destructor is called in Bureaucrat>" << std::endl;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &bureaucrat) {
	const_cast<std::string &>(_name) = bureaucrat.getName();
	_grade = bureaucrat.getGrade();
	return *this;
}


const std::string &Bureaucrat::getName() const {
	return _name;
}

unsigned int Bureaucrat::getGrade() const {
	return _grade;
}

void Bureaucrat::incrementGrade() {
	if (_grade - 1 < 1)
		throw GradeTooHighException();
	_grade--;
}

void Bureaucrat::decrementGrade() {
	if (_grade + 1 > 150)
		throw GradeTooLowException();
	_grade++;
}

void Bureaucrat::signForm(Form &form) const {
	try
	{
		form.beSighed(*this);
		std::cout << _name << " signed " << form.getName() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << _name << " couldn't sign " << form.getName() << " because "
				  << e.what() << "." << std::endl;
	}
}

void Bureaucrat::executeForm(const Form &form) const {
	form.execute(*this);
}


/*
 * GradeTooHighException
 */

Bureaucrat::GradeTooHighException::GradeTooHighException() : _errorMessage(
		"Grade is too high") {
//	std::cout
//			<< "<Default constructor is called in GradeTooHighException in Bureaucrat>"
//			<< std::endl;
}

Bureaucrat::GradeTooHighException::~GradeTooHighException() throw() {
//	std::cout << "<Destructor is called in GradeTooHighException in Bureaucrat>"
//			  << std::endl;
}

const char *Bureaucrat::GradeTooHighException::what() const throw() {
	return _errorMessage.c_str();
}


/*
 * GradeTooHighException
 */

Bureaucrat::GradeTooLowException::GradeTooLowException() : _errorMessage(
		"Grade is too low") {
//	std::cout
//			<< "<Default constructor is called in GradeTooLowException in Bureaucrat>"
//			<< std::endl;
}

Bureaucrat::GradeTooLowException::~GradeTooLowException() throw() {
//	std::cout << "<Destructor is called in GradeTooLowException in Bureaucrat>"
//			  << std::endl;
}

const char *Bureaucrat::GradeTooLowException::what() const throw() {
	return _errorMessage.c_str();
}


/*
 * NotSignedException
 */

Bureaucrat::NotSignedException::NotSignedException() : _errorMessage(
		"Form is not signed") {
//	std::cout
//			<< "<Default constructor is called in NotSignedException in Bureaucrat>"
//			<< std::endl;
}

Bureaucrat::NotSignedException::~NotSignedException() throw() {
//	std::cout << "<Destructor is called in NotSignedException in Bureaucrat>"
//			  << std::endl;
}

const char *Bureaucrat::NotSignedException::what() const throw() {
	return _errorMessage.c_str();
}


std::ostream &operator<<(std::ostream &ostream, const Bureaucrat &bureaucrat) {
	return ostream << bureaucrat.getName() << ", bureaucrat grade ["
				   << bureaucrat.getGrade() << "]." << std::endl;
}
