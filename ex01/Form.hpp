#ifndef FORM_HPP
#define FORM_HPP
#include <iostream>
#include <exception>
#include <string>
class Bureaucrat;

class Form
{
    private:
    const std::string name;
    bool is_signed;
    const int grade_to_sign;
    const int grade_to_execute;
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
    Form();
    Form(std::string f_name , int f_grade_to_sign,int f_grade_to_execute);
    Form(const Form &src);
    Form &operator=(const Form &src);
    ~Form();
    std::string get_name() const;
    bool get_is_signed() const;
    int get_grade_to_sign() const;
    int get_grade_to_execute() const;
    void beSigned(const Bureaucrat &b);
   



};
std::ostream &operator<<(std::ostream &out, const Form &f);

#endif