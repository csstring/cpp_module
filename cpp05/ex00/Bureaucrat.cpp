#include "Bureaucrat.hpp"

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