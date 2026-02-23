#ifndef AFORM_HPP
#define AFORM_HPP
#include <iostream>
#include <exception>
#include <string>
class Bureaucrat;

class AForm
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
    class FormCantBeSignedException : public std::exception
    {
        public:
        virtual const char* what() const throw();
    };
    AForm();
    AForm(std::string f_name , int f_grade_to_sign,int f_grade_to_execute);
    AForm(const AForm &src);
    AForm &operator=(const AForm &src);
    virtual ~AForm();
    std::string get_name() const;
    bool get_is_signed() const;
    int get_grade_to_sign() const;
    int get_grade_to_execute() const;
    void beSigned(const Bureaucrat &b);
    void checkExecution(const Bureaucrat &executor) const;
    virtual void execute(Bureaucrat const & executor) const = 0;
   



};
std::ostream &operator<<(std::ostream &out, const AForm &f);

#endif