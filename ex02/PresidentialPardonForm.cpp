#include "PresidentialPardonForm.hpp"
PresidentialPardonForm::PresidentialPardonForm():AForm("PresidentialPardonForm",25,5),target("default")
{

}
PresidentialPardonForm::PresidentialPardonForm(std ::string target1):AForm("PresidentialPardonForm",25,5),target(target1)
{

}
PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &src):AForm(src),target(src.target)
{
}
PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &src)
{
    if (this != &src)
    {
        AForm::operator=(src);
        target = src.target;
    }
    return *this;
}
PresidentialPardonForm::~PresidentialPardonForm()
{
    std::cout<<"PresidentialPardonForm "<<this->target<<"destroyed\n";
}
void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{

    checkExecution(executor);
    std::cout<<this->target<<" has been pardoned by Zaphod Beeblebrox\n";
}