
#include "Bureaucrat.hpp"
int main ()
{
    	std::cout << "Create Forms and Bureaucrats ===" << std::endl;
        try
        {
            Bureaucrat b1("Taha", 1);
            Form f1("Form1", 1, 1);
            std::cout << b1 << std::endl;
            std::cout << f1 << std::endl;
            b1.signForm(f1);
            std::cout << f1 << std::endl;

        }
        catch (std::exception &e)
        {
            std::cerr << e.what() << std::endl;
        }
        std::cout << "Create Forms with invalid grades ===" << std::endl;
        try
        {
            Bureaucrat b1("new commer", 130);
            Form f2("important", 3, 2);
            std::cout << b1 << std::endl;
            std::cout << f2 << std::endl;
            b1.signForm(f2);
            std::cout << f2 << std::endl;
        }
        catch (std::exception &e)
        {
            std::cerr << e.what() << std::endl;
        }

        


   
}