#include "Bureaucrat.hpp"
#include "Intern.hpp"
int main ()
{
    	
    try
    {
        Intern someRandomIntern;
        AForm* rrf;
        rrf = someRandomIntern.makeForm("robotomy request", "Bender");
        std::cout << *rrf << std::endl;
        Bureaucrat a("taha", 45);
        rrf->beSigned(a);
        a.executeForm(*rrf);

        delete rrf;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

     try
    {
        Intern someRandomIntern;
        AForm* rrf;
        rrf = someRandomIntern.makeForm("shrubbery creation", "taha");
        std::cout << *rrf << std::endl;
        Bureaucrat a("taha", 45);
        rrf->beSigned(a);
        a.executeForm(*rrf);

        delete rrf;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
   


}
