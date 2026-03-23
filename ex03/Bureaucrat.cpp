#include "Bureaucrat.hpp"
#include "AForm.hpp"
const char *Bureaucrat::GradeTooHighException::what() const throw()
{
    return "Grade is too high";
}
const char *Bureaucrat::GradeTooLowException::what() const throw()
{
    return "Grade is too low";
}
// Bureaucrat::Bureaucrat()
// {
// this wont work because name is const and was initialized in the constructor with an initializer list
//     name = "temp";
//     grade = 150;
// }
Bureaucrat ::Bureaucrat():name("temp"),grade(150)
{
    
}
Bureaucrat::Bureaucrat(std::string b_name , int b_grade):name(b_name)
{
    if (b_grade  < 1)
        throw GradeTooHighException();
    if(b_grade > 150)
        throw GradeTooLowException();
    this->grade = b_grade;
}

Bureaucrat ::Bureaucrat(const Bureaucrat &src):name(src.name)
{
    this->grade = src.grade;
}
Bureaucrat &Bureaucrat ::operator=(const Bureaucrat &src)
{
    if (this != &src)
    {
        this->grade = src.grade;
    }
    return *this;

}
Bureaucrat ::~Bureaucrat()
{
    std::cout << "Bureaucrat destructor called" << std::endl;
}
int Bureaucrat::get_grade() const
{
    return this->grade;
}
std::string Bureaucrat ::get_name() const
{
    return this->name;
}
void Bureaucrat::increment_grade()
{
    if (this->grade == 1)
        throw GradeTooHighException();
    this->grade--;
}
void Bureaucrat::decrement_grade()
{
    if (this->grade == 150)
        throw GradeTooLowException();
    this->grade++;
}
std::ostream& operator <<(std::ostream& out ,const Bureaucrat& obj)
{
    out <<"bureaucrat name: "<< obj.get_name() << ", bureaucrat grade " << obj.get_grade() << std::endl;
    return out;
}
void Bureaucrat::signForm(AForm &f)
{
    try
    {
        f.beSigned(*this);
        std::cout<<this->get_name()<<" signed "<<f.get_name()<<std::endl;
    
    }
    catch(const std::exception& e)
    {
        std::cout<<this->get_name()<<" couldn't sign "<<f.get_name()<<" because "<<e.what()<<std::endl;
    }
    
}
void Bureaucrat::executeForm(AForm const & form) const
{
    try
    {
        form.execute(*this);
        std::cout << this->get_name() << " executed " << form.get_name() << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cout << this->get_name() << " couldn't execute " << form.get_name() << " because " << e.what() << std::endl;
    }
}