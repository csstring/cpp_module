#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"

Bureaucrat::Bureaucrat() : name("Unknown"), grade(150)
{}

Bureaucrat::Bureaucrat(std::string name, int grade) : name(name), grade(grade)
{}

Bureaucrat::Bureaucrat(const Bureaucrat& copy)
{
	*this = copy;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& ref)
{
	const_cast<std::string&>(name).assign(ref.getName());
	grade = ref.getgrade();
	return (*this);
}

Bureaucrat::~Bureaucrat()
{}

std::string Bureaucrat::getName() const
{
	return (this->name);
}

int Bureaucrat::getgrade() const
{
	return (this->grade);
}

void Bureaucrat::incrementGrade() throw(GradeTooHighException)
{
	if (grade == 1)
		throw(GradeTooHighException());
	grade--;
}

void Bureaucrat::decrementGrade() throw(GradeTooLowException)
{
	if (grade == 150)
		throw(GradeTooLowException());
	grade++;
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& ref)
{
	os << ref.getName() << ", " << "bureaucrat grade " << ref.getgrade() << std::endl;
	return os;
}

void Bureaucrat::signForm(Form &form)
{
	try
	{
		form.beSigned(*this);
		std::cout << getName() << " signed " << form.getName() << std::endl;
	}
	catch(std::exception& GradeTooLowException)
	{
		std::cout << getName() << " couldn't sign " << form.getName() << " because " << GradeTooLowException.what() << std::endl;
	}	
}

void Bureaucrat::executeForm(const Form& form)
{
	try
	{
		form.execute(*this);
	}
	catch(ShrubberyCreationForm::InOutFileException& InOutFileException)
	{
		std::cout << InOutFileException.what() << std::endl;
	}
	catch(Bureaucrat::GradeTooLowException& GradeTooLowException)
	{
		std::cout << GradeTooLowException.what() << std::endl;
	}
}