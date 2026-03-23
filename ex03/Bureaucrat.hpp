#ifndef Bureaucrat_HPP
#define Bureaucrat_HPP

#include <iostream>
#include <string>
#include <exception>
#include "AForm.hpp"



class Bureaucrat
{

private:
const std::string name;
int grade;
public:
class GradeTooLowException :public std::exception
{
    public:
    virtual const char* what() const throw();
};

class GradeTooHighException :public std::exception
{
    public:
    virtual const char* what() const throw();
};
Bureaucrat();
Bureaucrat(std::string name , int grade);
Bureaucrat(const Bureaucrat &src);
Bureaucrat &operator=(const Bureaucrat &src);
~Bureaucrat();

int get_grade() const;
std::string get_name() const;
void increment_grade();
void decrement_grade();
void signForm( AForm &f);
void executeForm(AForm const & form) const;
};
std::ostream& operator<<(std::ostream& out , const Bureaucrat& copy);

#endif