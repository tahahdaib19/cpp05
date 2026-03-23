
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"    
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
int main ()
{
    	//test shrubbery creation form
    std::cout << "-------------------- \n" << std::endl;
    std::cout << "ShrubberyCreationForm test \n" << std::endl;
    try
    {
        Bureaucrat a("taha", 133);
        std::cout << a << std::endl;
        ShrubberyCreationForm f("home");
        std::cout << f << std::endl;
        a.signForm(f);
        std::cout << f << std::endl;
        a.executeForm(f);


    
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    std::cout << "-------------------- \n" << std::endl;
    try
    {
        ShrubberyCreationForm f("home2");
        ShrubberyCreationForm f2(f);
        std::cout << f2 << std::endl;
        
        Bureaucrat b("taha2", 1);
        b.signForm(f2);
        Bureaucrat c ("sami",150);
        c.executeForm(f2);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << "-------------------- \n" << std::endl;
    //make same test for robotomy request form
    try
    {
        Bureaucrat a("taha", 45);
        std::cout << a << std::endl;
        RobotomyRequestForm f("home");
        std::cout << f << std::endl;
        a.signForm(f);
        std::cout << f << std::endl;
        a.executeForm(f);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    std::cout << "-------------------- \n" << std::endl;
    //make same test for presidential pardon form
    try
    {
        Bureaucrat a("taha", 5);
        std::cout << a << std::endl;
        PresidentialPardonForm f("home");
        std::cout << f << std::endl;
        a.signForm(f);
        std::cout << f << std::endl;
        a.executeForm(f);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
     return 0;
    
    
}