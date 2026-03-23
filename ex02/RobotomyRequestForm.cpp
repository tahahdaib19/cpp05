#include "Bureaucrat.hpp"
#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm():AForm("RobotomyRequestForm", 72, 45),target("default")
{
    
}
RobotomyRequestForm::RobotomyRequestForm(std::string target1):AForm("RobotomyRequestForm", 72, 45),target(target1)
{
    
}
RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &src):AForm(src),target(src.target)
{

}
RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &src)
{
    if (this != &src)
    {
        AForm::operator=(src);
        target = src.target;
    }
    return *this;
    
}

RobotomyRequestForm::~RobotomyRequestForm()
{

    std::cout<<"RobotomyRequestForm "<<this->target<<" destroyed\n";
}
void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
    checkExecution(executor);
    std::cout<<"*************************noiseeeeeeeee**************************\n";
    // to be continued also do presedintial 
    static int seed_counter = 0;
    if (seed_counter == 0)
    {
        srand(time(NULL));
        seed_counter++;
    }
    if ((std::rand() & 1) == 0)
        std::cout<<this->target<<" has been robotomized successfully\n";
    else
        std::cout<<"Failed to robotomize "<<this->target<<"\n";
    
    
}
