#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm()
{
    // default constructor;
}

PresidentialPardonForm::PresidentialPardonForm(AForm &target)
{
    (void)target;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other)
{
    *this = other;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &other)
{
    if (this != &other)
    {
        // assignements;
    }
    return *this;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    // destructor;
}