//
// Created by yuumo on 2022/08/06.
//

#ifndef EX03_INTERN_HPP
#define EX03_INTERN_HPP

#include "Form.hpp"

class Intern {
public:
	Intern();
	Intern(const Intern& intern);
	Intern& operator=(const Intern& intern);
	~Intern();

	/*
	 * Member functions
	 */

	static Form* makeForm(const std::string &name, const std::string &target) ;

};


#endif //EX03_INTERN_HPP
