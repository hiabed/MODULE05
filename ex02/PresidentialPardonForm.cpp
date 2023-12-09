#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm()
{
    // default constructor;
}

PresidentialPardonForm::PresidentialPardonForm(AForm &target)
{
    _target = target;
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

void PresidentialPardonForm::execute(Bureaucrat const &executer) const
{
    if (!isSigned() && executer.getGrade() > 5)
    {
        GradeTooLowException low;
        throw (low);
    }
    else
        std::cout << _target << " has been pardoned by Zaphod Beeblebrox.\n";
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    // destructor;
}