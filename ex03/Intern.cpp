#include "Intern.hpp"
Intern::Intern()
{
}
Intern ::Intern(const Intern &src)
{
    *this = src;
}
Intern &Intern::operator=(const Intern &src)
{
    (void)src;
    return *this;
}
Intern::~Intern()
{

}
static AForm* createShrubbery(std::string target)
{
	return (new ShrubberyCreationForm(target));
}
static AForm* createRobotomy(std::string target)
{
    return (new RobotomyRequestForm(target));
}
static AForm* createPresidential(std::string target)
{
    return (new PresidentialPardonForm(target));
}
AForm *Intern::makeForm(std::string f_name ,std::string target)
{
   std::string my_forms[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
    AForm* (*form_creation_functions[3])(std::string) = {createShrubbery, createRobotomy, createPresidential};
    for (int i = 0; i < 3; i++)
    {
        if (f_name == my_forms[i])
        {
            std::cout << "intern creates " << f_name << "form"<<std::endl;
            return form_creation_functions[i](target);

        }

        
    }
    std::cout << "intern can't create " << f_name << "form because it doesn't exist"<<std::endl;
    return NULL;
}