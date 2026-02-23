#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP
#include "AForm.hpp"
#include<cstdlib>
#include<ctime>
class RobotomyRequestForm : public AForm
{
    private:
    std::string target;
    public:
    RobotomyRequestForm();
    RobotomyRequestForm(const std::string target);
    RobotomyRequestForm(const RobotomyRequestForm &src);
    ~RobotomyRequestForm();
    RobotomyRequestForm &operator=(const RobotomyRequestForm &src);
    void execute(Bureaucrat const & executor) const;
};
#endif;
