//
// Created by yuumo on 2022/08/05.
//

#include <fstream>

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() {
  std::cout << "<Default constructor is called in ShrubberyCreationForm>"
            << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) : Form(
    target + "_form", kGradeRequiredToSign, kGradeRequiredToExecute),
                                                                          _target(
                                                                              target
                                                                                  +
                                                                                      "_shrubbery") {
  std::cout << "<Constructor is called in ShrubberyCreationForm>" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &scf)
    : Form(scf) {
  std::cout << "<Copy constructor is called in ShrubberyCreationForm>"
            << std::endl;
  *this = scf;
}

ShrubberyCreationForm &
ShrubberyCreationForm::operator=(const ShrubberyCreationForm &scf) {
  Form::operator=(scf);
  _target = scf._target;
  return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
  std::cout << "<Destructor is called in ShrubberyCreationForm>" << std::endl;
}


/*
 * Member functions
 */

/**
 * Create a file <target>_shrubbery in the working directory, and writes ASCII trees inside it.
 * @param exec
 */
void ShrubberyCreationForm::execute(
    const Bureaucrat &exec) const throw(class Form::GradeTooLowException, class Form::GradeTooHighException, class Form::NotSignedException) {

  Form::execute(exec);

  std::cout << "EXECUTE!!!" << std::endl;

  std::ofstream ofs(_target.c_str());
  if (!ofs.is_open())
    throw ShrubberyCreationForm::OpenFileErrorException();
  ofs
      << "============================##=========####=#############>##>>#>>>>#>>>>>>>>>>>>"
      << std::endl
      << "=#=##=##=##########################################>#>#>>#>>#>>>>>>>>>>>>>>>>>>>"
      << std::endl
      << "##################################>#########>#>>#>>>>>>>>>>>>>>>>>>>>>>>>>>;>;;;"
      << std::endl
      << "#########>##>#>#>#>>#>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>;;;;;;;;;;;;;;"
      << std::endl
      << ">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>;>>;;;;;;;;;;;;;;;;;;;;;:"
      << std::endl
      << ";;>;;>;;>>;>>>>;;>;>>;;>;;>;;>;;>>;;+++JOz1+<<;;;;;;;;;;;;;;;;;;;:;;;;:::::;::::"
      << std::endl
      << ";;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;+&zwOUdkwwXOZI=++&Oz<;;;::;:;:::::::::::::::::::"
      << std::endl
      << ";;;;;;;;;;;;:;::;::;::;:;:;:;:+udHSzywHwzOZAwUX0wVOO+<::::::::::::::::::::::::::"
      << std::endl
      << "::::::::::::::::::::::::::::<+AHXkZZzOWkXXXWSWRAWXZww1<<::::::::::::::~::::~::~:"
      << std::endl
      << "::::~::~::~:::::::::::::::+uAkgHHHWWsdWWKHkwAHHWHSZZXkZv::~:~~~~~~~~~~:~~~~~~~:~"
      << std::endl
      << "~~~~~~~:~~~~~~~~~~~~~~(0wdRAdMM@HkmWXHWHHHNmXWkHXXXwllwz+~~~:~:~~:~~~~~~~~:~~~~~"
      << std::endl
      << "~~~~~~~~~~~~~~~~~~~~~~~dHHHHM@HHHMHXXWHS0XwWWWXWpUSwXwwI<_~~~~~~~~~~~~~~~~~~~~~~"
      << std::endl
      << "~~~~~~~~~~~~~~~~~~~~((gHHWWwHWHWSWWWdSZwkUOVwwZwUWkXXSXI>~~~~~~~~~~~~~~~~~~~~~~~"
      << std::endl
      << "~~~~~~~~~~~~~~~.~~~_XHMNHS0S0XQHMHHmHHHXXkOOZwwXkzXXXXOO+(((-__~~~~~~~~~~.~.~..~"
      << std::endl
      << "...~.............-ddWNMMNkXMHkHHMHHWH@HmHkwWkZUUUwdkWXXWwIjwXo_................."
      << std::endl
      << "................_dkHHHHMHMNHWHHMMMM@MMHHHHHkwXwwyZOZWkZUSyXZwl+-................"
      << std::endl
      << "..................dHH@H@MHkWWWMMMMMMHHHMmHkwkXXkXWwOwXWk0VO1OZI!...`..`..`......"
      << std::endl
      << "..........`..`.. #MHHHpH#HHHMHMMH@MkWHWHMmAwkkXWHkOvAOVUXZwk+-~`````````````````"
      << std::endl
      << "`````````````````.C7WUjwHMHMMHHMMMMNHHHQHHHkHHWHHWXZXXQKkkXv!```````````````````"
      << std::endl
      << "```````````````````` (zMYHMHMHMMXHMMMAqMmHHHMM9HHXdWkXfXWSC~````````````````````"
      << std::endl
      << "`..`.```````````````` !!_`=`  ! (C#THNHMNMMb..(HSOdY<jXUZOv ```` ` ` ```````````"
      << std::endl
      << "``````.`````````````````````````````#7`MM``````#~/6~#<!!#!``````````````````````"
      << std::endl
      << ".``.``````````````````````````` ```````dM}`` `````` ` ``````` `` ```````````````"
      << std::endl
      << "......-......_-...-....__.-.....-.-..-(MMl.-...-----.----(..((-(---(((((-((((JJJ"
      << std::endl
      << "TYYYYYYUYYYYYYYYUYYYYYY9YYYVYYYUYYYUTTCCzzzvvvC1zzv1z1<111+<<<<<11++=zIlzOvOOOOO"
      << std::endl
      << "####+1++++++++++#<++#1###<+<<<>;>>;++++;><<>;<<<<+<++++<<#1>+++<z+11#><#1###11##"
      << std::endl
      << "<<>+<<<;>#++z#1z1+++<+++#zz#11z111z+1##1=#1zzz#z+J1zz=z1z++z1zz+1<>##>>#+###+1<#"
      << std::endl;
  ofs.close();
}

/*
 * OpenFileErrorException
 */

ShrubberyCreationForm::OpenFileErrorException::OpenFileErrorException()
    : _errorMessage("File open error.") {
  std::cout
      << "<Default constructor is called in OpenFileErrorException in ShrubberyCreationForm>"
      << std::endl;
}

ShrubberyCreationForm::OpenFileErrorException::~OpenFileErrorException() throw() {}

const char *ShrubberyCreationForm::OpenFileErrorException::what() const throw() {
  return _errorMessage.c_str();
}
