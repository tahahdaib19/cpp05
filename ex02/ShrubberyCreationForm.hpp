#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP
#include <fstream>
#include "AForm.hpp"
class ShrubberyCreationForm : public AForm
{
    private:
    std::string target;
    public:
    ShrubberyCreationForm();
    ShrubberyCreationForm(std::string target);
    ShrubberyCreationForm(const ShrubberyCreationForm &src);
    ShrubberyCreationForm &operator=(const ShrubberyCreationForm &src);
    ~ShrubberyCreationForm();
    void execute(Bureaucrat const & executor) const;
    

};
#endif