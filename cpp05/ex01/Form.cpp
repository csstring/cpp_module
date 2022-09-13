#include "Form.hpp"

Form::Form() : name("nonexit"), indicateSigned(false), requireSign(0), executeSign(0)
{}

Form::Form(std::string name, const int requireSign, const int executeSign) : name(name), indicateSigned(false), requireSign(requireSign), executeSign(executeSign)
{}
Form::Form(const Form& copy) : requireSign(0), executeSign(0)
{
    *this = copy;
}
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
Form::~Form()
{}

void Form::beSigned(const Bureaucrat& ref) throw(Bureaucrat::GradeTooLowException)
{
    if (ref.getgrade() > requireSign)
        throw (Bureaucrat::GradeTooLowException());
    indicateSigned = true;
}

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