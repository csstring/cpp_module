#include "Form.hpp"
//#include "Bureaucrat.hpp"

Form::Form() : name("nonexit"), indicateSigned(false), requireSign(0), executeSign(0)
{}
Form::Form(std::string name, const int requireSign, const int executeSign) : name(name), indicateSigned(false), requireSign(requireSign), executeSign(executeSign)
{}
Form::Form(const Form& copy) : name(copy.getName()), indicateSigned(copy.getIndicateSigned()), requireSign(copy.getRequireSign()), executeSign(copy.getExecuteSign())
{}
Form& Form::operator=(const Form& ref)
{
    const_cast<std::string&>(name).assign(ref.getName());
    indicateSigned = ref.getIndicateSigned();
    const_cast<int&>(requireSign) = ref.getRequireSign();
    const_cast<int&>(executeSign) = ref.getExecuteSign();
    return (*this);
}

std::string Form::getName() const { return (this->name); }
bool Form::getIndicateSigned() const { return (this->indicateSigned); }
int Form::getRequireSign() const { return (this->requireSign); }
int Form::getExecuteSign() const { return (this->executeSign); }
void Form::setName(const Form& ref)
{ const_cast<std::string&>(name).assign(ref.getName()); }

void Form::setIndicateSigned(const Form& ref) 
{indicateSigned = ref.getIndicateSigned();}

void Form::setRequireSign(const Form& ref)
{ const_cast<int&>(requireSign) = ref.getRequireSign(); }

void Form::setExecuteSign(const Form& ref)
{const_cast<int&>(executeSign) = ref.getExecuteSign();}

Form::~Form()
{}

std::ostream& operator<<(std::ostream& os, const Form& ref)
{
    os << "Form name : " << ref.getName() << std::endl;
    if (ref.getIndicateSigned())
        os << "Sign status : " << "yes" << std::endl;
    else
        os << "Sign status : " << "No" << std::endl;
    os << "RequireSign Grade : " << ref.getRequireSign() << std::endl;
    os << "ExecuteSign Grade : " << ref.getExecuteSign() << std::endl;
    return (os);
}

void Form::beExecuteCheck(const Bureaucrat& executor) const throw(Bureaucrat::GradeTooLowException)
{
	if (executor.getGrade() > executeSign)
	{
		std::cout << executor.getName() << " couldn't execute " << this->name << " because ";
		throw (Bureaucrat::GradeTooLowException());
	}
}

void Form::beSigned(Bureaucrat& ref) throw(Bureaucrat::GradeTooLowException)
{
    if (ref.getGrade() > requireSign)
        throw (Bureaucrat::GradeTooLowException());
    this->indicateSigned = true;
}