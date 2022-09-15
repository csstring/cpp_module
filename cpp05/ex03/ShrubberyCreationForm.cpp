#include "ShrubberyCreationForm.hpp"
#include <iostream>

const std::string ShrubberyCreationForm::asciiTree = "\n \
                                              .\n \
                                   .         ;\n \
      .              .              ;%     ;;\n \
        ,           ,                :;%  %;\n \
         :         ;                   :;%;\'     .,\n \
,.        %;     %;            ;        %;\'    ,;\n \
  ;       ;%;  %%;        ,     %;    ;%;    ,%\'\n \
   %;       %;%;      ,  ;       %;  ;%;   ,%;\'\n \
    ;%;      %;        ;%;        % ;%;  ,%;\'\n \
     `%;.     ;%;     %;\'         `;%%;.%;\'\n \
      `:;%.    ;%%. %@;        %; ;@%;%\'\n \
         `:%;.  :;bd%;          %;@%;\'\n \
           `@%:.  :;%.         ;@@%;\'\n \
             `@%.  `;@%.      ;@@%;\n \
               `@%%. `@%%    ;@@%;\n \
                 ;@%. :@%%  %@@%;\n \
                   %@bd%%%bd%%:;\n \
                     #@%%%%%:;;\n \
                     %@@%%%::;\n \
                     %@@@%(o);  . \'\n \
                     %@@@o%;:(.,\'\n \
                 `.. %@@@o%::;\n \
                    `)@@@o%::;\n \
                     %@@(o)::;\n \
                    .%@@@@%::;\n \
                    ;%@@@@%::;.\n \
                   ;%@@@@%%:;;;.\n \
               ...;%@@@@@%%:;;;;,..  \n";

ShrubberyCreationForm::ShrubberyCreationForm() : Form()
{}
ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form(target, 145, 137)
{}
ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& copy)
{
	*this = copy;
}
ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& ref)
{
	this->setName(ref);
	this->setIndicateSigned(ref);
	this->setRequireSign(ref);
	this->setExecuteSign(ref);
	return (*this);
}
ShrubberyCreationForm::~ShrubberyCreationForm()
{}

void ShrubberyCreationForm::execute(Bureaucrat const& executor) const throw(InOutFileException, Bureaucrat::GradeTooLowException)
{
	std::string temp;
	std::fstream o_file;

	beExecuteCheck(executor);
	temp.assign(getName());
	temp.append("_shrubbery");
	o_file.open(temp, std::fstream::out | std::fstream::trunc);
	if (o_file.fail())
		throw (InOutFileException());
	std::cout << executor.getName() <<" executed " << getName() << std::endl;
	o_file << asciiTree << std::endl;
	o_file.close();
}