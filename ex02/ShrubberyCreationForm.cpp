#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
{
    // default constructor;
}

ShrubberyCreationForm::ShrubberyCreationForm(AForm &target)
{
    (void)target;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other)
{
    *this = other;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other)
{
    if (this != &other)
    {
        // assignements;
    }
    return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    // destructor;
}