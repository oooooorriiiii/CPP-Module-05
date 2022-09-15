//
// Created by yuumo on 2022/08/02.
//

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main() {

	std::cout << "TEST: Shrubbery****************" << std::endl;

	Bureaucrat	boss01("nop", 1);
	Intern		intern01;

	Form*	form01;
	try
	{
		form01 = intern01.makeForm("shrubbery creation", "Bender");
		std::cout << *form01;

		boss01.signForm(*form01);
		boss01.executeForm(*form01);
	}
	catch (std::exception &e)
	{
		std::cerr << "Error: " << e.what() << e.what() << std::endl;
	}
	delete form01;


	std::cout << "TEST: Robotomy****************" << std::endl;

	Bureaucrat	boss02("Kameyama", 1);
	Intern		intern02;

	Form*	form02;
	try
	{
		form02 = intern02.makeForm("robotomy request", "Bender");
		std::cout << *form02;

		boss02.signForm(*form02);
		boss02.executeForm(*form02);
	}
	catch (std::exception &e)
	{
		std::cerr << "Error: " << e.what() << e.what() << std::endl;
	}
	delete form02;


	std::cout << "TEST: Presidential****************" << std::endl;

	Bureaucrat	boss03("Bunjiro", 1);
	Intern		intern03;

	Form*	form03;
	try
	{
		form03 = intern03.makeForm("presidential pardon", "Bender");
		std::cout << *form03;

		boss03.signForm(*form03);
		boss03.executeForm(*form03);
	}
	catch (std::exception &e)
	{
		std::cerr << "Error: " << e.what() << e.what() << std::endl;
	}
	delete form03;


	std::cout << "TEST: ERROR****************" << std::endl;

	Bureaucrat	boss04("ymori", 1);
	Intern		intern04;

	Form*	form04;
	try
	{
		form04 = intern04.makeForm("zzzzzzzzzz...", "Bender");
		std::cout << *form04;

		boss04.signForm(*form04);
		boss04.executeForm(*form04);
	}
	catch (std::exception &e)
	{
		std::cerr << "Error: " << e.what() << e.what() << std::endl;
	}
	delete form04;

	return 0;
}