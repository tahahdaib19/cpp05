#include "Form.hpp"
#include "Bureaucrat.hpp"
const char *Form::GradeTooHighException::what() const throw()
{
    return "Grade is too high";
}
const char *Form::GradeTooLowException::what() const throw()
{
    return "Grade is too low";
}
Form::Form():name("default"),is_signed(false),grade_to_sign(150),grade_to_execute(150)
{
    
}
Form::Form(std::string f_name ,int grade_to_sign,int grade_to_execute):name(f_name),is_signed(false),grade_to_sign(grade_to_sign),grade_to_execute(grade_to_execute)
{
    if (grade_to_execute < 1 || grade_to_execute < 1)
        throw GradeTooHighException();
    if (grade_to_execute > 150 || grade_to_sign > 150)
        throw GradeTooLowException();
    is_signed = false;
    
}
Form::Form(const Form &src):name(src.name),is_signed(src.is_signed),grade_to_sign(src.grade_to_sign),grade_to_execute(src.grade_to_execute)
{
    
}
Form &Form::operator=(const Form &src)
{
    if(this != &src)
        this->is_signed = src.is_signed;
    return *this;
}
Form::~Form()
{
    std::cout << "Form destructor called" << std::endl;
}
std::string Form::get_name() const 
{
    return this->name;
}
bool Form::get_is_signed() const
{
    return this->is_signed;
}
int Form ::get_grade_to_sign() const
{
    return this->grade_to_sign;
}
int Form ::get_grade_to_execute() const
{
    return this->grade_to_execute;
}
void Form::beSigned(const Bureaucrat &b)
{
    if (b.get_grade() > this->grade_to_sign)
        throw GradeTooLowException();
    this->is_signed = true;
}
std::ostream &operator<<(std::ostream &out, const Form &f)
{
    out << "Form name: " << f.get_name() << ", is signed: " << f.get_is_signed() << ", grade required to sign: " << f.get_grade_to_sign() << ", grade required to execute: " << f.get_grade_to_execute();
    return out;
}
