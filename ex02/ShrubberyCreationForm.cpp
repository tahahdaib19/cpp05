#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm ::ShrubberyCreationForm():AForm("ShrubberyCreationForm",145,137)
{
    target = "default";
}
ShrubberyCreationForm ::ShrubberyCreationForm(const std::string target1):AForm("ShrubberyCreationForm",145,137)
{
    this->target = target1;
}
ShrubberyCreationForm ::ShrubberyCreationForm(const ShrubberyCreationForm &src):AForm(src)
{
    *this = src;
}
ShrubberyCreationForm &ShrubberyCreationForm ::operator=(const ShrubberyCreationForm &src)
{
    if (this != &src)
    {
        AForm::operator=(src);
        this->target = src.target;
    }
    return *this;
}
ShrubberyCreationForm ::~ShrubberyCreationForm()
{

    std::cout << "ShrubberyCreationForm destructor called" << std::endl;
}
void ShrubberyCreationForm ::execute(Bureaucrat const & executor) const
{
    checkExecution(executor);
    std::ofstream myfile((target + "_shrubbery").c_str());
    if (!myfile)
    {
        std::cout << "Error creating file" << std::endl;
        return;
    }
    myfile << "       _-_" << std::endl;
    myfile << "    /~~   ~~\\" << std::endl;
    myfile << " /~~         ~~\\" << std::endl;
    myfile << "{               }" << std::endl;
    myfile << " \\  _     _  /" << std::endl;
    myfile << "   ~  \\\\ //  ~" << std::endl;
    myfile << "_- -   | | _- _" << std::endl;
    myfile << "  _ -  | |   -_" << std::endl;
    myfile << "      // \\" << std::endl;
    myfile.close(); 
    std::cout << "Shrubbery created successfully in file: " << target + "_shrubbery" << std::endl;
}