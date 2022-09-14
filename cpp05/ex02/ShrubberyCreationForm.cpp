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

void ShrubberyCreationForm::printTree(std::string target) const
{
	std::string temp;
	std::fstream o_file;

    temp.assign(target);
	temp.append("_shrubbery");
    o_file.open("test.txt", std::fstream::out | std::fstream::trunc);
    if (!o_file.fail())
    {
        std::cout << "out file open error" << std::endl;
        throw (InOutFileException());
    }
	o_file << asciiTree << std::endl;
	o_file.close();
}

void ShrubberyCreationForm::execute(Bureaucrat const& executor) const
{(void)executor;
	//beExecuteCheck(executor);
	printTree(getName());
}