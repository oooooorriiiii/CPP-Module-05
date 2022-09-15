//
// Created by yuumo on 2022/08/06.
//

#ifndef EX02_PRESIDENTIALPARDONFORM_HPP
#define EX02_PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

class PresidentialPardonForm : public Form {
public:
	PresidentialPardonForm();
	PresidentialPardonForm(const std::string& target);
	PresidentialPardonForm(const PresidentialPardonForm& ppf);
	PresidentialPardonForm& operator=(const PresidentialPardonForm& ppf);
	~PresidentialPardonForm();


	/*
	 *
	 */

	static const int kGradeRequiredToSign = 25;
	static const int kGradeRequiredToExecute = 5;

	/*
	 * Member functions
	 */

	void execute(const Bureaucrat &executor) const throw(Form::GradeTooLowException, Form::GradeTooHighException, Form::NotSignedException) ;

private:
	std::string _target;
};


#endif //EX02_PRESIDENTIALPARDONFORM_HPP
