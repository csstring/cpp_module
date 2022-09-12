#include "Form.hpp"

Form::Form();
Form::Form(std::string name, const int requireSign, const int executeSign);
Form::From(const Form& copy);
Form& Form::operator=(const From& ref);
std::string Form::getName();
bool Form::getIndicateSigned();
int Form::getRequireSign();
int Form::getExecuteSign();
Form::~Form();
void Form::incrementGrade() throw(GradeTooHighException);
void Form::decrementGrade() throw(GradeTooLowException);
std::ostream& operator<<(std::ostream& os, const From& ref);