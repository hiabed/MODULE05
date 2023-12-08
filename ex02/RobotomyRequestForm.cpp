#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm()
{
    // default constructor;
}

RobotomyRequestForm::RobotomyRequestForm(AForm &target)
{
    (void)target;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other)
{
    *this = other;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &other)
{
    if (this != &other)
    {
        // assignements;
    }
    return *this;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    // destructor;
}