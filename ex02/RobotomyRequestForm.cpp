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

void RobotomyRequestForm::execute(Bureaucrat const &executer) const
{
    if (isSigned() && executer.getGrade() > 45)
    {
        GradeTooLowException low;
        throw (low);
    }
    else
    {
        std::cout << "WRRRRRR!! ";
        srand(time(0));
        if (rand() % 2 == 0)
        {
            std::cout << _target << " has been robotomized successfully\n";
        }
        else
        {
            std::cout << "the robotomy failed.\n";
        }
    }
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    // destructor;
}