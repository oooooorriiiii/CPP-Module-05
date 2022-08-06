//
// Created by yuumo on 2022/08/06.
//

#include <cstdlib>
#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() {
	std::cout << "<Default constructor is called in RobotomyRequestForm>"
			  << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string &target) : Form(
		target + "_form", kGradeRequiredToSign, kGradeRequiredToExecute),
																	  _target(target) {
	std::cout << "<Constructor is called in RobotomyRequestForm>" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &rrf) : Form(
		rrf) {
	std::cout << "<Copy constructor is called in RobotomyRequestForm>"
			  << std::endl;
	*this = rrf;
}

RobotomyRequestForm &
RobotomyRequestForm::operator=(const RobotomyRequestForm &rrf) {
	Form::operator=(rrf);
	_target = rrf._target;
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm() {
	std::cout << "<Destructor is called in RobotomyRequestForm>" << std::endl;
}

/*
 * Member functions
 */

/**
 * Makes some drilling noises. Then, informs that <target> has been robotomized successfully 50% of the time. Otherwise, informs that the robotomy failed.
 * @param executor
 */
void RobotomyRequestForm::execute(
		const Bureaucrat &executor) const throw(Form::GradeTooLowException, Form::GradeTooHighException, Form::NotSignedException) {

	Form::execute(executor);

	std::cout << "EXECUTE!!!" << std::endl;

	std::cout << "Bzzzzz" << std::endl;

	double probability = 0.5;
	srand((unsigned) time(NULL));
	if ((double) rand() / RAND_MAX < probability)
	{
		std::cout << "Success" << std::endl;
	} else
	{
		std::cout << "Fail" << std::endl;
	}
}

