//
// Created by yuumo on 2022/08/02.
//

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main() {

	std::cout << "TEST 1" << "*******************************************"
			  << std::endl;
	try
	{
		Bureaucrat caseOne("ShrubberyCreationForm CASE 1 officer", 149);
		ShrubberyCreationForm scf1("Tree1");
		std::cout << caseOne;
		std::cout << scf1;
		caseOne.signForm(scf1);
		scf1.execute(caseOne);
	}
	catch (std::exception &e)
	{
		std::cerr << "Error: " << e.what() << std::endl;
	}

	std::cout << "TEST 2" << "*******************************************"
			  << std::endl;
	try
	{
		Bureaucrat caseTwo = Bureaucrat("Shurubbery CASE 2 officer", 140);
		ShrubberyCreationForm formTwo = ShrubberyCreationForm("Tree2");
		std::cout << caseTwo;
		std::cout << formTwo;
		caseTwo.signForm(formTwo);
		formTwo.execute(caseTwo);
	}
	catch (std::exception &e)
	{
		std::cerr << "Error: " << e.what() << std::endl;
	}

	std::cout << "TEST 3" << "*******************************************"
			  << std::endl;
	try
	{
		Bureaucrat caseThree = Bureaucrat("Shurubbery CASE 3 officer", 130);
		ShrubberyCreationForm formThree = ShrubberyCreationForm("Tree3");
		std::cout << caseThree;
		std::cout << formThree;
		caseThree.signForm(formThree);
		formThree.execute(caseThree);
	}
	catch (std::exception &e)
	{
		std::cerr << "Error: " << e.what() << std::endl;
	}


	std::cout << "TEST 4" << "*******************************************"
			  << std::endl;
	try
	{
		Bureaucrat caseFour = Bureaucrat("Robotomy CASE 1 officer", 140);
		RobotomyRequestForm formFour =RobotomyRequestForm ("Robot1");
		std::cout << caseFour;
		std::cout << formFour;
		caseFour.signForm(formFour);
		formFour.execute(caseFour);
	}
	catch (std::exception &e)
	{
		std::cerr << "Error: " << e.what() << std::endl;
	}

	std::cout << "TEST 5" << "*******************************************"
			  << std::endl;
	try
	{
		Bureaucrat case5 = Bureaucrat("Robotomy CASE 2 officer", 50);
		RobotomyRequestForm form5 = RobotomyRequestForm("Robot2");
		std::cout << case5;
		std::cout << form5;
		case5.signForm(form5);
		form5.execute(case5);
	}
	catch (std::exception &e)
	{
		std::cerr << "Error: " << e.what() << std::endl;
	}

	std::cout << "TEST 6" << "*******************************************"
			  << std::endl;
	try
	{
		Bureaucrat case6 = Bureaucrat("Robotomy CASE 2 officer", 40);
		RobotomyRequestForm form6 = RobotomyRequestForm("Robot3");
		std::cout << case6;
		std::cout << form6;
		case6.signForm(form6);
		form6.execute(case6);
	}
	catch (std::exception &e)
	{
		std::cerr << "Error: " << e.what() << std::endl;
	}

	std::cout << "TEST 7" << "*******************************************"
			  << std::endl;
	try
	{
		Bureaucrat case7 = Bureaucrat("Pardon CASE 1 officer", 30);
		PresidentialPardonForm form7 = PresidentialPardonForm("ymori01");
		std::cout << case7;
		std::cout << form7;
		case7.signForm(form7);
		form7.execute(case7);
	}
	catch (std::exception &e)
	{
		std::cerr << "Error: " << e.what() << std::endl;
	}

	std::cout << "TEST 8" << "*******************************************"
			  << std::endl;
	try
	{
		Bureaucrat case8 = Bureaucrat("Pardon CASE 2 officer", 10);
		PresidentialPardonForm form8 = PresidentialPardonForm("ymori02");
		std::cout << case8;
		std::cout << form8;
		case8.signForm(form8);
		form8.execute(case8);
	}
	catch (std::exception &e)
	{
		std::cerr << "Error: " << e.what() << std::endl;
	}

	std::cout << "TEST 9" << "*******************************************"
			  << std::endl;
	try
	{
		Bureaucrat case9 = Bureaucrat("Pardon CASE 3 officer", 1);
		PresidentialPardonForm form9 = PresidentialPardonForm("ymori03");
		std::cout << case9;
		std::cout << form9;
		case9.signForm(form9);
		form9.execute(case9);
	}
	catch (std::exception &e)
	{
		std::cerr << "Error: " << e.what() << std::endl;
	}
	return 0;
}