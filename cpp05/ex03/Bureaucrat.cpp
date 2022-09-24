#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"

Bureaucrat::Bureaucrat() : name("Unknown"), grade(150)
{}

Bureaucrat::Bureaucrat(std::string name, int grade) : name(name), grade(grade)
{}

Bureaucrat::Bureaucrat(const Bureaucrat& copy) : name(copy.getName()), grade(copy.getGrade())
{}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& ref)
{
	const_cast<std::string&>(name).assign(ref.getName());
	grade = ref.getGrade();
	return (*this);
}

Bureaucrat::~Bureaucrat()
{}

std::string Bureaucrat::getName() const
{
	return (this->name);
}

int Bureaucrat::getGrade() const
{
	return (this->grade);
}

void Bureaucrat::incrementGrade() throw(GradeTooHighException)
{
	if (grade <= 1)
		throw(GradeTooHighException());
	grade--;
}

void Bureaucrat::decrementGrade() throw(GradeTooLowException)
{
	if (grade >= 150)
		throw(GradeTooLowException());
	grade++;
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& ref)
{
	os << ref.getName() << ", " << "bureaucrat grade " << ref.getGrade() << std::endl;
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

void Bureaucrat::executeForm(Form const& form)
{
	try
	{
		form.execute(*this);
		std::cout << name <<" executed " << form.getName() << std::endl;
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