//
// Created by yuumo on 2022/08/06.
//

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() {
	std::cout << "<Default constructor is called in PresidentialPardonForm>"
			  << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string &target) : Form(
		target + "_form", kGradeRequiredToSign, kGradeRequiredToExecute),
																	  _target(target) {
	std::cout << "<Constructor is called in PresidentialPardonForm>" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &ppf) : Form(
		ppf) {
	std::cout << "<Copy constructor is called in PresidentialPardonForm>"
			  << std::endl;
	*this = ppf;
}

PresidentialPardonForm &
PresidentialPardonForm::operator=(const PresidentialPardonForm &ppf) {
	Form::operator=(ppf);
	_target = ppf._target;
	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm() {
	std::cout << "<Destructor is called in PresidentialPardonForm>" << std::endl;
}


/*
 * Member functions
 */

/**
 * Informs that <target> has been pardoned by Zaphod Beeblebrox.
 * @param executor
 */
void	PresidentialPardonForm::execute(
		const Bureaucrat &executor) const throw(class Form::GradeTooLowException, class Form::GradeTooHighException, class Form::NotSignedException) {

	Form::execute(executor);

	std::cout << _target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}


