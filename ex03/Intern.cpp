#include "Intern.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern()
{
}

Intern::Intern(const Intern &other)
{
    *this = other;
}

Intern &Intern::operator=(const Intern &other)
{
    (void)other;
    return *this;
}

AForm *Intern::makeForm(std::string name, std::string target)
{
    std::string form_names[] = {
        "robotomy request",
        "presidential pardon",
        "shrubbery creation"
    };
    AForm *forms[] = {
        new RobotomyRequestForm (target),
        new PresidentialPardonForm (target),
        new ShrubberyCreationForm (target)
    };
    for (int i = 0; i < 3; i++)
    {
        if (name == form_names[i])
        {
            std::cout << "Intern creates " << name << std::endl;
            return forms[i];
        }
    }
    std::cout << "Intern can't create the " << name << std::endl;
    return NULL;
}

Intern::~Intern()
{
}