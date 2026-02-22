
#include "Bureaucrat.hpp"
int main ()
{
    std::cout << "-------------------- \n" << std::endl;
    std::cout << "constructors tests \n" << std::endl;

    std::cout << "deffault constructor test \n" << std::endl;
    try
    {
         Bureaucrat test;
         std::cout<<test;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    //-------------------------------
    

    std::cout << "\nparameterized ctor test \n" << std::endl;
    try
    {
        Bureaucrat a("taha", 42);
        std::cout << a << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    //---------------------------------
    std::cout << "\ncopy constructor test \n" << std::endl;
    try
    {
        Bureaucrat a("taha", 150);
        std::cout << a << std::endl;
        Bureaucrat b(a);
        std::cout << b << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    //-----------------------------
    std::cout << "\nassignment operator test \n" << std::endl;    
    try
    {
        Bureaucrat a("taha", 19);
        std::cout << a << std::endl;
        Bureaucrat b;
        std::cout << b << std::endl;
        b = a;
        std::cout << b << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    std::cout << "-------------------- \n" << std::endl;
//-------------------------------------
  std::cout << "grade exception test \n" << std::endl;
     try          
     {
         Bureaucrat a("taha", 151);
         std::cout << a << std::endl;
     }
     catch (std::exception &e)
     {
         std::cout << e.what() << std::endl;
     }

    try          
     {
         Bureaucrat a("sami", 0);
         std::cout << a << std::endl;
     }
     catch (std::exception &e)
     {
         std::cout << e.what() << std::endl;
     }

    try          
     {
         Bureaucrat a("taha", 1);
         std::cout << a << std::endl;
        a.increment_grade();
        std::cout << "After incrementing: " << a << std::endl;
     }
     catch (std::exception &e)
     {
         std::cout << e.what() << std::endl;
     }



     try 
    {
        Bureaucrat a("taha", 150);
        std::cout << a << std::endl;
        a.decrement_grade();
        std::cout << "After decrementing: " << a << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }


    try          
     {
         Bureaucrat a("taha", 3);
         std::cout << a << std::endl;
        a.increment_grade();
        std::cout << "After incrementing: " << a << std::endl;
     }
     catch (std::exception &e)
     {
         std::cout << e.what() << std::endl;
     }



    try 
    {
        Bureaucrat a("taha", 130);
        std::cout << a << std::endl;
        a.decrement_grade();
        std::cout << "After decrementing: " << a << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }


   
}