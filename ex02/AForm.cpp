#include "AForm.hpp"
#include "Bureaucrat.hpp"
const char *AForm::GradeTooHighException::what() const throw()
{
    return "Grade is too high";
}
const char *AForm::GradeTooLowException::what() const throw()
{
    return "Grade is too low";
}
const char *AForm::FormCantBeSignedException::what() const throw()
{
    return "Form can't be signed";
}
AForm::AForm():name("default"),is_signed(false),grade_to_sign(150),grade_to_execute(150)
{
    
}
AForm::AForm(std::string f_name ,int grade_to_sign,int grade_to_execute):name(f_name),is_signed(false),grade_to_sign(grade_to_sign),grade_to_execute(grade_to_execute)
{
    if (grade_to_execute < 1 || grade_to_execute < 1)
        throw GradeTooHighException();
    if (grade_to_execute > 150 || grade_to_sign > 150)
        throw GradeTooLowException();
    is_signed = false;
    
}
AForm::AForm(const AForm &src):name(src.name),is_signed(src.is_signed),grade_to_sign(src.grade_to_sign),grade_to_execute(src.grade_to_execute)
{
    
}
AForm &AForm::operator=(const AForm &src)
{
    if(this != &src)
        this->is_signed = src.is_signed;
    return *this;
}
AForm::~AForm()
{
    std::cout << "AForm destructor called" << std::endl;
}
std::string AForm::get_name() const 
{
    return this->name;
}
bool AForm::get_is_signed() const
{
    return this->is_signed;
}
int AForm ::get_grade_to_sign() const
{
    return this->grade_to_sign;
}
int AForm ::get_grade_to_execute() const
{
    return this->grade_to_execute;
}
void AForm::beSigned(const Bureaucrat &b)
{
    if (b.get_grade() > this->grade_to_sign)
        throw GradeTooLowException();
    this->is_signed = true;
}
void AForm::checkExecution(const Bureaucrat &executor) const
{
    if (!this->is_signed)
        throw FormCantBeSignedException();
    if (executor.get_grade() >this->grade_to_execute)
        throw GradeTooLowException();
    
}
std::ostream &operator<<(std::ostream &out, const AForm &f)
{
    out << "Form name: " << f.get_name() << ", is signed: " << f.get_is_signed() << ", grade required to sign: " << f.get_grade_to_sign() << ", grade required to execute: " << f.get_grade_to_execute();
    return out;
}
